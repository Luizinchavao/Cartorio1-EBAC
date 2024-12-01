#include <stdio.h>      // BIblioteca de comunicação com o usuário
#include <stdlib.h>     // Biblioteca de alocação de espaço em memória(Quando agente trabalha com váriaveis, funções, arrays, agente vai alocar(reservar) espaço na memória. 
#include <locale.h>     // Biblioteca de alocações de texto por região

int main()
{
	setlocale(LC_ALL, "Portuguese")
	printf("#### Cartório daa EBAC #### \n\n");
	printf("Digite a opção desejada no menu: \n\n");
	printf("\t1 Registro de nomes \n");
	printf("\t2 Consulta de nomes \n");
	printf("\t3 Deletar nomes \n\n");
	printf("Esse Software é autoria de Luizin Chavão");
}

