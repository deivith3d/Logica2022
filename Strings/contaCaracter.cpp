/*
Crie um código C que receba uma frase e um caractere, e retorne o
número de vezes que esse caractere aparece na string.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char frase[50];
	char letra;
	int x=0,cont=0;

	printf("Informe uma frase:");
	gets(frase);
	printf("Informe uma letra:");	
	scanf("%c",&letra);
	for(x=0;x<strlen(frase);x++)
	{
		if(frase[x]==letra)
		{
			cont++;	
		}
	}
	printf("\nO caracter '%c' aparece %d vezes na frase '%s'",letra,cont,frase);
}