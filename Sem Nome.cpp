#include <stdio.h>      // BIblioteca de comunica��o com o usu�rio
#include <stdlib.h>     // Biblioteca de aloca��o de espa�o em mem�ria(Quando agente trabalha com v�riaveis, fun��es, arrays, agente vai alocar(reservar) espa�o na mem�ria. 
#include <locale.h>     // Biblioteca de aloca��es de texto por regi�o

int main()
{
	setlocale(LC_ALL, "Portuguese")
	printf("#### Cart�rio daa EBAC #### \n\n");
	printf("Digite a op��o desejada no menu: \n\n");
	printf("\t1 Registro de nomes \n");
	printf("\t2 Consulta de nomes \n");
	printf("\t3 Deletar nomes \n\n");
	printf("Esse Software � autoria de Luizin Chav�o");
}

