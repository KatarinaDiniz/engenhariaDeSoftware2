#include <stdio.h>
#include <stdlib.h>

int* alocar(){
    int *memoria = (int*) malloc(sizeof(int));
    return memoria;
}

int main(){
    int *num = alocar();
    if (num != NULL){
        printf("Informe um número inteiro: \n");
        scanf("%d", num);
        printf("Número informado: %d", *num);
    }
    return 0;
}