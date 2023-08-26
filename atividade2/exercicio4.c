#include <stdio.h>
#include <stdlib.h>

int conta_int_array(int array[], int busca, int n){
    
    int qtd = 0;
    
    for (int i = 0; i < n; i++){
        if (array[i] == busca)
        {
            qtd ++; 
        }
    }
    
    return qtd;
}

int main(int argc, char *argv[]) {
    
    int array[]= {5, 9, 6, 11, 6, 5};
    int busca = 7;
    int n = sizeof(array)/sizeof(int);
    
    printf("%d \n", conta_int_array(array, busca, n));

    return 0;
    
}