#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>


using namespace std;
bool gameOn = true;
int menu, Sub_menu;
int i = 0, num1, num2;
//----------------------||
struct _dados_vacina
{
	 char CPF[14];
	 char Data[10];
	 char Lote[10];
	 char Vacina[60];
	 char Nome[100];       
};
struct _dados_vacina PessoaFisica;     

//-----------------------//
 
int main(){
setlocale(LC_ALL, "Portuguese");

while (gameOn != false){
	
	cout << "\n";	
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
		
	for(;i <= num1; i++){
		printf("\n");
	    printf("\n----------------( Cadastro de Vacinação )-----------------\n");
	    printf("\t\n");
		printf("\tDigite seu nome: ");
		fflush(stdin);
		scanf("%[^\n]s",&PessoaFisica.Nome[i]);
		printf("\t\n");
		printf("\tDigite seu CPF no formato xxx.xxx.xxx-xx ");
		scanf("%s",&PessoaFisica.CPF[i]);
		printf("\t\n");
		printf("\tDigite a Vacina: ");
		scanf("%s",&PessoaFisica.Vacina[i]);
		printf("\t\n");
		printf("\tDigita a Data no formato xx/xx/xxxx: ");
		scanf("%s",&PessoaFisica.Data[i]);
		printf("\tDigite o número do lote: ");
		scanf("%s",&PessoaFisica.Lote[i]);	
		system("cls");
		cout << "\n";
		cout << "\t|----------------------------------------------|\n";
		cout << "\t|  Menu_Sub:                                   |\n";
		cout << "\t|                                              |\n";
		cout << "\t|    1 - Volta menu principal.                 |\n";
		cout << "\t|    2 - Cadastra outra pessoa.                |\n";
		cout << "\t|    3 - Sair.                                 |\n";
		cout << "\t|----------------------------------------------|\n";
		cout << "\nDigita a opção: ";   
		cin >> Sub_menu;
		
		if(Sub_menu >= 1 && Sub_menu <= 3){
			
			if(Sub_menu == 1){
				system("cls");
				gameOn = true;
				num1=num1+1;
				break;
			}
			else if(Sub_menu == 2){
				system("cls");
				num1=num1+1;
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
    gameOn = false;
    printf("\n        ( Lista de Registros Cadastrados )         ");
    do{  
    for(i = 0; i <= num1; i++){
    
    	printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
    	printf("  |------------------------------------------|\n");
    	if(num1 == i){
    
    		system("pause");
    		gameOn = true;
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
    gameOn = false;
    char CPF [14];
    printf("\n        ( Consulta por CPF )         ");
    printf("\nDigite o CPF: ");
  	scanf("%s", &CPF);
	
	/*do{  
    for(i = 0; i <= num1; i++){
    
    	printf("\n  |---------------(Codigo:%0.1d)-----------------|\n",i);
    	printf("  |  Nome: %s\n",PessoaFisica.Nome[i]);
    	printf("  |  CPF: %s\n",PessoaFisica.CPF[i]);
    	printf("  |  Vacina: %s\n",PessoaFisica.Vacina[i]);
    	printf("  |  Data: %s\n",PessoaFisica.Data[i]);
    	printf("  |  Lote: %s\n",PessoaFisica.Lote[i]);
    	printf("  |------------------------------------------|\n");
    	if(num1 == i){
    
    		system("pause");
    		gameOn = true;
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
gameOn = false;
exit(0);
break;


}

}
system("pause");
return 0;
}

