#include <stdio.h>

int main(void) {
  int numero;
  
  printf("Digite o número da tabuada que deseja:\n");
  scanf("%d", &numero);

  int multiplicador = 1;

  while(multiplicador <= 10){
    int resultado = numero * multiplicador;
    printf("%d x %d = %d\n", numero, multiplicador, resultado);
    multiplicador++;
  }
  return 0;
}
