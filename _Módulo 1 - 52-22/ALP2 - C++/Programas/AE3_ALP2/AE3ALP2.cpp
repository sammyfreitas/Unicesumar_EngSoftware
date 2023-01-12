#include <stdio.h>
#include <locale.h>

//ALUNA: SAMANTHA SOBRAL DE FREITAS
//Código que deve ser inserido aqui

void identificarDivisivelPor3 (int matriz[5][5])
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
}
	
	
int main(int argc, char const *argv[])
{
	setlocale(LC_ALL,"");
    //Matriz com valores fixo para nao fazer a leitura
    int matriz[5][5] = {{15,9,23,43,49},
                        {3,36,55,53,18},
                        {12,42,51,57,34},
                        {6,32,28,25,62},
                        {72,91,81,16,41}};
    identificarDivisivelPor3(matriz);
    return 0;
}
