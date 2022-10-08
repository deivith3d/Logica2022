/*
Crie um programa C que leia um peso na Terra e n�mero de um planeta e imprima o valor 
do seu peso nesse planeta. A rela��o dos planetas � dada a seguir juntamente com o 
valor das gravidades relativas � Terra:

C�digo de Planeta     Nome Planeta      Gravidade Relativa
		1				Merc�rio 			0.37
		2				V�nus				0.88
		3				Marte				0.38
		4				J�piter				2.64
		5				Saturno				1.15
		6				Urano				1.17
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int cod;
	float pesoTerra,gravidade,pesoPlaneta;

	printf("Informe seu peso: ");
	scanf("%f",&pesoTerra);
	printf("Informe o codigo de um planeta ");
	printf("\n ------------------------"); // decorativo
	printf("\nCodigo     Planeta");
	printf("\n 1         Mercurio"); 
	printf("\n 2         Venus");
	printf("\n 3         Marte");
	printf("\n 4         Jupiter");
	printf("\n 5         Saturno");
	printf("\n 6         Urano");
	printf("\n ------------------------");  // decorativo
	printf("\n Codigo : ");
	scanf("%d",&cod);
	switch(cod)
	{
		case 1: gravidade = 0.37; break;
		case 2: gravidade = 0.88; break; 
		case 3: gravidade = 0.38; break;
		case 4: gravidade = 2.64; break;
		case 5: gravidade = 1.15; break;
		case 6: gravidade = 1.17; break;
		default: printf("\nCodigo de planeta invalido!!!");gravidade =0;
	}
	if(cod>0 && cod<7)
	{
		pesoPlaneta = pesoTerra * gravidade;
		printf("\n Seu peso no planeta escolhido e : %0.2f",pesoPlaneta);
	}
	
}
