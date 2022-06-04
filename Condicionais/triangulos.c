/*
Dados três valores A, B, C, verificar se eles podem ser comprimentos dos lados
de um triângulo, se forem, verificar se compõem um triângulo equilátero, 
isósceles ou escaleno. Informar se não compuserem nenhum triângulo.
Dados de entrada: três lados de um suposto triângulo (A,B,C).
Dados de saída – mensagens: “Não compõem triângulo.”, “triângulo equilátero”, 
“triângulo isósceles”, “triângulo escaleno”.
O que é um triângulo?
Resposta: Figura geométrica fechada de três lados, em que cada um é menor 
que a soma dos outros dois.
O que é um triângulo equilátero?
Resposta: um triângulo com três lados iguais.
O que é um triângulo isósceles?
Resposta: um triângulo com dois lados iguais.
O que é um triângulo escaleno?
Resposta: um triângulo com todos os lados diferentes.

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c;
	
	printf("Informe a medida do lado A: ");
	scanf("%d",&a);
	printf("Informe a medida do lado B: ");
	scanf("%d",&b);
	printf("Informe a medida do lado C: ");
	scanf("%d",&c);
	if(a<b+c && b<a+c && c<a+b){
		if(a==b && b==c){
			printf("Triangulo Equilatero!!");
		}
		else
		{
			if(a==b||b==c||a==c)
			{
				printf("Triangulo Isosceles!!");	
			}
			else
			{
				printf("Triangulo Escaleno!!");
			}
		}
	}
	else
	{
		printf("A figura informada nao e um triangulo!");
	}
	
}