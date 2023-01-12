#include <iostream>
#include <stdio.h>
#include <cs50.h> // Adicionar a biblioteca do CS50

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    // get_string é uma função específica da biblioteca do CS50!
    string nome = get_string("Qual é seu nome? \n");
    printf("hello,%s \n",nome);


	return 0;

}
