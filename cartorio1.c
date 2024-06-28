#include <stdio.h>  //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região


int main () 
{ 
      int opcao=0; //Definindo variáveis
      setlocale(LC_ALL, "portuguese"); //Definindo a linguagem     
      printf("### Cartório da EBAC ###\n\n"); //Início do menu
      printf("Escolha a Opção desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");  
      
      printf("Esse Software é de autoria Luiz Gomez\n\n");	  
} 
   
   
