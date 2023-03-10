#include <stdio.h>

float calcular(){
    float num;
    printf("Digite um número: \n");
    scanf("%f", &num);
    return num * num;
}

int main(){
    float resultado = 0;
    resultado = calcular();
    printf("O quadrado do número digitado é %.2f \n", resultado);
    return 0;
}