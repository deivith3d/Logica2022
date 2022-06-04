/*
Crie um programa que leia altura e massa e calcule o IMC 
(Índice de Massa Corpórea). Sabendo que a fórmula é: 
IMC = massa/ (altura*altura)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float imc, altura, peso;
	
	printf("Informe seu peso:");
	scanf("%f",&peso);
	printf("Informe sua altura:");
	scanf("%f",&altura);
	imc = peso / pow(altura,2); // imc = peso / (altura * altura);
	printf("Seu IMC e: %.2f",imc);
}