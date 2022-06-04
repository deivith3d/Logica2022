/*
Escreva um programa em C que leia três valores inteiros e diferentes e imprima
em ordem decrescente.
Obs.: Não é necessário verificar se os números são diferentes.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int A,B,C;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&A);
	printf("Informe o segundo numero: ");
	scanf("%d",&B);
	printf("Informe o terceiro numero: ");
	scanf("%d",&C);
	if(A>B&&B>C){
		printf("%d - %d - %d",A,B,C);
	}
	else if(A>C&&C>B){
		printf("%d - %d - %d",A,C,B);
	}
	else if(B>A&&A>C){
		printf("%d - %d - %d",B,A,C);
	}
	else if(B>C&&C>A){
		printf("%d - %d - %d",B,C,A);
	}
	else if(C>A&&A>B){
		printf("%d - %d - %d",C,A,B);
	}
	else if(C>B&&B>A){
		printf("%d - %d - %d",C,B,A);
	}
}