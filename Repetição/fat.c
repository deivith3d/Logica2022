/*
Crie um programa C que calcule o fatorial de um número. Sabendo que o 
fatorial de um número corresponde a ele nultiplicado pelos antecessores.
Ex.:
fatorial de 5  =   5 x 4 x 3 x 2 x 1 = 120
*/
//Exercicio usando WHILE
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, fat;
	
	printf("Informe um numero:");
	scanf("%d",&num);
	fat = 1;
	while(num>1)
	{
		fat = fat * num;
		num--; // num = num -1;
	}
	printf("O fatorial e: %d",fat);
}
