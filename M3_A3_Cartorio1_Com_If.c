#include <stdio.h>   //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>  //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>  //biblioteca de aloca��es de texto por regi�o


int main () 
{                    // 1 igual(=) esta atribuindo o valor 
      int opcao=0;   //Definindo vari�veis que equivale a 0. 
      
      setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
      printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
      printf("Escolha a Op��o desejada no menu: \n\n");
      printf("\t1 - Registrar nomes:\n");
      printf("\t2 - Consultar nomes:\n");
      printf("\t3 - Deletar nomes:\n\n\n");
	  printf("Op��o:");// Ponto e virgula = ; sempre usar quando for uma instru��o para o computador//Fim do menu 
      
      scanf("%d", &opcao); //Armazenando a escolha do usu�rio na vari�vel opcao. O valor que o usu�rio digitar
      
      system("cls");      //O sistema vai deletar todas as mensagens e limpar a tela
      
      if(opcao==1)       // In�cio da Sele��o                2 Iguais == Est� fazendo uma compara��o
      {
      	printf("Voc� escolheu o registro de nomes!");
      }	
      if(opcao==2)	
      {
	    printf("Voc� escolheu consultar os nomes!");
	  }
      if(opcao==3) // Sempre vai perguntando para o computador ex:  if= se a vari�vel opcao � igual = 3  
      {            //Entao computador voc� fala para o usuario o que est� no printf
      	printf("Voc� escolheu deletar os nomes!"); 
	  }             
      if(opcao >=4 || opcao <=0) // || Essa tecla chama-se PAIPE 
      {//Significa Ou, EX: computador se o valor que o usu�rio digitar for >=4 ou <=0 fala o que esta no printf
      	printf("Essa op��o n�o est� dispon�vel!");
      	
	  }         // fim da sele�ao
     	  
} 
   
   
