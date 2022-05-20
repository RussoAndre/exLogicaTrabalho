#include <stdio.h>

int main(void) {
  int numero, i;
  
  printf("Informe o numero para calcularmos seu fatorial\n");
  scanf("%d",&numero);
  int fatorial = 1;
  for(i = 1; i <= numero; i++){
    fatorial = fatorial * i;
  }
  printf("Seu fatorial é %d", fatorial);
  return 0;
}
