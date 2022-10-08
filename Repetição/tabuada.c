#include<stdio.h>
#include<stdlib.h>
//Crie um programa em C que leia um número e imprima a sua tabuada.

int main()
{
	int num, cont, result;
	
	printf("Informe um numero:");
	scanf("%d",&num);
	cont = 1;
	while(cont<=10)
	{
		result = num * cont;
		printf("\n %d * %d = %d",num,cont,result);
		cont++; //cont = cont + 1;  cont += 1;
	}
}
