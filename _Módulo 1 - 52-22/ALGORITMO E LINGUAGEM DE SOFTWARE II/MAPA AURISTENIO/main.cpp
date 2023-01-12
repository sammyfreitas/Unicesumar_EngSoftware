#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct cadastro{
	int codigo;
	char nome[40];
	char cpf[20];
	char vacina[20];
	char data[10];	
	int lote;
};

	
int main(){
	int comparacpf=0, encontrado, contador=0, opcoes=0,  i = 0;
	char consultacpf[20], nao;
	struct cadastro vacinado[20];
	setlocale(LC_ALL,"Portuguese");

	while (opcoes<4){
		
		printf("\n\t digite uma opcao: cadastrar, listar, consultar, sair");
		printf("\n\t 1 - cadastrar vacina");
		printf("\n\t 2 - listar de aplicações");
		printf("\n\t 3 - consultar por cpf");
		printf("\n\t 4 - sair \n\n" );
		printf("\n\t digite a operação desejada: ");
		scanf("%d", &opcoes);
				
		if(opcoes == 1)
		{
			
			do{
					
				printf("\n\t cadastrado %d\n", contador);
				fflush(stdin);
				vacinado[i].codigo = contador;
				
				printf("\t nome do vacinado ");
				fflush(stdin);
				scanf("%40[^\n]s", &vacinado[i].nome);

				printf("\t cpf ");
				fflush(stdin);
				scanf("%20[^\n]s", &vacinado[i].cpf);

				printf("\t vacina ");
				fflush(stdin);
				scanf("%20[^\n]s", &vacinado[i].vacina);

				printf("\t Data ");
				fflush(stdin);
				scanf("%10[^\n]s", &vacinado[i].data);
				
				printf("\t numero lote ");
				fflush(stdin);
				scanf("%d", &vacinado[i].lote);	
				
				contador++;			

				printf("\n\t deseja realizar novo cadastro? (s/n)");
				scanf("%s", &nao);
				fflush(stdin);
				
			}while((nao!='n') && (nao!='N'));
		}

		if(opcoes == 2)
		{
			if (contador==0){
					printf("\n\t nenhum registro no programa \n\n");
			}
			else{
				fflush(stdin);
				printf("\n\t\t  lista de vacinados");
				printf("\n\t -----------------------------------------");
				for(i=0;i<=contador; i++){
					printf("\n\t codigo %d", vacinado[i].codigo);
					printf("\n\t nome %s", vacinado[i].nome);
					printf("\n\t cpf %s", vacinado[i].cpf);
					printf("\n\t vacina %s", vacinado[i].vacina);
					printf("\n\t data %s ", vacinado[i].data);
					printf("\n\t lote %d ", vacinado[i].lote);
					printf("\n\t -----------------------------------------");
									
				}
			}
		}
		if(opcoes == 3) 
			{
				
				if (contador==0){
					printf("\n\t nenhum registro no programa \n\n");
				}
							
				else{
					printf("\n\n\t informe o cpf do vacinado ");
					fflush(stdin);
					scanf("%20[^\n]s", consultacpf);
					
					int encontrado = 0;
					i=0;
					for(i=0; i<=contador; i++){
						fflush(stdin);
						while ((i<=contador) && (encontrado == 0)){
							comparacpf=strcmp(vacinado[i].cpf, consultacpf);	
							comparacpf =0;
							
							if (comparacpf == 0){
								encontrado == 1;
							}
							else{
								i++;
							}
						
							if(encontrado == 1){
								printf("\n\t codigo %d \n\n", vacinado[i].codigo);
								printf("\n\t nome %s \n\n", vacinado[i].nome);
								printf("\n\t cpf %s \n\n", vacinado[i].cpf);
								printf("\n\t vacina %s \n\n", vacinado[i].vacina);
								printf("\n\t data %s \n\n", vacinado[i].data);
								printf("\n\t lote %d \n\n", vacinado[i].lote);
							}
							
						}
						
					}
				printf( "\n\t cpf não encontrado" );

				}
			}
				
		}

		if(opcoes == 4)
		{
			exit(0); 
		}
		
		if(opcoes !=1 || opcoes !=2 or opcoes !=3 or opcoes !=4){
			printf("\n\t opção inválida");
		}

	return 0;
}
