#include <stdio.h>   //biblioteca de texto de comunicação com usuário
#include <stdlib.h>  //biblioteca de alocação de espaço em memória
#include <locale.h>  //biblioteca de alocações de texto por região


int main () 
{                    // 1 igual(=) esta atribuindo o valor 
      int opcao=0;   //Definindo variáveis que equivale a 0. 
      
      setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
      printf("### Cartório da EBAC ###\n\n"); //Início do menu
      printf("Escolha a Opção desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");
	  printf("Opção:");// Ponto e virgula = ; sempre usar quando for uma instrução para o computador//Fim do menu 
      
      scanf("%d", &opcao); //Armazenando a escolha do usuário na variável opcao. O valor que o usuário digitar
      
      system("cls");      //O sistema vai deletar todas as mensagens e limpar a tela
      
      if(opcao==1)       // Início da Seleção                2 Iguais == Está fazendo uma comparação
      {
      	printf("Você escolheu o registro de nomes!");
      }	
      if(opcao==2)	
      {
	    printf("Você escolheu consultar os nomes!");
	  }
      if(opcao==3) // Sempre vai perguntando para o computador ex:  if= se a variável opcao é igual = 3  
      {            //Entao computador você fala para o usuario o que está no printf
      	printf("Você escolheu deletar os nomes!"); 
	  }             
      if(opcao >=4 || opcao <=0) // || Essa tecla chama-se PAIPE 
      {//Significa Ou, EX: computador se o valor que o usuário digitar for >=4 ou <=0 fala o que esta no printf
      	printf("Essa opção não está disponível!");
      	
	  }         // fim da seleçao
     	  
} 
   
   
