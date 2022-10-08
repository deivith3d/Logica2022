/* 
Crie um programa para realizar o c�lculo da quantidade de litros 
de combust�vel gastos em uma viagem, sabendo-se que o carro faz 
12 km com um litro. Dever�o ser fornecidos o tempo gasto na viagem 
e a velocidade m�dia.

Utilizar as seguintes f�rmulas: 
- dist�ncia = tempo x velocidade.
- litros usados = dist�ncia / 12.
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
	printf("Na viajem foram gastos %.2f livros de combust�vel.",litros);
}
