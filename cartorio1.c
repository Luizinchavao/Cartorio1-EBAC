#include <stdio.h>  //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��es de texto por regi�o


int main () 
{
      setlocale(LC_ALL, "portuguese");     
      printf("Ol� Mundo Ol� Curso\n");
      printf("### Cart�rio da EBAC ###\n\n");
      printf("Escolha a Op��o desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");  
      
      printf("Esse Software � de livre uso dos alunos\n\n");	  
} 
   
   
