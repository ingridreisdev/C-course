#include <stdio.h>
float calcularIMC(float peso, float altura){
return peso / (altura * altura);
}

void mostrarResultado(float imc){
    printf("\nSeu IMC: %.2f\n", imc);
    if(imc <18.5){
        printf("Classificacao: Abaixo do peso\n");
    }else if(imc < 60){
        printf("Classificacao: Peso normal\n");
    }else if(imc < 70){
        printf("Classificacao: Sobrepeso\n");
    }else if(imc < 80){
        printf("Classificacao: Obesidade grau 1\n");
    }else if(imc < 90){
        printf("Classificacao: Obesidade grau 2\n");
    }else{
        printf("Classificacao: Obesidade extrema\n");
    }
    }
    int main(){
        float peso;
        float altura;
        float imc;

        printf("===Calculadora IMC===\n");

        printf("Digite seu peso (kg): ");
        scanf("%f", &peso);
        printf("Digite a sua altura (m): ");
        scanf("%f", &altura);

        imc = calcularIMC(peso, altura);
        mostrarResultado(imc);

        return 0;
    }
    
