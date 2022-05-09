#include <stdio.h>

int main(void) {
  float altura;
  int peso;
    printf("Informe sua altura:\n");
    scanf("%f", &altura);
    printf("Informe seu peso: \n");
    scanf("%d", &peso);

    float calculaImc = altura * altura;
    float imc = peso / calculaImc;
    printf("Seu imc é: %f", imc);
  return 0;
}