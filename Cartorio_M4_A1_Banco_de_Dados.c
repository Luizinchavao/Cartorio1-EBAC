#include <stdio.h>      //biblioteca de texto de comunica��o com usu�rio
#include <stdlib.h>     //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h>     //biblioteca de aloca��es de texto por regi�o
#include <string.h>     //biblioteca respons�vel por cuidar das string

int registro()
{
	char arquivo[40];     //Criando as vari�veis que agente precisa. char arquivo do tipo string [] de tamanho 40
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);			//Scanf-> Armazena o CPF que o usu�rio digitar na string com %s
	
	strcpy(arquivo,cpf);        // Respons�vel por copiar os valores das string
	                            // Estamos chamando uma fun��o que ja est� pronta pelo sistema.FILE
	FILE *file;                  // Cria o arquivo no banco de dados do computador
	file= fopen(arquivo, "w");  // Fopen abre o arquivo e "w" write para escrever a informa��o 
	fprintf(file,cpf);          // Salva o valor da vari�vel
	fclose(file);               // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file, ",");         // Salva o espa�o para separar a vari�vel por v�rgula
	fclose(file);               // Fecha o arquivo atualizado
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);          //Scanf-> Armazena o nome que o usu�rio digitar na string com %s 
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file,nome);         // Salva o valor da vari�vel
	fclose(file);               // Fecha o arquivo atualizado
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file, ",");         // Salva o espa�o para separar a vari�vel por v�rgula
	fclose(file);			    // Fecha o arquivo atualizado
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);     //Scanf-> Armazena o sobrenome que o usu�rio digitar na string com %s
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file, sobrenome);   // Salva o valor da vari�vel
	fclose(file);  				// Fecha o arquivo atualizado
	
	file = fopen(arquivo, "a");	// Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file, ",");			// Salva o espa�o para separar a vari�vel por v�rgula
	fclose(file);				// Fecha o arquivo atualizado
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);         //Scanf-> Armazena o cargo que o usu�rio digitar na string com %s
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informa��o
	fprintf(file, cargo);       // Colocando as informa��es dentro do arquivo, nesse caso a vari�vel cargo
	fclose(file);      		    // Fecha o arquivo atualizado
	
	system("pause");
	
}

int consulta()
{
	printf("Voc� escolheu consultar os nomes! \n");
	system("pause");	
}

int deletar()
{
	printf("Voc� escolheu deletar nomes! \n");
	system("pause");	
}


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
	 	printf("Op��o:  ");                     // Fim do menu 
      
      	scanf("%d", &opcao); // Scanf -> Armazenando na variavel opcao o valor que o usuario digitar. %d-> Armazenar variavel do tipo inteiro 
                           
      	system("cls");       // O sistema vai deletar todas as mensagens limpar a tela
      	
      	
      	switch(opcao) // Estamos dizendo: Computador, analisa essa vari�vel pra mim
      	{
      		case 1:  // Dois pontos (:) no Switch case � igual abrir uma chaves {}
			registro();
			break;  // break � como se agente est� fechando as chaves. Case 1: (:) abriu e break;  (;) fechou break;
			
			case 2: // Caso, a op��o for 2
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa op��o n�o est� dispon�vel!\n");	
			system("pause");
      		break;      	
		}
                  		
    } 
	   
}

   
   
