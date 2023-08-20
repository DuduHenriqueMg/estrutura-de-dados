#include <stdio.h>
#include <stdlib.h>

int soma_array(int array[], int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma += array[i];
    }
    return soma;
}

int main(int argc, char *argv[]) {
    
    int array[]= {5, 7 , 9, 7};
    int n = sizeof(array)/sizeof(int);

    printf("Soma: %d \n", soma_array(array, n));

    return 0;
    
}