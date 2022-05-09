#include <stdio.h>

int main(void) {

  int numero;
  
  
  
  printf("Informe o número da tábuada que você deseja\n");
  scanf("%d", &numero);

  int tbUm = (numero * 1);
  int tbDois = (numero * 2);
  int tbTres = (numero * 3);
  int tbQuatro = (numero * 4);
  int tbCinco = (numero * 5);
  int tbSeis = (numero * 6);
  int tbSete = (numero * 7);
  int tbOito = (numero * 8);
  int tbNove = (numero * 9);
  int tbDez = (numero * 10);
  
  printf("1 x %d = %d\n" , numero, tbUm);
  printf("2 x %d = %d\n" , numero, tbDois);
  printf("3 x %d = %d\n" , numero, tbTres);
  printf("4 x %d = %d\n" , numero, tbQuatro);
  printf("5 x %d = %d\n" , numero, tbCinco);
  printf("6 x %d = %d\n" , numero, tbSeis);
  printf("7 x %d = %d\n" , numero, tbSete);
  printf("8 x %d = %d\n" , numero, tbOito);
  printf("9 x %d = %d\n" , numero, tbNove);
  printf("10x %d = %d\n" , numero, tbDez);
  
  return 0;
}