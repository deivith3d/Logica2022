/*
Crie um código C que receba uma frase e imprima apenas todos os carateres que se repetem.
Obs.: Se  caracter repetir mais de 1 vez será impresso somente 1 vez.
Obs2.: Desconsiderar o espaço.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char frase[50],repetidos[50]="";
	int x=0,y=0,z=0,cont=0,j=0;
	int achou = 0;
	
	printf("Informe uma frase:");
	gets(frase);
	while(x<strlen(frase))
	{
		while(y<strlen(frase)&&cont<2)
		{	
			if(frase[x]==frase[y]&&frase[x]!=' ')
			{
				cont++;//printf("\nachou %c",frase[x]);
			}
			y++;
		}
		if(cont==2)
		{
			achou = 0;
			for(j=0;j<strlen(repetidos);j++)
			{
				if(frase[x]==repetidos[j])
				{
					achou = 1;
				}
			}
			if(achou==0)
			{
				repetidos[z]=frase[x];
				printf("\n %c",repetidos[z]);
				z++;
			}
		}
		x++;y=0;cont=0;
	}
}