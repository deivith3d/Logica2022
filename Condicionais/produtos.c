/*
Crie um programa C que tendo como dados de entrado o preço do produto e seu código de origem,
mostre o preço junto de sua procedência. Caso o código não seja nenhum dos especificados, o 
produto deverá ser encarado como importado. Siga a tabela de códigos a seguir:

Código de Origem     Procedência
		1				Sul 
		2				Norte
		3				Leste
		4				Oeste
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cod;
	float preco;

	printf("Informe o preco do produto: ");
	scanf("%f",&preco);
	printf("\n ------------------------"); // decorativo
	printf("\nCodigo de Origem     Procedencia");
	printf("\n	1		Sul"); 
	printf("\n	2		Norte");
	printf("\n	3		Leste");
	printf("\n	4		Oeste");
	printf("\n ------------------------");  // decorativo
	printf("\nInforme o codigo da procedencia: ");
	scanf("%d",&cod);
	switch(cod)
	{
		case 1: printf("\n Preco do produto R$ %.2f   - SUL",preco);break;
		case 2: printf("\n Preco do produto R$ %.2f   - NORTE",preco);break; 
		case 3: printf("\n Preco do produto R$ %.2f   - LESTE",preco);break;
		case 4: printf("\n Preco do produto R$ %.2f   - OESTE",preco);break;
		default: printf("\n Preco do produto R$ %.2f   - IMPORTADO",preco);
	}
}
