#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int busca_string(char *array[], char *busca, int n){
   
    for (int i = 0; i < n ; i++){
        if (strcmp(array[i], busca) == 0){
            return 1;
        }    
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
    
    char *array[] = {"texto", "J", "EDA"};
    char *busca = "J";
    int n = sizeof(array) / sizeof(char *);
    
    printf("%d \n", busca_string( array, busca, n));

    return 0;
    
}
