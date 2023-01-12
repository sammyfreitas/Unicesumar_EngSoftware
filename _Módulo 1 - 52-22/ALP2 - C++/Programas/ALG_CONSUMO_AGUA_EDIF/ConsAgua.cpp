#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL,"");

	
	int i, qtApt, numApt, maior_apt;
	float maior_cons, litros, m3;
	
	printf ("Digite a quantidade de apartamentos: \n");
    scanf("%d", &qtApt);
	
	litros = 0;
	maior_cons = 0;
	
	for (i = 1; i <= qtApt; i++) 
	{
	  printf ("Digite o número do apartamento:\n");
      scanf("%d", &numApt);
      
      printf ("Digite o consumo de água (em litros):\n");
      scanf("%f", &litros);
      
      if (litros > maior_cons) 
	  {
		maior_cons = litros;
		maior_apt = numApt;
	  }
   }
    m3 = maior_cons / 1000;
    printf ("\n O maior consumo foi: %.3f m3 ", m3);
	printf("do apartamento: %d\n", maior_apt);
	
	system ("PAUSE");
	
  return(0);
}
