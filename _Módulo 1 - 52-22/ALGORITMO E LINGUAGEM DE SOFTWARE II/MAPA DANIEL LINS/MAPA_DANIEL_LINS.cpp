#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cadastro{
	int codigo;
	char nome[50];
	char cpf[15];
	char vacina[20];
	char data[10];	
	int lote;
};

	
int main(){
	int busca, fimCad=0, opcao=0,  i = 0;
	char CPF[15], SouN;
	struct cadastro brasileiro[500];
	setlocale(LC_ALL,"Portuguese");

	while (opcao<4){
		printf("\n ...............................................................");
		printf("\n\t 1 - Cadastrar Vacina");
		printf("\n\t 2 - Listar de Aplicações");
		printf("\n\t 3 - Consultar CPF");
		printf("\n\t 4 - Sair do Programa" );
		printf("\n\t Digite a opção: ");
		scanf("%d", &opcao);
		printf("\n ...............................................................");		
		Switch (opcao) 		
		{
		Case 1:
			do{	
				printf("\n ...............................................................");
				printf("\n ........................ CADASTRAR ............................");
				printf("\n ...............................................................\n");
				fflush(stdin);
				fimCad++;
				i++;
				brasileiro[i].codigo = fimCad;
				printf("\tDigite o nome	: \n");
				fflush(stdin);
				scanf("%52[^\n]s", &brasileiro[i].nome);
				printf("\tDigite o CPF 	: \n");
				fflush(stdin);
				scanf("%16[^\n]s", &brasileiro[i].cpf);
				printf("\tDigite a vacina	: \n");
				fflush(stdin);
				scanf("%22[^\n]s", &brasileiro[i].vacina);
				printf("\tDigite a data	: \n");
				fflush(stdin);
				scanf("%12[^\n]s", &brasileiro[i].data);
				printf("\tDigite o número do lote: \n");
				fflush(stdin);
				scanf("%d", &brasileiro[i].lote);
				printf("\n ...............................................................\n");	
				printf("\t Deseja cadastrar outro? (s/n) ");
				scanf("%s", &SouN);
				fflush(stdin);
			}while(SouN!='n');
		break;
		Case 2:
		
			if (fimCad==0){
				printf("\n ...............................................................");
				printf("\n\t\t\tBanco de Dados Vazio\n");
				printf("\n ...............................................................");
			}
			else{
				fflush(stdin);
				printf("\n ...............................................................");
				printf("\n\t\t\tLista de Brasileiros Vacinados");
				printf("\n ...............................................................");
				
				for(i=0;i<=fimCad; i++){
					printf("\n ...............................................................");
					printf("\n\t\t\tRegistro : %d", brasileiro[i].codigo);
					printf("\n ...............................................................");
					printf("\n\tNome	: %s", brasileiro[i].nome);
					printf("\n\tCPF		: %s", brasileiro[i].cpf);
					printf("\n\tVacina	: %s", brasileiro[i].vacina);
					printf("\n\tData 	: %s ", brasileiro[i].data);
					printf("\n\tLote	: %d ", brasileiro[i].lote);
					printf("\n ...............................................................");
									
				}
			}
		break;
		Case 3: 
			if (fimCad==0){
				printf("\n ...............................................................");
				printf("\n\t\t\tBanco de Dados Vazio\n");
				printf("\n ...............................................................");
			}
							
			else{
				printf("\n ...............................................................");
				printf("\n\n\tDigite o CPF que deseja consultar :");
				fflush(stdin);
				scanf("%20[^\n]s", CPF);
				int achar=0;
				i=0;
				for(i=0; i<=fimCad; i++){
					fflush(stdin);
					while ((i<=fimCad) && (achar==0)){											
							if ((strcmp(brasileiro[i].cpf, CPF) == 0){
								achar == 1;
							}
							else{
								i++;
							}
						
							if(achar == 1){
								printf("\n\t codigo %d \n\n", brasileiro[i].codigo);
								printf("\n\t nome %s \n\n", brasileiro[i].nome);
								printf("\n\t cpf %s \n\n", brasileiro[i].cpf);
								printf("\n\t vacina %s \n\n", brasileiro[i].vacina);
								printf("\n\t data %s \n\n", brasileiro[i].data);
								printf("\n\t lote %d \n\n", brasileiro[i].lote);
							}
							
						}
						
					}
				printf( "\n\t cpf não achar" );

				}
			}
				
		break;
		Case 4:
		
			exit(0); 
		}
		
		if(opcao !=1 || opcao !=2 or opcao !=3 or opcao !=4){
			printf("\n\t opção inválida");
		}

	return 0;
}
