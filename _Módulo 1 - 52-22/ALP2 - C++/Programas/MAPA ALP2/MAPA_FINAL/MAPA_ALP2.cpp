//MAPA DA SAMANTHA SOBRAL DE FREITAS
//MAT: 22213819-5
//BACHARELADO EM ENGENHARIA DE SOFTWARE
//

//Declara��o das Bibliotecas
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string.h> /*Biblioteca para utiliza��o de compara��o de strings*/
#include <locale.h> /*Biblioteca para utiliza��o de Acentos*/


//Declara��o das Vari�veis Globais
int menu, Sub_menu;
int i = 0, totalReg;
bool teste = true;


//Declara��o Struct//
/*typedef */
struct registro
{
	char CPF[14];
	char Data[10];
	char Lote[10];
	char Vacina[60];
	char Nome[100];       
};
struct registro Vacinados;     

//In�cio do Programa//
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	import std.core; //para importar a biblioteca c dos m�dulos
	import std.regex; //para importar o cabe�alho dos m�dulos
	
while (teste != false){
	
	printf("\n");	
	printf("\t|----------------------------------------------|\n");
	printf("\t|           Vacina��o contra Covid-19          |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\t|  Menu:                                       |\n");
	printf("\t|    1 - Cadastrar Vacina                      |\n");
	printf("\t|    2 - Listar Aplica��es                     |\n");
	printf("\t|    3 - Consulta por CPF                      |\n");
	printf("\t|    4 - Sair                                  |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\n  Digite a op��o: ");                          
	scanf("%d", &menu);

switch (menu){

case 1:
	import cadastrarVacina();
	break;

case 2:
    import listarRegistros();
    break;

case 3:
    import consultarCPF();
	break;

default:
	printf("\n");
	printf("\t\tOp��o Inv�lida!\n");
	printf("\t----------------------------------");
	Sleep(2500);
    system("cls");	
break;

case 4:
int i=0;
printf("\n      Saindo do Programa!      \n");
  while (i++ < 33) {
      Sleep(500); // Sleep 0,5 segundo
      printf(".");
  }
teste = false;
exit(0);
break;
}
}
system("pause");
return 0;
}
