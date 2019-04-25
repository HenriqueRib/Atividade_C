#include <stdio.h>
#include <locale.h>

#define MAX 10

struct contato {
    char nome[30];
    char telefone[15];
};

struct contato agenda[MAX];

void listar() {
	int i;
	for (i = 0; i < MAX; i++) {
		printf("%d: %s - %s\n", i, agenda[i].nome, agenda[i].telefone);
	}
}

void inserir(char *nome) {
	int posicao;
	printf("Digite a posição a inserir: ");
	scanf("%d", &posicao);
	sprintf(agenda[posicao].nome, nome);
	//printf("Digite o nome: ");
	//scanf("%s", agenda[posicao].nome);
	printf("Digite o telefone: ");
	scanf("%s", agenda[posicao].telefone);
	
	listar();
}

void alterar() {
	
}

void excluir() {
	int posicao;
	printf("Digite a posição a apagar: ");
	scanf("%d", &posicao);

	sprintf(agenda[posicao].nome, " ");
	sprintf(agenda[posicao].telefone, " ");
}

void buscar() {
	int i, encontrou;
	char busca[30];
	
	printf("Digite o nome a ser buscado: ");
	scanf("%s", busca);
	
	encontrou = 0;
	for (i = 0; i < MAX; i++) {
		if (strcmp(agenda[i].nome, busca) == 0) {
			encontrou = 1;
			printf("Nome encontrado na posição %d\n", i);
			break;
		}
	}
	
	if (encontrou == 0) {
		printf("Nome não encontrado!\n");
	}
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int i, opcao;
    char nome[30];
	
	do {
		system("cls");
		printf("AGENDA ELETRONICA\n");
		printf("Escolha uma opção:\n");
		printf("1 - Inserir\n");
		printf("2 - Alterar\n");
		printf("3 - Excluir\n");
		printf("4 - Listar\n");
		printf("5 - Buscar\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);
		
		if (opcao == 0) {
			printf("Até mais!\n");
			break;	
		}
		
		switch(opcao) {
			case 1:
				printf("Digite o nome: ");
				scanf("%s", nome);
				inserir(nome);
				break;
			case 2:
				alterar();
				break;
			case 3:
				excluir();
				break;
			case 4:
				listar();
				break;
			case 5:
				buscar();
				break;
			default:
				printf("Opção inválida!");
				break;
		}
		printf("Digite ENTER para continuar\n");
		system("pause");
		
	} while(1 == 1);

    return 0;
}
