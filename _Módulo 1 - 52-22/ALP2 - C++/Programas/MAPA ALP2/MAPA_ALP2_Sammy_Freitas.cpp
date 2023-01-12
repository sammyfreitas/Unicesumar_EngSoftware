//MAPA DA SAMANTHA SOBRAL DE FREITAS
//MAT: 22213819-5
//BACHARELADO EM ENGENHARIA DE SOFTWARE
//

//Declara��o das Bibliotecas
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> /*Biblioteca para utiliza��o de Acentos*/

//Declara��o das Vari�veis Globais
int menu, Sub_menu;
int i = 0, totalReg;
bool teste = true;


//In�cio do Programa//
typedef struct registro
{
	char CPF[14];
	char Data[10];
	char Lote[10];
	char Vacina[60];
	char Nome[100];       
};
struct registro Vacinados[totalReg];     

//In�cio do Programa//
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
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
	system("cls");
	do{
		for(i = 0; i <= totalReg; i++){
			printf("\n");
		    printf("\t----------------[Cadastro de Vacina��o]-----------------\n");
		    printf("\t\n");
			printf("\tDigite o CPF no formato: XXX.XXX.XXX-XX   : ");
			scanf("%s",&Vacinados[i].CPF);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o nome completo: ");
			scanf("%[^\n]s",&Vacinados[i].Nome);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o Fabricante da Vacina: ");
			scanf("%s",&Vacinados[i].Vacina);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite a Data no formato xx/xx/xxxx : ");
			scanf("%s",&Vacinados[i].Data);
			fflush(stdin);
			printf("\t\n");
			printf("\tDigite o numero do lote: ");
			scanf("%s",&Vacinados[i].Lote);
			fflush(stdin);	
			system("cls");
			fflush(stdin);
			printf("\n[Registro n�mero %d cadastrado com sucesso\]n",&i);
			printf("\t\n");
			printf("\t|----------------------------------------------|\n");
			printf("\t|    1 - Volta para o menu principal           |\n");
			printf("\t|    2 - Cadastre outra pessoa                 |\n");
			printf("\t|    3 - Sair                                  |\n");
			printf("\t|----------------------------------------------|\n");
			printf("\t\n");
			printf("\nDigite a op��o: ");   
			scanf("%d", &Sub_menu);
			if(Sub_menu >= 1 && Sub_menu <= 3)
			{
				if(Sub_menu == 1)
				{
					system("cls");
					teste = true;
					totalReg=totalReg+1;
					break;
				}
				else if(Sub_menu == 2)
				{
					system("cls");
					totalReg=totalReg+1;
					continue;
				}
				else if(Sub_menu == 3)
				{
					exit(0);
				}	
			}				
	    }
}while(0);

break;
//-------------------------------------------------------
case 2:
    system("cls");
    teste = false;
    printf("\t----------------[Lista de Registros Cadastrados]-----------------\n");
    do{  
    for(i = 0; i <= totalReg; i++){
    
    	printf("\n  |---------------(Codigo:%d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",Vacinados[i].Nome);
    	printf("  |  CPF: %s\n",Vacinados[i].CPF);
    	printf("  |  Vacina: %s\n",Vacinados[i].Vacina);
    	printf("  |  Data: %s\n",Vacinados[i].Data);
    	printf("  |  Lote: %s\n",Vacinados[i].Lote);
    	printf("  |------------------------------------------|\n");
    	if(totalReg == i){
       		system("pause");
    		teste = true;
    		system("cls");
    		break;
		}	
    }  
}while(0);
break;
//-------------------------------------------------------
//-------------------------------------------------------
case 3:
    do{
		system("cls");
	    teste = false;
	    char BuscaCPF [14];
	    int achar=0;
	    printf("\t----------------[Consulta por CPF]-----------------\n");
	    printf("Digite o CPF que deseja buscar no formato xxx.xxx.xxx-xx");
	scanf("%s",&BuscaCPF);
	fflush(stdin);
	i=0;
	int acha=0;
	while ((i<totalReg) && (acha==0))
	{
		if (strcmp(Vacinados[i].CPF, BuscaCPF) == 0)
		{
			acha=1;
		else
			i++;
		}
		if (acha==1)
		{
			printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
			printf("  |  Nome: %s\n",Vacinados[i].Nome);
			printf("  |  CPF: %s\n",Vacinados[i].CPF);
			printf("  |  Vacina: %s\n",Vacinados[i].Vacina);
			printf("  |  Data: %s\n",Vacinados[i].Data);
			printf("  |  Lote: %s\n",Vacinados[i].Lote);
			printf("  |------------------------------------------|\n");
			printf("\t\n");			
			printf("\t|----------------------------------------------|\n");
			printf("\t|    1 - Volta para o menu principal           |\n");
			printf("\t|    2 - Consulte outra pessoa                 |\n");
			printf("\t|    3 - Sair                                  |\n");
			printf("\t|----------------------------------------------|\n");
			printf("\t\n");
				printf("\nDigite a op��o: ");   
				scanf("%d", &Sub_menu);
				if(Sub_menu >= 1 && Sub_menu <= 3)
				{
					if(Sub_menu == 1)
					{
						system("cls");
						teste = true;
						break;
					}
					else if(Sub_menu == 2)
					{
						system("cls");
						continue;
					}
					else if(Sub_menu == 3)
					{
						exit(0);
					}	
				}				
		    }
	system("pause");  
    teste = true;
    system("cls");
    break;
}while(0);
	}
	
	}	
    }  
    break;
}while(0);
break;*/

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
