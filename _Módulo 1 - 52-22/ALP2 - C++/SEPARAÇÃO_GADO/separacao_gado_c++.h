#include <locale.h>
	setlocale(LC_ALL,"");

#include<stdio.h>
#include<conio.h>
int main(void)
{
	int i, num, contpar, contimpar;
	wh
	/* declarando e inicializando o vetor do Pasto Par */
	int vetpar[42];
	
	/* declarando e inicializando o vetor do Pasto Impar */
	int vetimpar;
	  
	for( i = 0 ; i <= 42; i++)
	  {
		printf ("Digite o número do gado\n");
		scanf("%d", &num);
		if (num % 2 == 0) {
			vetpar[contpar] = num;
			contpar = contpar + 1;
		}
		else
		{
			vetimpar[contimpar] = num;
			contimpar = contimpar++;
		}
	  }
		printf("Exibindo os Valores do Pasto 1 (Pares)\n\n");
		for( i = 0 ; i <= 42; i++)
		{
			printf("vetor[%d] = \n",i, contpar[i]);
		}
		printf("Exibindo os Valores do Pasto 2 (Ímpares\n\n");
		for( i = 0 ; i <= 42; i++)
		{
			printf("vetor[%d] = \n",i, contimpar[i]);
		}
	  
	  getch();
	  
	  return 0;
}