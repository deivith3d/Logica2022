/* 
Crie um programa para realizar o cálculo da quantidade de litros 
de combustível gastos em uma viagem, sabendo-se que o carro faz 
12 km com um litro. Deverão ser fornecidos o tempo gasto na viagem 
e a velocidade média.

Utilizar as seguintes fórmulas: 
- distância = tempo x velocidade.
- litros usados = distância / 12.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float  tempo, distancia, velocidade, litros; 
	printf("Informe o tempo de viagem:"); 
	scanf("%f",&tempo); 
	printf("Informe a velocidade media:"); 
	scanf("%f",&velocidade);
	distancia = tempo * velocidade;
	litros = distancia / 12;
	printf("Na viajem foram gastos %.2f livros de combustível.",litros);
}
