#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*BIBLIOTECA PARA PERMITIR UTILIZAÇÃO DE ACENTOS*/
#include <string.h>/*BIBLIOTECA PARA COMPARAR STRINGS*/
//------------------------------------------------------------
#define REGISTROS 100 /*DEFINIÇÃO DE TAMANHO MÁXIMO DE REGISTROS CADASTRADOS*/

//------------------------------------------------------------
//CRIAÇÃO DA STRUCT PARA CADASTRAMENTO DE USUÁRIOS VACINADOS
//------------------------------------------------------------
struct registroVacina
{
	int cod;
	char nome [100];
	char cpf[14];
	char vacina[25];
	char data[8];
	int numLote;
};

int main() {
	setlocale(LC_ALL,"Portuguese");
	struct registroVacina pessoaVacinada[100]; 
	int busca, acha, i, Menu, Sub_menu, tamArquivo;
	char op;
//-------------------------------------------------------
//MENU CADASTRAMENTO
//-------------------------------------------------------	
	Menu=0;
	while (Menu!=4)
	{
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
		fflush(stdin);                        
		scanf("%d", &Menu);
		i=0;
		tamArquivo=0;
		switch (Menu){
			case 1:
				for(i=1; i<REGISTROS; i++){					
					printf("\n\tRegistro número: %d",i);
					fflush(stdin);
					printf("\n");
				    printf("\n\t|--------------------------------( Cadastro de Vacinação )---------------------------------|\n");
				    pessoaVacinada[i].cod=i;
				    printf("\t| Registro número .........................: %d\n",pessoaVacinada[i].cod);
					printf("\t| Digite o nome completo ..................: ");
					fflush(stdin);
					scanf("%100[^\n]s", &pessoaVacinada[i].nome);
					printf("\t| Digite seu CPF no formato xxx.xxx.xxx-xx : ");
					fflush(stdin);
					scanf("%14[^\n]s", &pessoaVacinada[i].cpf);
					printf("\t| Digite a Vacina                          : ");
					fflush(stdin);
					scanf("%25[^\n]s",&pessoaVacinada[i].vacina);					
					printf("\t| Digite a Data no formato xx/xx/xx        : ");
					fflush(stdin);
					scanf("%8[^\n]s",&pessoaVacinada[i].data);
					printf("\t| Digite o número do lote                  : ");
					fflush(stdin);
					scanf("%d",&pessoaVacinada[i].numLote);
					tamArquivo++;
					printf("\n");
					printf("\t|------------------------------------------------|\n");
					printf("\t|   * Registro %d Cadastrado com sucesso   *      |\n",pessoaVacinada[i].cod);
					printf("\t|------------------------------------------------|\n");
					printf("\t| Deseja cadastrar outro registro? (s/n)   : ");
					scanf("%s",&op);
					printf("\t| A opção escolhida foi %s\n", &op);
					if ((strcmp(&op,"s")==0) or (strcmp(&op,"S")==0)){						
						continue;
					}
					else if ((strcmp(&op,"n")==0) or (strcmp(&op,"N")==0)){
						break;
					}
				}
				if (i=REGISTROS){
					printf("\t|---------------------------------------------------------------------|\n");
					printf("\t|   Espaço em disco cheio. É permitido somente consultar ou listar.   |\n");
					printf("\t|---------------------------------------------------------------------|\n");
					continue;
				}				
			break;
			case 2:
				printf("\n\tmenu listar ok\n");
				printf("\n\tExistem %d registros cadastrados\n",&tamArquivo);
				printf("\n");
			break;
			case 3:
				printf("\n\tmenu consultar ok\n");
				printf("\n");
			break;
			case 4:
				printf("\n\tmenu sair ok\n");
				printf("\n");
			break;
			default:
				printf("\n\topção inválida\n");
				printf("\n");
			break;
		}
	system("pause");
	return 0;
	}
	}	
}
