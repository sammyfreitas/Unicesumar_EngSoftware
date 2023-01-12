#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char* argv[]) {
	setlocale(LC_ALL,"");
	
	int idade;
	
	printf ("Digite sua idade:\n ");
	scanf ("%d", &idade);
	
	
	printf ("A idade digitada foi:%d \n", idade);
	
	if (idade >=18){
		printf ("A idade é maior que 18 \n");
	}
	int numSemana;
	printf ("Digite um número da semana\n");
	scanf("%d", &numSemana);
	
	switch (numSemana)
	{
		case 1: {
			printf("Domingo \n");
			break;
		}
		case 2: {
			printf("Segunda-Feira \n");
			break;
		}
		case 3: {
			printf("Terça-Feira \n");
			break;
		}
		case 4: {
			printf("Quarta-Feira \n");
			break;
		}
		case 5: {
			printf("Quinta-Feira \n");
			break;
		}
		case 6: {
			printf("Sexta-Feira \n");
			break;
		}
		case 7: {
			printf("Sábado \n");
			break;
		}
		default:
			printf("Número inválido \n");
			break;
	}
	system("pause");
	
	return 0;
}
