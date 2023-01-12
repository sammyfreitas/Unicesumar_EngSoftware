#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
bool teste = true;
int menu, Sub_menu;
int i = 0, ContRegistros, num2;
//----------------------||
struct dados_vacina
{
	 char CPF[14];
	 char Data[10];
	 char Lote[10];
	 char Vacina[60];
	 char Nome[100];       
};
struct dados_vacina PessoaFisica;     

//-----------------------//
 
int main(){
setlocale(LC_ALL, "Portuguese");

while (teste != false){
	printf("\t|----------------------------------------------|\n");
	printf("\t|           Vacinação contra Covid-19          |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\t|  Menu:                                       |\n");
	printf("\t|                                              |\n");
	printf("\t|    1 - Cadastrar Vacina                      |\n");
	printf("\t|    2 - Listar Aplicações.                    |\n");
	printf("\t|    3 - Consulta por CPF.                     |\n");
	printf("\t|    4 - Sair.                                 |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\n  Digite a opção: ");                          
	scanf("%d", &menu);

switch (menu){
case 1:
	system("cls");
	do{
		
	for(;i <= ContRegistros; i++){
		printf("\n");
	    printf("\n----------------( Cadastro de Vacinação )-----------------\n");
	    printf("\n");
		printf("\nDigite o nome: ");
		scanf("%[^\n]s",&PessoaFisica.Nome[i]);
		printf("\n");
		printf("\nDigite o CPF: ");
		scanf("%s",&PessoaFisica.CPF[i]);
		printf("\n");
		printf("\nDigite a Vacina: ");
		scanf("%s",&PessoaFisica.Vacina[i]);
		printf("\t\n");
		printf("\tDigite a Data: ");
		scanf("%s",&PessoaFisica.Data[i]);
		printf("\t\n");
		printf("\tDigite o numero do lote: ");
		scanf("%s",&PessoaFisica.Lote[i]);	
		system("cls");
		printf("\n");
		printf("\n|----------------------------------------------|\n");
		printf("\n|  Menu_Sub:                                   |\n");
		printf("\n|                                              |\n");
		printf("\n|    1 - Volta menu principal.                 |\n");
		printf("\n|    2 - Cadastra outra pessoa.                |\n");
		printf("\n|    3 - Sair.                                 |\n");
		printf("\n|----------------------------------------------|\n");
		printf("\nDigite a opção: ");   
		scanf("%d", &Sub_menu);
		
		if(Sub_menu >= 1 && Sub_menu <= 3){
			
			if(Sub_menu == 1){
				system("cls");
				teste = true;
				ContRegistros=ContRegistros+1;
				break;
			}
			else if(Sub_menu == 2){
				system("cls");
				ContRegistros=ContRegistros+1;
				continue;						
			}
			else if(Sub_menu == 3){
				exit(0);
			}
			else {
				printf("Opção inválida!");
				teste = true;
				ContRegistros=ContRegistros+1;
				break;	
		}				
    }
}while(0);

break;
//-------------------------------------------------------
case 2:
    system("cls");
    teste = false;
    printf("\n        ( Lista de Registros Cadastrados )         ");
    do{  
    for(i = 0; i <= ContRegistros; i++){
    
    	printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
    	printf("  |------------------------------------------|\n");
    	if(ContRegistros == i){
    
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
    system("cls");
    teste = false;
    char CPF [14];
    int retorno;
    printf("\n        ( Consulta por CPF )         ");
    printf("\nDigite o CPF: ");
  	scanf("%s", &CPF);
	do
	{  
    	for(i = 0; i <= ContRegistros; i++)
		{
	    	retorno = strcmp(CPF,PessoaFisica.CPF[i];
	    	if (retorno==0)
	  		{
			   	printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
		    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
		    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
		    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
		    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
		    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
		    	printf("  |------------------------------------------|\n");
		    	if(ContRegistros == i){
		       		system("pause");
		    		teste = true;
		    		system("cls");
		    		break;
		    	else
		    		teste = false;
					i++;
			}	
    }  
}while(0);
break;*/





default:
	printf("\n");
	printf("\t\tOpção Inválida!\n");
	printf("\t----------------------------------");
	Sleep(2500);
    system("cls");	
break;


case 4:
	int i=0;
	printf("\n Saindo do Programa!.\n";
	teste = false;
	exit(0);
	break;
}

}
system("pause");
return 0;
}
