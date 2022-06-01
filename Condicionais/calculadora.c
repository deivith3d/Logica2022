/*
Crie um programa C que leia dois números inteiros e depois uma operação
(1-Adição,2-Subtração,3-Multiplicação ou 4-Divisão). Logo, mostre o resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num1, num2, op;
	float resultado;
	
	op = 0;
	resultado = 0;
	
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	printf("Informe a operacao 1-Adicao, 2-Subtracao, 3-Multiplicacao ou 4-Divisao:");
	scanf("%d",&op);
	switch(op)
	{
		case 1: resultado = num1 + num2; 
				printf("\n O resultado e %.2f",resultado);break;
		case 2: resultado = num1 - num2; 
				printf("\n O resultado e %.2f",resultado);break;
		case 3: resultado = num1 * num2; 
				printf("\n O resultado e %.2f",resultado);break;
		case 4: if(num2==0){
					printf("Nao e possivel realizar divisao por zero.");
				}
				else
				{
					resultado = num1 / num2; 
					printf("\n O resultado e %.2f",resultado);
				}break;
	}
}