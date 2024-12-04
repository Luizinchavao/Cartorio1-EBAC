#include <stdio.h>      //biblioteca de texto de comunicação com usuário
#include <stdlib.h>     //biblioteca de alocação de espaço em memória
#include <locale.h>     //biblioteca de alocações de texto por região
#include <string.h>     //biblioteca responsável por cuidar das string

int registro()          //Função responsável por cadastrar os usuários no sistema
{
	char arquivo[40];     //Criando as variáveis que agente precisa. char arquivo do tipo string [] de tamanho 40
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando innformação do usuário
	scanf("%s", cpf);			//Scanf-> Armazena o CPF que o usuário digitar na string com %s
	
	strcpy(arquivo,cpf);        // Responsável por copiar os valores das string
	                            // Estamos chamando uma função que ja está pronta pelo sistema.FILE
	FILE *file;                  // Cria o arquivo no banco de dados do computador
	file= fopen(arquivo, "w");  // Fopen abre o arquivo e "w" write significa escrever a informação 
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

int consulta()          // Nao tem ; pq estamos criando uma funçao
 {
	
	setlocale(LC_ALL, "portuguese"); //Definindo a linguagem que podemos usar acentos  
	
	char cpf[40];
	char conteudo[200];
	
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s", cpf);
	
	FILE *file;           
	file = fopen(cpf,"r"); //Abre o arquivo cpf  e "r" read = ler a informação
	
	if(file == NULL) // Criando uma validação com if e abrindo {}-> chaves sobre a consulta feita no file 
	{
		printf("Não foi possível abrir o arquivo! Não localizado! \n");	
	}
	 //Está salvando na variável conteúdo na string os 200 caracteres que estão dentro do arquivo file
	while(fgets(conteudo, 200, file) != NULL) //While -> Enquanto, fgets-> vai buscar lá o conteúdo
	{
		printf("\nEssas são as informações do Usuário: ");
		printf("%s", conteudo);
		printf("\n\n");	
	}  
	                 
	system("pause");	
}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do Usuário a ser deletado: ");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r"); //Leia esse CPF no valor que o usuário passou ali na variável CPF 
	
	if(file == NULL)        //Vamos fazer uma validação com if se esse CPF for NULL->Nulo
	{
		printf("O Usuário, não se encontra no sistema! \n");
		system("pause");
	}
	
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
                           
      	system("cls");       // Resonsavel por limpar a tela. O sistema vai deletar todas as mensagens 
      	
      	
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

   
   
