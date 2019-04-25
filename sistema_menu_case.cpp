#include <stdio.h>
#include <stdlib.h>
//sistema de menu case

main(){
	int op,i;
	i =1;
	do 
	{
	   
		printf("\n ***MENU*** \n");
		printf("1 - Cadastrar aluno.\n");
		printf("2 - Listar aluno.\n");
		printf("3 - Apagar aluno.\n");
		printf("4 - Lista do IMC dos alunos.\n");
		printf("0 - Sairlogo.\n");
		scanf ("%d", &op);
		system("cls");
	   	switch (op)
	   	{
		 
	   		case 1 :
				system("cls");
				printf ("Cadastrado com sucesso!");
			break ;
			case 2 :
				printf("No total foram %d cadastrados.", i);
				
			break ;	
			case 3 :
				printf("Digite o numero do aluno que deseja apagar.");
				system("cls");
				printf ("Aluno apagado com sucesso!");
			break ;
			case 4 :
				printf("opcao 4qual numero");
				system("cls");
			break ;
			case 0 :
				system("cls");
			break ;
			default : printf("\n Numero digitado invalido.");
				
		}
	}
	   while ( op != 0);
	   printf("\n Fim!!.");

	
}

