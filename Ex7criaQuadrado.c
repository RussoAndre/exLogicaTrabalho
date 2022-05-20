#include <stdio.h>
#include<ctype.h>

int main(void) {
 
	int i,j,ladoQuadrado;
	char symbol='#';
	
	printf("De o numero de linhas e colunas do quadrado: ");
	scanf("%i", &ladoQuadrado);
	printf("\n");
		for(i=1;i<=ladoQuadrado;i++){
			for(j=1;j<=ladoQuadrado;j++){
				printf(" %c", symbol);
			}
			printf("\n");
		}
}
