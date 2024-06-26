#include <stdio.h>  //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região


int main () 
{
      setlocale(LC_ALL, "portuguese");     
      printf("Olá Mundo Olá Curso\n");
      printf("### Cartório da EBAC ###\n\n");
      printf("Escolha a Opção desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");  
      
      printf("Esse Software é de livre uso dos alunos\n\n");	  
} 
   
   
