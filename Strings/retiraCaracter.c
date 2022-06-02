/*
Crie um programa em C que leia uma frase e logo leia uma letra. A letra informada
deverá ser eliminada em todas as posições que apareça nessa frase.
Ex: Digite uma frase: analise e desenvolvimento de sistemas
Digite uma letra: e
Resultado: analis dsnvolvimnto d sistmas
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char frase[50],frase2[50]="";
	char letra;
	int x,y=0,cont=0;

	printf("Informe uma frase:");
	gets(frase);
	printf("Informe uma letra:");	
	scanf("%c",&letra);
	for(x=0;x<strlen(frase);x++)
	{
		if(frase[x]!=letra)
		{
			frase2[y]=frase[x];	
			y++;
		}
	}
	strcpy(frase,frase2);
	printf("A nova frase e '%s'",frase);
}