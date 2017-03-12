#include "funcoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//***************************************************************************************************
// INSERIR DO ALUNO
void inserirAluno(struct tipoAluno **i, struct tipoAluno **f) {
        if (*i == NULL) {
                *i = (struct tipoAluno *)malloc(sizeof(struct tipoAluno));
                *f = *i;
        } else {
                (*f)->prox = (struct tipoAluno *)malloc(sizeof(struct tipoAluno));
                *f = (*f)->prox;
        }
        if ((int)*f == -1) {
                printf("\t---HEAP OVERFLOW----\nEnter para continuar\n");
                while (getchar() != '\n') ;
                getchar();
        } else {
                (*f)->prox = NULL;
                printf("\tNome:\n");
                scanf("%s", ((*f)->nome));
                printf("\tRA:\n");
                scanf("%ld", &((*f)->ra));
                printf("\tNota:\n");
                scanf("%f", &((*f)->nota));

                printf("SUCESSO");
                while (getchar() != '\n') ;
                getchar();
        }
}
//***************************************************************************************************
// REMOVER DO ALUNO
void removerCadastro(struct tipoAluno **i, struct tipoAluno **f) {
        struct tipoAluno *antecessor = NULL, *dobby;
        long int ra;
        printf("\tRA a ser desmatriculado:\n");
        scanf("%ld", &ra);
        antecessor = *i;
        if(*i != NULL) {
                if((*i)->ra == ra) {
                        dobby = *i;
                        *i = (*i)->prox;
                        free(dobby);
                }
                else{
                        do {
                                if(antecessor->prox == *f) {
                                        if((*f)->ra == ra) {
                                                dobby = *f;
                                                *f = antecessor;
                                                free(dobby);
                                                break;
                                        }
                                }else{
                                        if((antecessor->prox)->ra == ra) {
                                                dobby = antecessor->prox;
                                                free(dobby);
                                                break;
                                        }
                                }
                                antecessor = antecessor->prox;
                        } while(antecessor != NULL);
                }
        }
        if(antecessor == NULL) {
                printf("\tAluno ainda nao cadastrado\n");
        }
        else{
                printf("\tSUCESSO\n");
        }
        while (getchar() != '\n') ;
        getchar();
}
//***************************************************************************************************
// BUSCAR POR RA DO ALUNO
void buscarRA(struct tipoAluno **i, struct tipoAluno **f) {
        struct tipoAluno *atual;
        atual = *i;
}
//***************************************************************************************************
// BUSCAR POR NOME DO ALUNO
void buscarNome(struct tipoAluno **i, struct tipoAluno **f) {
}
//***************************************************************************************************
// LISTAR TODOS
void listar() {
}
