/* 
Crie um programa que leia um valor em graus celsius e converta para fahrenheit. Sabendo que a fórmula é T(°F) = T(°C) × 1.8 + 32.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float tc,tf,tk; // declaracao de variaiveis
	printf("Digite a temperatura em Celsius :"); //impressao de mensagem na tela
	scanf("%f",&tc); // leitura da variavel tc
	tf = tc * 1.8 + 32;	tk = tc +273.15; //calculo de tf
	printf("A temperatura em fahrenheit e: %.2f\n",tf);
	printf("A temperatura em Kelvin e: %.2f",tk);
}