#include <stdio.h>
#include <stdlib.h>

void menor_maior_array(int array[], int n){
    
    int maior = array[0];
    int menor = array[0];
    
    for (int i = 0; i < n; i++){
        if (array[i] > maior)
        {
            maior = array[i]; 
        }
        if(array[i] < menor ){
            menor = array[i];
        } 
    }
    
    printf("%d %d \n", menor, maior);
    
}

int main(int argc, char *argv[]) {
    
    int array[]= {-1, -7 , 20000, 7};
    int n = sizeof(array)/sizeof(int);
    
    menor_maior_array(array, n);

    return 0;
    
}