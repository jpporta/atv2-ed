//structs de professor, aluno e diciplina
struct tipoAluno {
        long int ra;
        char nome[50];
        float nota;
        struct tipoAluno *prox;
};

//incluindo funcoes
void listar();
void inserirAluno(struct tipoAluno *i, struct tipoAluno *f);
void removerCadastro();
void buscarRA();
void buscarNome();
