/* 
Crie um programa que leia um número inteiro e imprima seu antecessor e 
seu sucessor.

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int  num; 
	printf("Digite um numero:"); 
	scanf("%d",&num); 
	printf("O antecessor e %d e o sucessor e %d",num-1,num+1);
}