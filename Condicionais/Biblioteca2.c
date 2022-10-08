/*A biblioteca de uma universidade deseja calcular a multa por atrazo de cada tipo de 
usuário (1 - Aluno; 2 – Funcionário; 3 – Professor). O programa deverá ler o tipo de 
usúario e o número de dias de atrazo e calcular o valor da multa:

- Aluno : R$ 1,00 por dia de atrazo
- Funcionário: R$ 1,50 por dia de atrazo
- Professor: R$ 2,50 por dia de atrazo
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int usuario,dias;
	float multa;
	
	multa = 0;
	printf("Informe o tipo de usuario:");
	printf(" (1 - Aluno; 2 - Funcionario; 3 - Professor ) : ");
	scanf("%d",&usuario);
	printf("Informe o numero de dias de atraso : ");
	scanf("%d",&dias);	
	
	switch(usuario)
	{
		case 1: multa = (float) dias * 1;
				break;
		case 2: multa = (float) dias * 1.5;
				break;
		case 3: multa = (float) dias * 2.5;
				break;		
		default: printf("\n Tipo de usuario incorreto.");
	}
	printf("\n Sua multa e de R$%.2f",multa);
}
