#include<stdio.h>
#include<stdlib.h>
//Crie um programa em C que leia dois números pares e positivos e
//imprima a soma de todos os pares entre eles.

int main()
{
	int num, num2, soma;
	
	printf("Informe o primeiro numero:");
	scanf("%d",&num);
	printf("Informe o segundo numero:");
	scanf("%d",&num2);
	soma = 0;	
	num = num + 2;
	while(num < num2)
	{
		soma = soma + num;
		printf("\n %d",num);
		num = num + 2;
	}
	printf("\n A soma dos numeros pares e: %d",soma);
}
