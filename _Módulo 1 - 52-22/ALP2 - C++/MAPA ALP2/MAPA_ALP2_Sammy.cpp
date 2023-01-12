#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /*BIBLIOTECA PARA PERMITIR UTILIZA��O DE ACENTOS*/
#include <string.h>/*BIBLIOTECA PARA COMPARAR STRINGS*/
//------------------------------------------------------------
#define REGISTROS 100 /*DEFINI��O DE TAMANHO M�XIMO DE REGISTROS CADASTRADOS*/

//------------------------------------------------------------
//CRIA��O DA STRUCT PARA CADASTRAMENTO DE USU�RIOS VACINADOS
//------------------------------------------------------------
struct registroVacina
{
	int cod;
	char nome [100];
	char cpf[15];
	char vacina[18];
	char data[9];
	int numLote;
};
/*int argc, char *argv[]*/
int main() {
	setlocale(LC_ALL,"Portuguese");
	struct registroVacina pessoaVacinada[100]; 
	int acha, compara, i, Menu, Sub_menu, tamArquivo;
	char op, busca[14];
//-------------------------------------------------------
//MENU CADASTRAMENTO
//-------------------------------------------------------	
	Menu=0;
	//tamArquivo=0;
do{
	while (Menu!=4)
	{
		printf("\n");
		printf("\t|-------------------------------------------------------------------|\n");
		printf("\t|                      Vacina��o contra Covid-19                    |\n");
		printf("\t|-------------------------------------------------------------------|\n");
		printf("\t|  Menu:                                                            |\n");
		printf("\t|    1 - Cadastrar Vacina                                           |\n");
		printf("\t|    2 - Listar Aplica��es.                                         |\n");
		printf("\t|    3 - Consulta por CPF.                                          |\n");
		printf("\t|    4 - Sair.                                                      |\n");
		printf("\t|-------------------------------------------------------------------|\n");
		printf("\t| Digite a op��o: ");  
		fflush(stdin);                        
		scanf("%d", &Menu);
		i=0;
		switch (Menu){
			case 1:
				for(i=1; i<REGISTROS; i++){						
					fflush(stdin);					
					//-------------------------------------------------------
					//CADASTRANDO OS REGISTROS DE VACINA��O
					//-------------------------------------------------------
					printf("\n");
				    printf("\n\t|--------------------------------( Cadastro de Vacina��o )---------------------------------|\n");
				    pessoaVacinada[i].cod=tamArquivo;
				    printf("\t| Registro n�mero .........................: %d\n",pessoaVacinada[i].cod);
					printf("\t| Digite o nome completo ..................: ");
					fflush(stdin);
					scanf("%100[^\n]s",&pessoaVacinada[i].nome);
					printf("\t| Digite seu CPF no formato xxx.xxx.xxx-xx : ");
					fflush(stdin);
					scanf("%14[^\n]s",&pessoaVacinada[i].cpf);
					printf("\t| Digite a Vacina .........................: ");
					fflush(stdin);
					scanf("%25[^\n]s",&pessoaVacinada[i].vacina);					
					printf("\t| Digite a Data no formato xx/xx/xx ...... : ");
					fflush(stdin);
					scanf("%8[^\n]s",&pessoaVacinada[i].data);
					printf("\t| Digite o n�mero do lote ................ : ");
					fflush(stdin);
					scanf("%d",&pessoaVacinada[i].numLote);
					printf("\n");
					printf("\t|------------------------------------------------------------------------------------------|\n");
					printf("\t|                            * Registro %d Cadastrado com sucesso   *                       |\n",pessoaVacinada[i].cod);
					printf("\t|------------------------------------------------------------------------------------------|\n");
					printf("\t|                                                                                          |\n");
					printf("\t|    1 - Voltar ao menu principal                                                          |\n");
					printf("\t|    2 - Cadastrar outra pessoa                                                            |\n");
					printf("\t|    3 - Sair                                                                              |\n");
					printf("\t|------------------------------------------------------------------------------------------|\n");
					printf("\n\tDigite a op��o: ");   
					scanf("%d",&Sub_menu);
					if(Sub_menu >= 1 && Sub_menu <= 3){
						if(Sub_menu == 1){
							break;
						}
						else if(Sub_menu == 2){
							tamArquivo++;
							continue;				
						}
						else if(Sub_menu == 3){
							Menu=4;
							exit(0);
						}
					}
			break;
			case 2:
				system("cls");
			//-------------------------------------------------------
			//LISTANDO OS REGISTROS CADASTRADOS
			//-------------------------------------------------------	    		
				printf("\n\t|-----------------( Listagem de CPFs Cadastrados )------------------|");
					if(tamArquivo==0){
						printf("\n\t|-------------------------------------------------------------------|");
						printf("\n\t|---------------( N�O EXISTE NENHUM CPF CADASTRADO )----------------|");
						printf("\n\t|---------------(   RETORNANDO AO MENU PRINCIPAL   )----------------|");
						printf("\n\t|-------------------------------------------------------------------|");
						printf("\n\t");
						printf("\n\t");		
						break;
					}
					else{
						printf("\n\t|               ( Existem %d registros cadastrados  )                |\n",tamArquivo);
						do{
							for(i=0;i<=tamArquivo; i++){						
								fflush(stdin);
						    	printf("\n\t|----------------------------( C�digo: %d )--------------------------|\n",pessoaVacinada[i].cod);
						    	printf("\t|  Nome		: %s\n",pessoaVacinada[i].nome);
						    	printf("\t|  CPF		: %s\n",pessoaVacinada[i].cpf);
						    	printf("\t|  Vacina	: %s\n",pessoaVacinada[i].vacina);
						    	printf("\t|  Data		: %s\n",pessoaVacinada[i].data);
						    	printf("\t|  Lote		: %d\n",pessoaVacinada[i].numLote);
								continue;						    	
								if(tamArquivo == i){
						    		system("pause");
						    		break;
						    	}						
							}
						}while(i<=tamArquivo);
					}
			break;
			case 3:
			//-------------------------------------------------------
			//LOCALIZANDO REGISTRO DO USU�RIO POR CPF
			//-------------------------------------------------------
				//system("cls");
			    do {
			    	printf("\n\t|-----------------------( Consulta por CPF )------------------------|");
					if(tamArquivo==0){
						printf("\n\t|-------------------------------------------------------------------|");
						printf("\n\t|---------------( N�O EXISTE NENHUM CPF CADASTRADO )----------------|");
						printf("\n\t|---------------(   RETORNANDO AO MENU PRINCIPAL   )----------------|");
						printf("\n\t|-------------------------------------------------------------------|");
						printf("\n\t");
						printf("\n\t");	
						break;
					}
			    	printf("\n\t| Deseja realizar a busca? (s/n) : ");
					fflush(stdin);
					scanf("%s", &op);
					printf("\n\t|-------------------------------------------------------------------|");
					if (op=='s' or op=='S'){
						printf("\n\t| Digite seu CPF no formato xxx.xxx.xxx-xx : ");
						fflush(stdin);
						scanf("%14[^\n]s", busca);
						printf("\n\t|-------------------------------------------------------------------|");
						acha=0;
						for(i=0;i<=tamArquivo; i++){						
							fflush(stdin);				    					    	
							while ((i<=tamArquivo) && (acha==0)){
								compara=strcmp(pessoaVacinada[i].cpf, busca);							
								if (compara==0){
									acha=1;
								}
								else{
									i++;
								}
							if(acha==1){
								printf("\n\t|----------------------(  Consulta por CPF   )----------------------|");
								printf("\n\t|----------------------( CPF: %s )----------------------|\n",pessoaVacinada[i].cpf);
								printf("\t|  C�digo	: %d\n",pessoaVacinada[i].cod);	
								printf("\t|  Nome		: %s\n",pessoaVacinada[i].nome);
								printf("\t|  Vacina	: %s\n",pessoaVacinada[i].vacina);
								printf("\t|  Data		: %s\n",pessoaVacinada[i].data);
								printf("\t|  Lote		: %d\n",pessoaVacinada[i].numLote);
								printf("\n\t|-------------------------------------------------------------------|");
								printf("\n\t|--------------(   RETORNANDO AO MENU PRINCIPAL   )-----------------|");
								printf("\n\t|-------------------------------------------------------------------|");
								printf("\n\t");	
								printf("\n\t");
							}								
							}
							if(acha==0){
								printf("\n\t|-------------------------------------------------------------------|");
								printf("\n\t|------------( O CPF %s n�o foi encontrado. )-----------|", busca);
								printf("\n\t|-------------------------------------------------------------------|");
								printf("\n\t|--------------(   RETORNANDO AO MENU PRINCIPAL   )-----------------|");
								printf("\n\t|-------------------------------------------------------------------|");
								printf("\n\t");
								printf("\n\t");
								break;
							}
						}
						continue;	
						}	
				
					else{
						if (op=='n'or op=='N'){
							printf("\n\t|--------------------( Obrigada pela Consulta )---------------------|");
							printf("\n\t|---------------(   RETORNANDO AO MENU PRINCIPAL   )----------------|");
							printf("\n\t|-------------------------------------------------------------------|");
							printf("\n\t");
							printf("\n\t");	
							break;
						}
					}	
				}while ((op!='S') && (op!='s') && (op!='N') && (op!='n'));				
			break;
			case 4:
				printf("\n\t|-------------------------------------------------------------------|");
				printf("\n\t|--------------------(   SAINDO DO PROGRAMA   )---------------------|");
				printf("\n\t|-------------------------------------------------------------------|");
				printf("\n");
				exit(0);
			break;
			default:
				printf("\n\t|-------------------------------------------------------------------|");
				printf("\n\t|----------------------(   OP��O INV�LIDA   )-----------------------|");
				printf("\n\t|-------------------------------------------------------------------|");
				printf("\n");
			break;
		}
	}	
	}
	}while ((Menu!=4) && (Sub_menu!=3));
	system("pause");
	return 0;
}

