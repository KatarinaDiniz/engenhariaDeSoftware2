#include <stdio.h>

float calcularIMC(){
    float peso, altura, imc;

    printf("Informe seu peso (em Kg): \n");
    scanf("%f", &peso);
    printf("Informe sua altura (em metros): \n");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    return imc;
}

int main(){
    float imc = calcularIMC();

    if(imc < 18.5){
        printf("IMC = %.2f, situação: Abaixo do peso! \n", imc);
    } else if (imc < 24.9){
        printf("IMC = %.2f, situação: Peso ideal! \n", imc);
    } else {
        printf("IMC = %.2f, situação: Acima do peso! \n", imc);
    }
}