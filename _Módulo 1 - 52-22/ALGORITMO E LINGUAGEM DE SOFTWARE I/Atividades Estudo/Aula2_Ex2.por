programa /*Dia_Da_Semana*/
{
	funcao inicio()
	{
	inteiro idade
		escreva("Digite sua idade: ")
		leia (idade)

		escreva ("O valor da variável é: ", idade)
		
		se (idade >= 18 e idade <=20)
		{
			escreva ("Você é maior de idade, possui entre 18 e 20 anos")
		}
		senao
		{
			se (idade < 18) 
				escreva (" Você tem menos que 18 anos ")
			}
			se (idade > 20)
				escreva (" Você tem mais que 20 anos ")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 67; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */