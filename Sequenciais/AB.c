/*Crie um programa em C que leia duas variáveis inteiras
e troque seus conteúdos*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B,C;
	printf("Informe o valor de A: ");
	scanf("%d",&A);
	printf("Informe o valor de B: ");
	scanf("%d",&B);
	C = A;
	A = B;
	B = C;
	printf("O valor de A e: %d e o valor de B e: %d",A,B);
}