#include <stdio.h>      //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>     //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>     // biblioteca de aloca��es de texto por regi�o


int main () 
  	{ 
    int opcao=0;        //Definindo vari�veis com valor inicial = 0. // 1 igual(=) esta atribuindo o valor
    int laco=1;
      
    for(laco=1;laco=1;) // For -> La�o de repeti��o
    {
    	system("cls");
	  
  		setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
     	printf("### Cart�rio da EBAC ###\n\n"); //In�cio do menu
     	printf("Escolha a Op��o desejada no menu: \n\n");
      	printf("\t1 - Registrar nomes:\n");
     	printf("\t2 - Consultar nomes:\n");
      	printf("\t3 - Deletar nomes:\n\n\n");
	 	printf("Op��o: ");                     // Fim do menu 
      
      	scanf("%d", &opcao); // Scanf -> Armazenando na variavel opcao o valor que o usuario digitar. %d-> Armazenar variavel do tipo inteiro 
                           
      	system("cls");       // O sistema vai deletar todas as mensagens limpar a tela
      	
      	
      	switch(opcao) // Estamos dizendo: Computador, analisa essa vari�vel pra mim
      	{
      		case 1:  // Dois pontos (:) no Switch case � igual abrir uma chaves {}
			printf("Voc� escolheu o registro de nomes!\n");
    		system("pause"); 
			break;  // break � como se agente est� fechando as chaves. Case 1: (:) abriu e break;  (;) fechou break;
			
			case 2: // Caso, a op��o for 2
			printf("Voc� escolheu consultar os nomes!\n");
	   		system("pause");
			break;
			
			case 3:
			printf("Voc� escolheu deletar os nomes!\n"); // Ponto e virgula = ; sempre usar qundo for uma instru��o para o computador
      		system("pause");
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n");	
			system("pause");
      		break;      	
		}
                  		
    } 
	   
}

   
   