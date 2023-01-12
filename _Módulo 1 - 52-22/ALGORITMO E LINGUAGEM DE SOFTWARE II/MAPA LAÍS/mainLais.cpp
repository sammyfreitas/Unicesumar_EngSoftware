#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define tam 100
//criar a struct pg 121
struct vacinacao
{
	int codigo;
	int lote;
	char nome[50];
	char cpf[20];
	char vacina[15];
	char data[20];
};

int main(void) {
	setlocale(LC_ALL,"Portuguese");
	struct vacinacao cadastro[10];
	int op, i, cont;
	char proc[20];
		
	cont = 0;
	op=0;
	do{
		printf("-------------------------------------------\n");
		printf("       MENU - CADASTRO DE VACINACAO        \n");
		printf("-------------------------------------------\n");
		printf("DIGITE A OPCAO DESEJADA:\n");
		printf("1-   CADASTRAR APLICACAO\n");
		printf("2-   LISTAR APLICACOES\n");
		printf("3-   BUSCAR POR CPF\n");
		printf("4-   SAIR\n");
		printf("-------------------------------------------\n");
		scanf("%d", &op);
		fflush(stdin);
		switch (op){
      		case 1:
	      		system("cls");
	      		cadastro[cont].codigo = cont;
	      		printf("-------------------------------------------\n");
	        	printf("Digite o nome do paciente: ");
	        	fflush(stdin);
				scanf("%50[^\n]s",&cadastro[cont].nome);
				printf("Digite o CPF do paciente: ");
				fflush(stdin);
				scanf("%50[^\n]s",&cadastro[cont].cpf);
				printf("Digite o nome da vacina: ");
				fflush(stdin);
				scanf("%50[^\n]s",&cadastro[cont].vacina);
				printf("Digite a data da aplicação: ");	
				fflush(stdin);
				scanf("%50[^\n]s",&cadastro[cont].data);
				printf("Digite o lote da vacina: ");
				fflush(stdin);
				scanf("%d",&cadastro[cont].lote);
				cont++;
				fflush(stdin);
			break;
			
			case 2:	
				for(i=0; i<cont; i++){
					printf("Codigo: %d\n",cadastro[i].codigo);
					printf("NOME DO PACIENTE: %s\n",cadastro[i].nome);
					printf("CPF: %s\n",cadastro[i].cpf);
					printf("NOME DA VACINA: %s\n",cadastro[i].vacina);
					printf("DATA APLICACAO: %s\n",cadastro[i].data);
					printf("LOTE: %d\n",cadastro[i].lote);
					printf("-------------------------------------------\n");
				} 
			break;
			
			case 3:
				printf("Digite o CPF que quer consultar:\n");
				fflush(stdin);
	   			scanf("%20[^\n]s", &proc);
	   			for(i=0; i<cont; i++){
	   				if (strcmp(proc, cadastro[i].cpf)==0){
	   					printf("-------------------------------------------\n");
						printf("CPF ENCONTRADO: %s\n", proc);
	   					printf("Codigo: %d\n",cadastro[i].codigo);
						printf("NOME DO PACIENTE: %s\n",cadastro[i].nome);
						printf("CPF: %s\n",cadastro[i].cpf);
						printf("NOME DA VACINA: %s\n",cadastro[i].vacina);
						printf("DATA APLICACAO: %s\n",cadastro[i].data);
						printf("LOTE: %d\n",cadastro[i].lote);
						printf("-------------------------------------------\n");
						fflush(stdin);	
						break;
				   	}	
				}
				if ((strcmp(proc, cadastro[i].cpf)==1) || (strcmp(proc, cadastro[i].cpf)==-1)){
					printf("\n\nCPF nao encontrado. \n\n");	
					fflush(stdin);
				}
	        
           break;
		default:
			printf("\n\nOpcao Invalida. \n\n");	  			
		}
	} 	
    while (op!=4);
	return 0;
}
  
