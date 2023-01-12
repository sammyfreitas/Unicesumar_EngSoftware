#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>


using namespace std;
bool teste = true;
int menu, Sub_menu;
int i = 0, TamArquivo;
//----------------------||
struct cadVacina
{
	 char CPF[14];
	 char Data[10];
	 char Lote[10];
	 char Vacina[60];
	 char Nome[100];       
};
struct cadVacina PessoaFisica;     

//-----------------------//
 
int main(){
setlocale(LC_ALL, "Portuguese");

while (teste != false){	
	printf("\t----------------------------------------------|\n");
	printf("\t|           Vacinação contra Covid-19          |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\t|  Menu:                                       |\n");
	printf("\t|    1 - Cadastrar Vacina                      |\n");
	printf("\t|    2 - Listar Aplicações.                    |\n");
	printf("\t|    3 - Consulta por CPF.                     |\n");
	printf("\t|    4 - Sair.                                 |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\n  Digite a opção: ");                          
	scanf("%d",&menu);

switch (menu){

case 1:
	system("cls");
	do{
		
	for(;i <= TamArquivo; i++){
		printf("\n");
	    printf("\n----------------( Cadastro de Vacinação )-----------------\n");
	    printf("\t\n");
		printf("\tDigite seu nome: ");
		fflush(stdin);
		scanf("%[^\n]s",&PessoaFisica.Nome[i]);
		printf("\tDigite seu CPF no formato xxx.xxx.xxx-xx : ");
		fflush(stdin);
		scanf("%s",&PessoaFisica.CPF[i]);
		printf("\tDigite a Vacina: ");
		fflush(stdin);
		scanf("%s",&PessoaFisica.Vacina[i]);
		printf("\tDigite a Data no formato xx/xx/xxxx: ");
		fflush(stdin);
		scanf("%s",&PessoaFisica.Data[i]);
		printf("\tDigite o número do lote: ");
		fflush(stdin);
		scanf("%s",&PessoaFisica.Lote[i]);	
		system("cls");
		printf("\n");
		printf("\t|------------------------------------------------|\n");
		printf("\t|   * Registro %0.1d Cadastrado com sucesso  * |\n",&i);
		printf("\t|                                                |\n");
		printf("\t|    1 - Voltar ao menu principal.               |\n");
		printf("\t|    2 - Cadastrar outra pessoa.                 |\n");
		printf("\t|    3 - Sair.                                   |\n");
		printf("\t|------------------------------------------------|\n");
		printf("\nDigite a opção: ");   
		scanf("%d",&Sub_menu);
		
		if(Sub_menu >= 1 && Sub_menu <= 3){
			
			if(Sub_menu == 1){
				system("cls");
				teste = true;
				TamArquivo=TamArquivo+1;
				break;
			}
			else if(Sub_menu == 2){
				system("cls");
				TamArquivo=TamArquivo+1;
				continue;
			
				
			}
			else if(Sub_menu == 3){
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
    printf("\n----------------( Lista de Registros Cadastrados )-----------------\n");
    do{  
    for(i=0;i <= TamArquivo; i++){
    	fflush(stdin);
    	printf("\n  |---------------(Código:%0.1d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
    	printf("  |------------------------------------------|\n");
    	if(TamArquivo == i){
    
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
    printf("\n        ( Consulta por CPF )         ");
    printf("\nDigite o CPF: ");
  	scanf("%s", &CPF);
	
	/*do{  
    for(i = 0; i <= TamArquivo; i++){
    
    	printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
    	printf("  |------------------------------------------|\n");
    	if(TamArquivo == i){
    
    		system("pause");
    		teste = true;
    		system("cls");
    		break;
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
printf("\n      Saindo do Programa!.\n");
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
