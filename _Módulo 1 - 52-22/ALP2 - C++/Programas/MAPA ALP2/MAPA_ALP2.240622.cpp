#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>

bool teste = true;
int i, menu, Sub_menu, totalReg;

struct dados_vacina
{
	 char CPF[14];
	 char Data[10];
	 char Lote[10];
	 char Vacina[60];
	 char Nome[100];       
};
struct dados_vacina PessoaFisica;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	printf("\t|----------------------------------------------|\n");
	printf("\t|           Vacinação contra Covid-19          |\n");
	printf("\t|----------------------------------------------|\n");
	printf("\t|  Menu:                                       |\n");
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
			for(;i <= totalReg; i++){
				printf("\n");
			    printf("\n----------------( Cadastro de Vacinação )-----------------\n");
			    printf("\nDigite o nome: ");
				scanf("%[^\n]s",&PessoaFisica.Nome[i]);
				printf("\nDigite o CPF: ");
				scanf("%s",&PessoaFisica.CPF[i]);
				printf("\nDigite a Vacina: ");
				scanf("%s",&PessoaFisica.Vacina[i]);
				printf("\tDigite a Data: ");
				scanf("%s",&PessoaFisica.Data[i]);
				printf("\tDigite o numero do lote: ");
				scanf("%s",&PessoaFisica.Lote[i]);	
				printf("\nDados Cadastrados com Sucesso");
				system("cls");
				printf("\n");
				printf("\n|----------------------------------------------|\n");
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
						totalReg=totalReg+1;
						break;
					}
					else if(Sub_menu == 2){
						system("cls");
						totalReg=totalReg+1;
						continue;
					}
					else if(Sub_menu == 3){
						exit(0);
					}
			}
		while (0);
		break;
	case 2:
		system("cls");
		teste=false;
		printf("\n----------------( Lista de Registros Cadastrados )-----------------\n");
		do{
			for (i=0;i<=totalReg;i++){
				printf("\n|---------------(Codigo:%0.1d)-----------------|\n",i);	
				printf("|  Nome: %s\n",PessoaFisica.Nome[i]);
				printf("|  CPF: %s\n",PessoaFisica.CPF[i]);
		    	printf("|  Vacina: %s\n",PessoaFisica.Vacina[i]);
		    	printf("|  Data: %s\n",PessoaFisica.Data[i]);
		    	printf("|  Lote: %s\n",PessoaFisica.Lote[i]);
		    	printf("|-------------------------------------------------|\n");
		    	if(totalReg == i){
		    		system("pause");
		    		teste=true;
		    		system("cls");
		    		break;
				}
			}
		}
		while(0);
		break;
	case 3:
	    system("cls");
	    teste = false;
	    int retorno;
	    char CPF [14];
	    printf("\n----------------( Consulta por CPF )-----------------\n");
	    printf("\nDigite o CPF: ");
	  	scanf("%s", &CPF);
		do{  
		    for(i = 0; i <= totalReg; i++){
		    char RegCPF = PessoaFisica.CPF[i];
		    	retorno = strcmp(CPF,RegCPF);
    			if (retorno==0){
			       	printf("\n|---------------(Codigo:%0.1d)-----------------|\n",i);
			    	printf("|  Nome: %s\n",PessoaFisica.Nome[i]);
			    	printf("|  CPF: %s\n",PessoaFisica.CPF[i]);
			    	printf("|  Vacina: %s\n",PessoaFisica.Vacina[i]);
			    	printf("|  Data: %s\n",PessoaFisica.Data[i]);
			    	printf("|  Lote: %s\n",PessoaFisica.Lote[i]);
			    	printf("|------------------------------------------|\n");
			    	if(totalReg==i){
			       		printf("\n|--------O CPF%s não foi encontrado)--------|\n",PessoaFisica.CPF[i]);
					   	system("pause");
			    		teste = true;
			    		system("cls");
			    		break;
					}	
    	}  
		while(0);
		break;*/
	default:
		printf("\n");
		printf("\t\tOpção Inválida!\n");
		Sleep(2500);
    	system("cls");	
	break;
	case 4:
		int i=0;
		("\n----------------( Saindo do Programa )-----------------\n");
		Sleep(500);      
		teste = false;
		exit(0);
	break;
	system("pause");
	return 0;
}
