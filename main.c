#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// inicio do programa
int main() {
        int op;
        struct tipoAluno *inicio = NULL, *ultimo = NULL;

        do {
                system("clear");
                // MENU PRINCIPAL
                printf("\tMenu:\n");
                printf("\t     1- Inserir o cadastro de um aluno\n");
                printf("\t     2- Remover o cadastro de um aluno\n");
                printf("\t     3- Buscar aluno por RA\n");
                printf("\t     4- Buscar aluno por Nome\n");
                printf("\t     5- Exibir dados de todos os alunos cadastrados\n");
                printf("\t     0- Sair\n");
                scanf("%i", &op);
                system("clear");
                switch (op) {
                case 1:
                        inserirAluno(&inicio, &ultimo);
                        break;
                case 2:
                        removerCadastro(&inicio, &ultimo);
                        break;
                case 3:
                        buscarRA(&inicio, &ultimo);
                        break;
                case 4:
                        buscarNome(&inicio, &ultimo);
                        break;
                case 5:
                        listar();
                        break;
                case 0:
                        break;
                }
        } while (op != 0);

        return 0;
}
