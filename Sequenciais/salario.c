/*
Crie um programa que efetue o cálculo do salário líquido de um funcionário. 
Os dados fornecidos serão: valor da hora técnica, número de aulas trabalhadas 
no mês e percentual de desconto do INSS
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	float valorhora, horastrab, desc,salario=0;
	
	printf("Informe o valor/hora do funcionario:");
	scanf("%f",&valorhora);
	printf("Informe o numero de horas trabalhadas:");
	scanf("%f",&horastrab);
	salario = (valorhora * horastrab); 
	printf("Informe a Precentagem de desconto INSS:");
	scanf("%f",&desc);
	salario = salario - (salario*desc)/100;
	printf("O salario liquido e R$ %.2f:",salario);
	
}