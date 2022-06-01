/* 
Crie um programa C que leia a altura e o sexo de 20 alunos. Depois mostre:
A) Número de alunos
B) Número de alunas
C) Média de altura dos alunos
D) Média de altura das alunas

Obs.: Considere em sexo o valor 1 para Masculino e 2 para feminino
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sexo,cont=0,contM=0,contF=0;
	float altura,somaM=0,somaF=0,MediaM=0,MediaF=0;
	
	for(cont=0;cont<20;cont++)
	{
	
		printf("Informe a altura:");
		scanf("%f",&altura);
		printf("Informe o sexo: 1-M 2-F");
		scanf("%d",&sexo);
		if(sexo==1)
		{
			contM++;
			somaM = somaM + altura;
		}
		else
		{
			contF++;
			somaF = somaF + altura;
		}
	}
	MediaM = somaM / (float)contM;
	MediaF = somaF / (float)contF;
	printf("Numero de alunos: %d",contM);
	printf("Numero de alunas: %d",contF);
	printf("Media de altura dos alunos: %.2f",MediaM);
	printf("Media de altura dos alunas: %.2f",MediaF);	
}