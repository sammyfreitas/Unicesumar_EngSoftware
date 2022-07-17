#include <iostream>
#include <stdio.h>

void mostrarInformacao(){
  printf("Bem vindo ao programa com Sub-Rotinas\n"); 
}

void somar(){
  int v1;
  int v2;
  int resultado;
  printf("Digite o valor 1\n");
  scanf("%d",&v1);
  printf("Digite o valor 2\n");
  scanf("%d",&v2);
  resultado = v1+v2;
  
  printf("O resultado é %d", resultado);  
}

float convertePeso(float quilos){
  mostrarInformacao();
  float gramas;
  gramas = quilos * 1000;
  return gramas;
}

float calcularMedia(float n[3]){
  float total, media;
  total = 0;
  for(int i = 0; i < 3; i++){
    total = total + n[i];
  }
  media = total / 3;
  return media;
}

char* retornarPalavra(){
  char palavra[15] = {"Teste palavra\n"};
  //retornarPalavra();
  return palavra;
}

int main()
{
	mostrarInformacao();
	retornarPalavra()
  	printf("Mostrar palavra %s", &palavra;
  	somar();
  	calcularMedia();
  //mostrarInformacao();

  /**float notas[3];

  for(int i = 0; i < 3; i++){
    printf("Digite a nota de numero %d\n", (i+1));
    scanf("%f",&notas[i]);
  }


  printf("A media calculada foi %f\n", calcularMedia(notas));
  **/
}
/*#include <stdio.h>

void mostrarInformacao(){
  printf("Bem vindo ao programa com Sub-Rotinas\n"); 
}

void somar(){
  int v1;
  int v2;
  int resultado;
  printf("Digite o valor 1\n");
  scanf("%d",&v1);
  printf("Digite o valor 2\n");
  scanf("%d",&v2);
  resultado = v1+v2;
  
  printf("O resultado é %d", resultado);  
}

float convertePeso(float quilos){
  mostrarInformacao();
  float gramas;
  gramas = quilos * 1000;
  return gramas;
}

float calcularMedia(float n[3]){
  float total, media;
  total = 0;
  for(int i = 0; i < 3; i++){
    total = total + n[i];
  }
  media = total / 3;
  return media;
}

char* retornarPalavra(){
  char *palavra[15] = {"Teste palavra\n"};
  retornarPalavra();
  return *palavra;
}

int main()
{
  printf("Mostrar palavra %s", retornarPalavra());
  //mostrarInformacao();

  /**float notas[3];

  for(int i = 0; i < 3; i++){
    printf("Digite a nota de numero %d\n", (i+1));
    scanf("%f",&notas[i]);
  }


  printf("A media calculada foi %f\n", calcularMedia(notas));
  **/
}*/
