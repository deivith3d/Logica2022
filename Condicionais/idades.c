/*
Crie um programa C que leia o ano de nascimento de uma pessoa, 
calcule e mostre sua idade e, também verifique se ela já tem idade 
para votar (16 anos ou mais) e para conseguir a Carteira de Habilitação
(18 anos ou mais).
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int anoNasc,idade;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%d",&anoNasc);
	idade = 2022 - anoNasc;
	printf("Sua idade e %d anos.",idade);
	if(idade>=18)
	{
		printf("Voce pode votar e tirar a CNH");
	}
	else
	{
		if(idade>=16)
		{
			printf("Voce pode votar");
		}
		else
		{
			printf("Voce e menor de idade.");
		}
	}
	
}