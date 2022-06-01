/*
Crie um programa em C que leia as notas de 2 trabalhos e 2 provas 
e calcule a média final. Sabendo que cada trabalho e prova tem peso 5.
Depois considerando a média 7 diga se o aluno está aprovado ou reprovado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float p1,t1,p2,t2,g1;
	
	g1=0;
	
	printf("Informe o valor da Prova 1 (peso 5): ");
	scanf("%f",&p1);
	printf("Informe o valor do Trabalho 1 (peso 5): ");
	scanf("%f",&t1);	
	printf("Informe o valor da Prova 2 (peso 5): ");
	scanf("%f",&p2);
	printf("Informe o valor do Trabalho 2 (peso 5): ");
	scanf("%f",&t2);
	g1 = (p1+t1+p2+t2)/2;
	printf("O valor de G1 é : %.2f \n",g1);
	if(g1>=7)
	{
		printf("Aprovado!!!");
	}
	else
	{
		if(g1>=6){
			printf("Você esta em recuperacao.");
		}
		else
		{
			printf("Você rodou.");	
		}
	}
}