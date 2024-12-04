#include <stdio.h>      //biblioteca de texto de comunicação com usuário
#include <stdlib.h>     //biblioteca de alocação de espaço em memória
#include <locale.h>     // biblioteca de alocações de texto por região
int main () 
  	{ 
    int opcao=0;        //Definindo variáveis com valor inicial = 0. // 1 igual(=) esta atribuindo o valor
    int laco=1;
      
    for(laco=1;laco=1;) // For -> Laço de repetição
    {
    	system("cls");
	  
  		setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	      
     	printf("### Cartório da EBAC ###\n\n"); //Início do menu
     	printf("Escolha a Opção desejada no menu: \n\n");
      	printf("\t1 - Registrar nomes:\n");
     	printf("\t2 - Consultar nomes:\n");
      	printf("\t3 - Deletar nomes:\n\n\n");
	 	printf("Opção: ");                     // Fim do menu 
      
      	scanf("%d", &opcao); // Scanf -> Armazenando na variavel opcao o valor que o usuario digitar. %d-> Armazenar variavel do tipo inteiro 
                           
      	system("cls");       // O sistema vai deletar todas as mensagens limpar a tela
      	
      	
      	switch(opcao) // Estamos dizendo: Computador, analisa essa variável pra mim
      	{
      		case 1:  // Dois pontos (:) no Switch case é igual abrir uma chaves {}
			printf("Você escolheu o registro de nomes!\n");
    		system("pause"); 
			break;  // break é como se agente está fechando as chaves. Case 1: (:) abriu e break;  (;) fechou break;
			
			case 2: // Caso, a opção for 2
			printf("Você escolheu consultar os nomes!\n");
	   		system("pause");
			break;
			
			case 3:
			printf("Você escolheu deletar os nomes!\n"); // Ponto e virgula = ; sempre usar qundo for uma instrução para o computador
      		system("pause");
			break;
			
			default:
			printf("Essa opção não está disponível!\n");	
			system("pause");
      		break;      	
		}
                  		
    } 
	   
}
