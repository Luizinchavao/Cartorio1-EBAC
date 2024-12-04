#include <stdio.h>      //biblioteca de texto de comunicação com usuário
#include <stdlib.h>     //biblioteca de alocação de espaço em memória
#include <locale.h>     //biblioteca de alocações de texto por região
#include <string.h>     //biblioteca responsável por cuidar das string

int registro()
{
	char arquivo[40];     //Criando as variáveis que agente precisa. char arquivo do tipo string [] de tamanho 40
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);			//Scanf-> Armazena o CPF que o usuário digitar na string com %s
	
	strcpy(arquivo,cpf);        // Responsável por copiar os valores das string
	                            // Estamos chamando uma função que ja está pronta pelo sistema.FILE
	FILE *file;                  // Cria o arquivo no banco de dados do computador
	file= fopen(arquivo, "w");  // Fopen abre o arquivo e "w" write para escrever a informação 
	fprintf(file,cpf);          // Salva o valor da variável
	fclose(file);               // Fecha o arquivo
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informação
	fprintf(file, ",");         // Salva o espaço para separar a variável por vírgula
	fclose(file);               // Fecha o arquivo atualizado
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s", nome);          //Scanf-> Armazena o nome que o usuário digitar na string com %s 
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informação
	fprintf(file,nome);         // Salva o valor da variável
	fclose(file);               // Fecha o arquivo atualizado
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informação
	fprintf(file, ",");         // Salva o espaço para separar a variável por vírgula
	fclose(file);			    // Fecha o arquivo atualizado
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s", sobrenome);     //Scanf-> Armazena o sobrenome que o usuário digitar na string com %s
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informação
	fprintf(file, sobrenome);   // Salva o valor da variável
	fclose(file);  				// Fecha o arquivo atualizado
	
	file = fopen(arquivo, "a");	// Acessando o arquivo e "a" para atualizar a informação
	fprintf(file, ",");			// Salva o espaço para separar a variável por vírgula
	fclose(file);				// Fecha o arquivo atualizado
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s", cargo);         //Scanf-> Armazena o cargo que o usuário digitar na string com %s
	
	file = fopen(arquivo, "a"); // Acessando o arquivo e "a" para atualizar a informação
	fprintf(file, cargo);       // Colocando as informações dentro do arquivo, nesse caso a variável cargo
	fclose(file);      		    // Fecha o arquivo atualizado
	
	system("pause");
	
}

int consulta()
{
	printf("Você escolheu consultar os nomes! \n");
	system("pause");	
}

int deletar()
{
	printf("Você escolheu deletar nomes! \n");
	system("pause");	
}


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
	 	printf("Opção:  ");                     // Fim do menu 
      
      	scanf("%d", &opcao); // Scanf -> Armazenando na variavel opcao o valor que o usuario digitar. %d-> Armazenar variavel do tipo inteiro 
                           
      	system("cls");       // O sistema vai deletar todas as mensagens limpar a tela
      	
      	
      	switch(opcao) // Estamos dizendo: Computador, analisa essa variável pra mim
      	{
      		case 1:  // Dois pontos (:) no Switch case é igual abrir uma chaves {}
			registro();
			break;  // break é como se agente está fechando as chaves. Case 1: (:) abriu e break;  (;) fechou break;
			
			case 2: // Caso, a opção for 2
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			default:
			printf("Essa opção não está disponível!\n");	
			system("pause");
      		break;      	
		}
                  		
    } 
	   
}

   
   
