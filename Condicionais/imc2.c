/*
O IMC – ìndice de Massa Corporal é um critério da Organização Mundial de Saúde
para dar uma indicação sobre a condição de peso de uma pessoa adulta. 
A fórmula do IMC é peso / (altura)^2. Elabore um programa C que leia o 
peso e altura de um adulto e mostre sua condição.
--------------------------------------------------- 
IMC em Adultos     -   Condição
---------------------------------------------------
Abaixo de 18.5     -     abaixo do peso
Entre 18.5 e 25    -     peso normal
Entre 25 e 30      -     acima do peso
Acima de 30        -     obeso
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	float peso,altura,imc;
	
	imc=0;

	printf("Informe seu peso: ");
	scanf("%f",&peso);
	printf("Informe sua altura: ");
	scanf("%f",&altura);	

	imc = peso / (altura *altura);
	printf("\nO valor do IMC e: %.2f",imc);
	
	if(imc<18.5)
	{
		printf("\nVoce esta abaixo do peso!!!");
	}
	else if(imc<25){
		printf("\nSeu peso esta normal!!!");
	}
	else if(imc<30){
		printf("\nVoce esta acima do peso!!!");
	}
	else{
		printf("\nVoce esta obeso!!!");
	}
}