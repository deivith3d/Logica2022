/*
Crie um programa C que informe a quantidade total de caloriais de uma refeição 
a partir da escolha de um usuário que deverá informar o prato, a sobremesa e a 
bebida (veja a tabela a seguir):

Prato                     Sobremesa                     Bebida
Vegatariano (180 cal.)    Abacaxi(75 cal.)              Chá (20 cal.)
Peixe (230 cal.)          Sorvete Diet (110 cal.)       Suco Laranja (70 cal.)
Frango(250 cal.)          Mousse Diet (170 cal.)        Suco melão (100 cal.)
Carne(350 cal.)           Mousse Chocolate (200 cal.)   Refrigerante Diet (65 cal.)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cod, cal;
	
	printf("\nInforme o codigo de seu prato: ");
	printf("\n ------------------------"); // decorativo
	printf("\nCodigo     Prato");
	printf("\n 1         Vegetariano"); 
	printf("\n 2         Peixe");
	printf("\n 3         Frango");
	printf("\n 4         Carne");
	printf("\n ------------------------");  // decorativo
	printf("\n Codigo : ");
	scanf("%d",&cod);
	switch(cod)
	{
		case 1: cal = 180; break;
		case 2: cal = 230; break; 
		case 3: cal = 250; break;
		case 4: cal = 350; break;
		default: printf("\nCodigo de prato invalido!!!");cal =0;
	}
	printf("\nInforme o codigo de seu sobremesa: ");
	printf("\n ------------------------"); // decorativo
	printf("\nCodigo     Sobremesa");
	printf("\n 1         Abacaxi"); 
	printf("\n 2         Sorvete Diet");
	printf("\n 3         Mousse Diet");
	printf("\n 4         Mousse Chocolate");
	printf("\n ------------------------");  // decorativo
	printf("\n Codigo : ");
	scanf("%d",&cod);
	switch(cod)
	{
		case 1: cal += 75; break;
		case 2: cal += 110; break; 
		case 3: cal += 170; break;
		case 4: cal += 200; break;
		default: printf("\nCodigo de sobremesa invalido!!!");
	}	
	printf("\nInforme o codigo de sua bebida: ");
	printf("\n ------------------------"); // decorativo
	printf("\nCodigo     Bebida");
	printf("\n 1         Cha"); 
	printf("\n 2         Suco Laranja");
	printf("\n 3         Suco Melao");
	printf("\n 4         Refrigerante Diet");
	printf("\n ------------------------");  // decorativo
	printf("\n Codigo : ");
	scanf("%d",&cod);
	switch(cod)
	{
		case 1: cal += 20; break;
		case 2: cal += 70; break; 
		case 3: cal += 100; break;
		case 4: cal += 65; break;
		default: printf("\nCodigo de bebida invalido!!!");
	}	
	printf("\n\n ------------------------");  // decorativo	
	printf("\n Sua refeicao completa tem %d caloriais.",cal);
	printf("\n ------------------------");  // decorativo	
}
