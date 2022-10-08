#include<stdio.h>
#include<stdlib.h>
//Crie um programa em C que leia dois números pares e positivos e
//imprima todos os pares entre eles.

int main()
{
	int num, num2;
	
	printf("Informe o primeiro numero:");
	scanf("%d",&num);
	printf("Informe o segundo numero:");
	scanf("%d",&num2);	
	num = num + 2;
	while(num < num2)
	{
		printf("\n %d",num);
		num = num + 2;
	}
}
