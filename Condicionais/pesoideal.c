/*
Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um programa em C que calcule seu peso ideal, utilizando as seguintes fórmulas:
- para homens : (72.7 * h) – 58;
- pra mulheres: (62.1 * h) -44.7
Obs.: Considere para o sexo o valor 1- Masculino e 2-Feminino
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float altura,pesoI;
	int sexo;
	
	printf("Informe sua altura: ");
	scanf("%f",&altura);
	printf("Informe o sexo (1-Masc. e 2-Fem.): ");
	scanf("%d",&sexo);
	if(sexo==1){
		pesoI = (72.7 * altura) - 58;
		printf("Masc.");
	}
	else{
		pesoI = (62.1 * altura) - 44.7;
		printf("Fem.");
	}
	printf("O peso ideal seria %.2f",pesoI);
}