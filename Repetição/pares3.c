#include<stdio.h>
#include<stdlib.h>
//Crie um programa em C que leia dois números pares e positivos e
//imprima a soma de todos os pares entre eles.

int main()
{
	int num, num2, soma, cont;
	float media;
	
	printf("Informe o primeiro numero:");
	scanf("%d",&num);
	printf("Informe o segundo numero:");
	scanf("%d",&num2);
	soma = 0;	
	num = num + 2;
	cont = 0;
	while(num < num2)
	{
		soma = soma + num;
		cont = cont + 1; // conta o numero de numeros pares
		printf("\n %d",num);
		num = num + 2;
	}
	// media é a soma dividido pelo número de elementos
	media = (float)soma / (float)cont; 
	printf("\n\n A soma dos numeros pares e: %d",soma);
	printf("\n A quantidade dos numeros pares e: %d",cont);
	printf("\n A media dos dos numeros pares e: %.2f",media);
}
