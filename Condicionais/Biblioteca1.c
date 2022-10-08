/*A biblioteca de uma universidade deseja fazer um algoritmo que leia o tipo de usuário
 (1 - Aluno; 2 – Funcionário; 3 – Professor; 4 – Outros) e imprima um recibo com o 
 número de dias que o usuário poderá ficar com o livro:

- Aluno : 7 dias
- Funcionário: 7 dias
- Professor: 14 dias
- Outros: O dias (consulta local) 
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int usuario;

	printf("Informe o tipo de usuarioa idade do aluno:");
	printf(" (1 - Aluno; 2 - Funcionario; 3 - Professor; 4 - Outros) : ");
	scanf("%d",&usuario);	
	switch(usuario)
	{
		case 1 ... 2: printf("Voce pode ficar com o livro por 7 dias.");
				break;
		case 3: printf("Voce pode ficar com o livro por 14 dias.");
				break;
		default: printf("Voce pode nao pode ficar com o livro. Somente consulta local.");
	}
}
