#include <iostream>
#include <stdio.h>
#include <time.h>
#include <locale.h>

float altura, imc, peso;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calculo_imc() 
{
	imc = peso/(altura*altura);
}


int main(int argc, char** argv) {
	/*Adicionando Acentos ao Programa*/
	setlocale(LC_ALL,"");
	/*ponteiro para struct que armazena data e hora*/ 
	struct tm *data_hora_atual;
	
	/*Declaração de Variáveis*/
	int idade, ano,tm_year;
	char nome [40];
	
	//variável do tipo time_t para armazenar o tempo em segundos  
	time_t segundos;
	 //obtendo o tempo em segundos
    time(&segundos);  
	
	//para converter de segundos para o tempo local utilizamos a função localtime 
    data_hora_atual = localtime(&segundos);  
	//para retornar o ano corretamente devemos adicionar 1900 
	data_hora_atual->tm_year+1900;
	
	/*Entrada de Dados*/
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	printf("Digite seu peso: \n");
	scanf("%f", peso);
	printf("Digite sua altura: \n");
	scanf("%s", altura);
	printf("Digite seu ano de nascimento: \n");
	scanf("%f", ano);
	printf("Digite seu ano de nascimento: \n");
	scanf("%f", ano);
	
	data_hora_atual->tm_year+1900;
	idade=(tm_year+1900)-ano;
	
	/*Saída de Dados*/
	printf("Olá, %s \n", nome);
	printf("Você tem: %d\n", idade);
	
	calculo_imc();
	printf("Seu IMC é %imc \n", imc);	
	
	
	if (imc<=18,5){
		printf ("Abaixo do Peso\n");
	}
	if (imc>18,5 && imc<=25){
    	printf ("Peso Adequado\n");
	}
    if (imc>25 && imc<=27){
    	printf ("Sobrepeso\n");
	}
    if (imc>27 && imc<=30){
    	printf ("Obesidade I\n");
    }
    if(imc>30 && imc<=35) {
    	printf ("Obesidade II\n");
    }
    if (imc>35 && imc<=40){
    	printf ("Obesidade III\n");
    }
    if (imc>40){
		printf ("Obesidade Mórbida\n");
	}

	return 0;
}
