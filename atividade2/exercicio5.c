#include <stdio.h>
#include <stdlib.h>

int *multiplica_array(int array1[], int array2[], int tamanho) {
    int *resultado = malloc(tamanho * sizeof(int));
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] * array2[i];
    }
    return resultado;
}

int main(int argc, char *argv[]) {
    int array1[] = {5, 7, 9, 6};
    int array2[] = {5, 7, 9, 6};
    int tamanho = sizeof(array1) / sizeof(int);
    
    int *resultado = multiplica_array(array1, array2, tamanho);
    
    for (int i = 0; i < tamanho; i++) {
        printf("%d", resultado[i]);
        if (i < tamanho - 1) {
            printf(", ");
        }
    }
   
    free(resultado);
    
    return 0;
}
