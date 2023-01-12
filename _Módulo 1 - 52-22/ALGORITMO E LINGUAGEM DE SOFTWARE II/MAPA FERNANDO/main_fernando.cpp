#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COVID 50

typedef struct{
  char nome[50];
  char cpf[16];
  char vacina[25];
  char data[12];
  int codigo;
  int lote;
  char op;
  }Vacinado;
  Vacinado vacinados[COVID];

  void menu();
  void cadastrar();
  void lista();
  void consultar();

  int main()
  {
    menu();
    return 0;
  }

void menu()
{
  system("cls"); //linux
  char op;
  int ultimo=0; 
  do{
    printf("\n\t _______________________");
    printf("\n\t|-----------------Controle de Vacinado do Covid---------------------|");
    printf("\n\t _______________________");
    printf("\n1- Cadastrar Vacina.\n2- Listar Aplicações.\n3- Consultar CPF.\n0- Sair.\n");
    printf("\n\n Digite a operação desejada: ");
    scanf("%d", &op);
    getchar();
    switch (op)
    {
    case 1:
      cadastrar();
      ultimo++;
      break;

    case 2:
      lista();
      break;

    case 3:
      consultar();
      break;

    }


  }while(op!=0);

}


void cadastrar(){

  system("cls"); //linux
  char nome[50];
  char cpf[16];
  char vacina[25];
  char data[12];
  int lote;
  int codigo;
  char op;

  int i = 0;
  do{
     

  printf("\n\n Cadastrado nº: %d\n", i+1);
	vacinados[i].codigo = i;

  printf("\nDigite o Nome do Vacinado: ");
  fflush(stdin);
  scanf("%s", vacinados[i].nome);  

  printf("\nDigite o CPF: ");
  fflush(stdin);
  scanf("%16[^\n]s", &vacinados[i].cpf);  
      
  printf("\nVacina: ");
  fflush(stdin);
  scanf("%s", &vacinados[i].vacina);   

  printf("\nData: ");
  fflush(stdin);
  scanf("%s", &vacinados[i].data);

  printf("\nLote: ");
  fflush(stdin);
  scanf("%d", &vacinados[i].lote);
      
  printf("\n1- Continuar\n0- Sair\n");
  fflush(stdin);
  scanf("%s", &op);  

  i++;    
  
  }while(op != '0');
    while(op == '1');

}

void lista()
  {
  system("cls");
      
  printf("\nListando os Vacinados do Covid:\n");
  int c = 0;
  while(vacinados[c].lote != 0)
  {
    printf("-----------------------------------\n");
    printf("Codigo = %d\n",vacinados[c].codigo);
    printf("Nome  = %s\n", vacinados[c].nome);
    printf("CPF = %s\n", vacinados[c].cpf);
    printf("Vacina = %s\n", vacinados[c].vacina);
    printf("Data = %s\n", vacinados[c].data);
    printf("Lote = %d\n", vacinados[c].lote);
    printf("-----------------------------------\n");
    c++;    

  }   
    printf("\n Pressione ENTER para sair.");
		system("read REPLY");
		fflush(stdin);

}

void consultar(){ 
  system("cls"); //linux
  char cpf[16];
  int op;

   printf("\nDigite o CPF para consulta o vacinado:");
   fflush(stdin);
   scanf("%16[^\n]s", cpf);  
    
    printf("O cpf digitado foi %s", cpf);
    int c=0;
    for (c=0; c<=COVID; c++)
    {
      if(strcmp(cpf, vacinados[c].cpf) == 0){ 
        printf("\nCodigo = %d\n",vacinados[c].codigo);
        printf("\nNome  = %s\n", vacinados[c].nome);
        printf("\nCPF = %s\n", vacinados[c].cpf);
        printf("\nVacina = %s\n", vacinados[c].vacina);
        printf("\nData = %s\n", vacinados[c].data);
        printf("\nLote = %d\n", vacinados[c].lote);
        //ultimo = c;
        break;
      }
	  else 
		  if(strcmp(cpf, vacinados[c].cpf) != 0){ 
			  printf("\nO CPF %s não foi encontrado.\n",cpf);
			  break;
    		}
    }
    
    printf("\nDigite 0 para sair ou 1 para nova consulta: ");
    scanf("%d", &op);
  
}
