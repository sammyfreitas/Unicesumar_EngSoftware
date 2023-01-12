#include <iostream>
#include<stdio.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	{
	int i, num, contpar, contimpar;
	contpar=1;
	contimpar=1;
	
	/* declarando e inicializando o vetor do Pasto Par */
	int vetpar[5];
	
	/* declarando e inicializando o vetor do Pasto Impar */
	int vetimpar[5];
	  
	for( i = 0 ; i <= 4; i++)
	  {
		printf ("Digite o número do gado\n");
		scanf("%d", &num);
		if (num % 2 == 0) {
			vetpar[contpar] = num;
			contpar = contpar+1;
		}
		else
		{
			vetimpar[contimpar] = num;
			contimpar = contimpar+1;
		}
	  }
    printf("Exibindo os Valores do Pasto 1 - Gado Par\n");
	for(i = 0 ; i <= 4; i++)
	{
		printf("%d, ", vetpar[i]);
    }

	printf("\nExibindo os Valores do Pasto 2 - Gado Impar\n");
	for( i = 0 ; i <= 4; i++)
	{
  		printf("%d, ", vetimpar[i]);
	}
	  getch();
	  system ("pause");
	  return 0;
}
}

/*void identificarDivisivelPor3 (int matriz[5][5])
{
   int i, j;
   for(i=0;i<5;i++) 
   {
     for(j=0;j<5;j++) 
	 {
        if(matriz[i][j]%3==0)
		{
           printf("Número divisível por 3 encontrado na linha: %d, coluna: %d, número: %d\n", i+1, j+1, matriz[i][j]);
        }
     }
   }
}*/

