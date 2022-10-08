/*
Crie um programa em C que leia a altura e o sexo de 20 alunos (1- Masc. 2-Fem.) e informe :
a) Número de alunos
b) Número de alunas
c) Média de altura dos alunos
d) Média de altura das alunas
*/
//Exercicio usando WHILE
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sexo, contM,contF,cont;
	float altura, somaM,somaF,mediaM,mediaF;
	

	cont = 1;
	contM =0;
	contF=0;
	somaM =0;
	somaF=0;
	while(cont<=5)
	{
		printf("Informe sua altura (metros):");
		scanf("%f",&altura);
		printf("Informe seu sexo (1-Masc. 2-Fem.):");
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
		cont++;
	}
	printf("\n O numeros de alunos e : %d alunos.",contM);
	printf("\n O numeros de alunas e : %d alunas.",contF);
	mediaM = somaM / (float) contM;
	mediaF = somaF / (float) contF;
	printf("\n A media de altura entre os alunos e : %.2f metros.",mediaM);
	printf("\n A media de altura entre as alunas e : %.2f metros.",mediaF);
}
