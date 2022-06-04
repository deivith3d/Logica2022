/*
Crie um programa que leia base e altura de um triângulo e calcule sua área. 
Sabendo que Area = (base * altura)/2;
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float area, base, altura;
	
	printf("Informe a base do triangulo:");
	scanf("%f",&base);
	printf("Informe a altura do triangulo:");
	scanf("%f",&altura);
	area = (base * altura)/2; 
	printf("A area do triangulo e: %.2f",area);
}