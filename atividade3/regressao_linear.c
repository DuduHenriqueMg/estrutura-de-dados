#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Ponto {
    float x;
    float y;
} Ponto;

float media(float *array, int n){
    float soma = 0;
    n /= 2;
    for (int i = 0; i < n; i++) {
        soma += array[i];
    }
    return soma/n;
    
};

float inclinacao (Ponto *pontos, int n){
    float media_x = media(pontos, n);
    float media_y = media(pontos, n);
    float conta1;
    float conta2;
    
    for (int i = 0; i < n; i++)
    {
        conta1 += (pontos[i].x - media_x) * (pontos[i].y - media_y); 
        conta2 += pow((pontos[i].x - media_x), 2);
    }

    float resultado = conta1/conta2;
    return resultado;

};

int main(int argc, char *argv[]) {

    
    FILE *arquivo = fopen(argv[1], "r");
    int qtd_pontos = 0; 
    fscanf(arquivo, "%d", &qtd_pontos);
    Ponto* pontos = malloc(sizeof(Ponto)*qtd_pontos);

    for(int i = 0; i < qtd_pontos; i++) {
        fscanf(arquivo, "%f, %f", &pontos[i].x, &pontos[i].y);      
    }

    float inclinacao = inclinacao(pontos, qtd_pontos);

    
    
        

    
    

    

}