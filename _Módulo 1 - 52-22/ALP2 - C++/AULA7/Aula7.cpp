#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>

struct produto{
  int codigo;
  char nome[100];
  float valorCusto;
  float valorVenda;
  int quantidade;
};


int main(void) {
	setlocale(LC_ALL, "Portuguese");
  	printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");
  	int quantidade;
  	printf("Digite a quantidade de produtos desejados\n");
  	scanf("%d",&quantidade);
  	struct produto lista_prod[quantidade];
  	float lucro;
  	int i;
  	int contCodigo = 1;
  	for(i = 0; i < quantidade; i++){
    	lista_prod[i].codigo = contCodigo;
    	printf("Digite o nome do produto\n");
    	fflush(stdin);
    	gets(lista_prod[i].nome);    
    	printf("Digite o valor de custo do produto\n");
    	scanf("%f",&lista_prod[i].valorCusto);
    	fflush(stdin);
    	printf("Digite o valor de venda do produto\n");
    	scanf("%f",&lista_prod[i].valorVenda);
    	fflush(stdin);
    	printf("Digite a quantidade de produto\n");
    	scanf("%d",&lista_prod[i].quantidade);
    	fflush(stdin);
    	contCodigo = contCodigo + 1;
  }
	printf("--------------------------------\n");
	printf("Veja os produtos cadastrados\n");
	printf("--------------------------------\n");
	for(i = 0; i < quantidade; i++){
    	printf("Produto %d - %s\n", lista_prod[i].codigo, lista_prod[i].nome);
    	lucro = (lista_prod[i].valorVenda)-(lista_prod[i].valorCusto);
    	printf("O lucro de venda é: %.2f\n", lucro);
  }  
  system("pause");
}
