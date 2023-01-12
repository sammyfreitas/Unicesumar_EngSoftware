#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int codigo;
int O;

struct vacinacao{ /*Define um lista de nomes sem previamente definir a quantidade de itens a serem armazenados */ 
	int codigo;
	char nome[40];  
	char CPF[16];
	char vacina[20];
	char lote[10];
	char data[12];
};
struct vacinacao Cadastro[100]; 

void CadastrarVacina(){
/* Esta rotina vai capturar os dados via teclado e armazenar na lista na Memória*/
	 char Nome, CPF, Vacina, Data, Lote;
	 fflush(stdin);
	 printf("Código:%x\n ", codigo);
	 printf("Nome:");
	 fflush(stdin);
	 scanf("%40[^\n]s",&Cadastro[codigo].nome);
	 printf("CPF:");
	 fflush(stdin);
	 scanf("%16[^\n]s",&Cadastro[codigo].CPF);
	 printf("Vacina:");
	 fflush(stdin);
	 scanf("%20[^\n]s",&Cadastro[codigo].vacina);
	 printf("Data:");
	 fflush(stdin);
	 scanf("%12[^\n]s",&Cadastro[codigo].data);
	 printf("Lote:");
	 fflush(stdin);
	 scanf("%10[^\n]s",&Cadastro[codigo].lote);
	 codigo++;
	 return;
	 //Menu();
}

void ListarAplicacoes(){
/* Esta rotina vai exibir uma lista com todos os Dados armazenados em memória*/
	printf("ListarAplicações: \n");
	int ix;
	printf("Código  Nome            CPF         Vacina      Lote\n");
	printf("-------------------------------------------------------\n");
	for (ix=0;ix<=codigo;ix++) /* Percorre os indices até o ultimo codigo informado */
	{
		printf("%d   %s  %s  %s\  %s\n",ix, Cadastro[ix].nome, Cadastro[ix].CPF, Cadastro[ix].vacina, Cadastro[ix].lote);
	}
    printf("Tecle "0" para continuar\n");
	scanf("%s",&O);	
    return;
	//Menu();
}

void ConsultaPorCPF(){
/* Esta rotina vai pesquisar se encontra um CPF na lista de CPF armazenado*/
	char cpfp[16];
	printf("Informe o CPF a Pesquisar:");
	scanf("%s",&cpfp);
	int ix;
	for (ix=0;ix<=codigo;ix++){
	  if (strcmp(Cadastro[ix].CPF, cpfp)==0){ /* Verifica se o CPF arqmazenado é igual ao cpf Selecionado*/
		printf("CPF Encontrado\n");
		printf("%d   %s  %s  %s\  %s\n",ix, Cadastro[ix].nome, Cadastro[ix].CPF, Cadastro[ix].vacina, Cadastro[ix].lote);
		}
	else {
		   printf("Não achei o CPF\n");
	  	 }
	return;
	//Menu();
}
}
void sair(){
    printf("Finalizando...\n");
    exit(0);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int opc=1;
	int codigo =1;
    do
    {
    	printf("\n\tEscolha uma opção:\n\n");
		printf("1- Cadastrar Vacina\n");
		printf("2- Listar Aplicações\n");
		printf("3- Consultar por CPF\n ");
		printf("4- Sair\n");
        scanf("%d", &opc);
        system("cls || clear");

        switch(opc)
        {
            case 1:
                CadastrarVacina();
                break;

            case 2:
                ListarAplicacoes();
                break;

            case 3:
                ConsultaPorCPF();
                break;

            case 4:
                sair();
                break;

            default:
                printf("Digite uma opcao valida\n");
        }
    } while(opc);
}


