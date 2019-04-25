#include <stdio.h>
#include <stdlib.h>
# define MAX 5
//Criação da estrutura contato
struct contato{
	char nome[30];
	char telefone[15];
};

//Declaração da variavel agenda
struct contato agenda[MAX];

int main(){
	int opcao, i;
	do {
	printf("+----------------------+\n");
	printf("|-AGENDA ELETRONICA----|\n");
	printf("+----------------------+\n\n");
	printf("Escolha uma opcao:\n");
	printf("1 - Adicionar pessoa\n");
	printf("2 - Excluir pessoa\n");
	printf("3 - Alterar pessoa\n");
	printf("4 - listar contato\n");
	printf("5 - buscar nome\n");
	printf("0 - sair\n");
	scanf("%d", &opcao);

switch(opcao){
	case 1:
		system("cls");
		printf("Escolha a posicao para adicionar: ");
		scanf("%d", &i);
		printf("Digite o nome: ");
		scanf("%s", &agenda[i].nome);
		printf("Digite o telefone: ");
		scanf("%s", &agenda[i].telefone);
		break;
	case 2:
		printf("Escolha a posicao para adicionar:");
		scanf("%d", &i);
		
		printf("Exclusao feito com sucesso!\n");
		break;
	case 3:
		printf("Escolha a posicao para alterar: ");
		scanf("%d", &i);
		printf("Digite o nome: ");
		scanf("%s", &agenda[i].nome);
		printf("Digite o telefone: ");
		scanf("%s", &agenda[i].telefone);
		
		break;
	case 4:
		for(i = 0; i < MAX; i++){
			printf("%d: %s - %s \n", i,agenda[i].nome, agenda[i].telefone);
		}
		system("pause");
		break;
	case 5:
		break;
	case 0:
		break;
	defaut:
		printf("Opcao invalida");
		break;						
}
system("cls");

}while (opcao != 0 );
	return 0 ;
}

