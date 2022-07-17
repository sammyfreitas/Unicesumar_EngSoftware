#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"");
	
	int cont = 1;
	for (cont = 1;cont <=100; cont++){
		printf ("Escreva....: %d\n", cont);
		 
	}
		
	return 0;
}
