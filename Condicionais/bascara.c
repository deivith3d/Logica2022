/*
Crie um programa em C que leia os valores de A, B e C em uma função de segundo grau: Ax^2+Bx+C = 0
e calcule o X' e X", ou ainda diga não existem raízes reais.
Obs.: fórmula de báscara x'e x" = (-B +- Raiz Quadrada de B^2 - 4AC) / 2A
Obs.: se a Raiz Quadrada for negariva: Não existem raizes reais
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a,b,c,delta,x1,x2;
	printf("A.X2 + B.X + C \n");
	printf("Informe o valor de A: ");
	scanf("%f",&a);
	printf("Informe o valor de B: ");
	scanf("%f",&b);
	printf("Informe o valor de C: ");
	scanf("%f",&c);
	delta = (b*b)-(4*a*c);
	if(delta<0)
	{
		printf("Nao existem raizes reais!!");
	}
	else
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("O valor de x1 e %.2f e x2 e %.2f",x1,x2);
	}
}