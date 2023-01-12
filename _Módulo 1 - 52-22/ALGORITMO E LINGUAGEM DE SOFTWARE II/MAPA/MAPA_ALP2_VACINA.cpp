//MAPA ALGORITMO E LINGUAGEM DE PROGRAMAÇÃO 2
//BACHARELADO EM ENGENHARIA DE SOFTWARE
//SAMANTHA SOBRAL DE FREITAS
//RA: 22.213.819-5
//CRIANDO UM PROGRAMA BEM DOCUMENTADO E UTILIZANDO O QUE APRENDI DURANTE O CURSO

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
	struct registroVacina PessoaFisica[100]; 
	int busca, acha, i, Menu, Sub_menu, TamArquivo;
	char op;
//-------------------------------------------------------
//MENU CADASTRAMENTO
//-------------------------------------------------------	
	Menu=0;
	while (Menu!=4)
	{
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
		scanf("%d",&Menu);
		fflush(stdin);
			
		switch (Menu){
			case 1:
				//-------------------------------------------------------
				//CADASTRAMENTO DO USUÁRIO
				//-------------------------------------------------------
				system("cls");
				for(i=1; i<=REGISTROS; i++){
					printf("\n");
				    printf("\n----------------( Cadastro de Vacinação )-----------------\n");
				    printf("\t\n");
				    PessoaFisica[i].cod=i;
					printf("\tDigite seu nome: ");
					scanf("%100[^\n]s", &PessoaFisica[i].nome);
					fflush(stdin);
					printf("\tDigite seu CPF no formato xxx.xxx.xxx-xx : ");
					scanf("%14[^\n]s", &PessoaFisica[i].cpf);
					fflush(stdin);
					printf("\tDigite a Vacina: ");
					scanf("%25[^\n]s",&PessoaFisica[i].vacina);
					fflush(stdin);
					printf("\tDigite a Data no formato xx/xx/xx: ");
					scanf("%8[^\n]s",&PessoaFisica[i].data);
					fflush(stdin);
					printf("\tDigite o número do lote: ");
					scanf("%d",&PessoaFisica[i].numLote);	
					fflush(stdin);
					system("cls");
					printf("\n");
					printf("\t|------------------------------------------------|\n");
					printf("\t|   * Registro %d Cadastrado com sucesso  * |\n",&PessoaFisica[i].cod);
					printf("\t|                                                |\n");
					printf("\t|    1 - Voltar ao menu principal                |\n");
					printf("\t|    2 - Cadastrar outra pessoa                  |\n");
					printf("\t|    3 - Sair                                    |\n");
					printf("\t|------------------------------------------------|\n");
					printf("\nDigite a opção: ");   
					scanf("%d",&Sub_menu);
					if(Sub_menu >= 1 && Sub_menu <= 3){
						if(Sub_menu == 1){
							system("cls");
							TamArquivo=TamArquivo+1;
							break;
						}
						else if(Sub_menu == 2){
							system("cls");
							TamArquivo=TamArquivo+1;
							continue;				
						}
						else if(Sub_menu == 3){
							Menu=4;
							exit(0);
						}
					}
				}
			break;
			//-------------------------------------------------------
			//LISTANDO OS REGISTROS CADASTRADOS
			//-------------------------------------------------------
			case 2:
				system("cls");
	    		printf("\n----------------( Lista de Registros Cadastrados )-----------------\n");
	    		do{  
				    for(i=0;i <= TamArquivo; i++){
				    	fflush(stdin);
				    	printf("\n  |---------------(Código:%d)-----------------|\n",PessoaFisica[i].cod);
				    	printf("  |  Nome: %s\n",PessoaFisica[i].nome);
				    	printf("  |  CPF: %s\n",PessoaFisica[i].cpf);
				    	printf("  |  Vacina: %s\n",PessoaFisica[i].vacina);
				    	printf("  |  Data: %s\n",PessoaFisica[i].data);
				    	printf("  |  Lote: %s\n",PessoaFisica[i].numLote);
				    	printf("  |------------------------------------------|\n");
				    	if(TamArquivo == i){
				    		system("pause");
				    		break;
				    	}
					}
				}
			break;
			//-------------------------------------------------------
			//LOCALIZANDO REGISTRO DO USUÁRIO POR CPF
			//-------------------------------------------------------
			case 3:
				system("cls");
			    i=0;
			    acha=0;
				do {
					printf("\n----------------( Consulta por CPF )-----------------\n");
					printf("\n|   Deseja realizar a busca? (s/n)  :  ");
					scanf("%1[^\n]s", &op");
					fflush(stdin);
					} while ((op!="S") && (op!="s") && (op!="N") && (op!="n"));
					while (op!="S") || (op!="s"){
					    printf("\n|   Digite o CPF (formato xxx.xxx.xxx-xx)  :  ");
					    scanf("%s14[^\n]", busca);
					    fflush(stdin);
					    i=0;
					    acha=0;
					    while((i<REGISTROS) &&(acha==0));
					    {
							if (PessoaFisica[i].CPF==busca){
								acha==1;
							}
							else {
								i++;
							}
							if (acha==1){
								printf("\n  |---------------------(Codigo:%d)-----------------------|\n",PessoaFisica[i].cod);
						    	printf("  |  Nome: %s\n",PessoaFisica[i].Nome);
						    	printf("  |  CPF: %s\n",PessoaFisica[i].CPF);
						    	printf("  |  Vacina: %s\n",PessoaFisica[i].Vacina);
						    	printf("  |  Data: %s\n",PessoaFisica[i].Data);
						    	printf("  |  Lote: %s\n",PessoaFisica[i].Lote);
						    	printf("  |--------------------------------------------------------|\n");
							}
							else{
								printf("\n----------------( CPF NÃO ENCONTRADO)-----------------\n");
							}
							do{
								printf("\n|   Deseja realizar a busca? (s/n)  :  ");
								scanf(%c", &op");
								fflush(stdin);
							} while ((op!="S") && (op!="s") && (op!="N") && (op!="n"));	
						}		
					}
				break;
			//-------------------------------------------------------
			//FINALIZANDO O PROGRAMA
			//-------------------------------------------------------
			case 4:
				system("cls");
				printf("\n----------------(SAINDO DO PROGRAMA)-----------------\n");
				exit(0);
			break;
		}	
		}
	}
	system("pause");
	return 0;
}
