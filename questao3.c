#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char nome[50];
    int idade;
    char endereco[50];

} cadastro;

cadastro* criarVetorCadastro(int N) {
    
    cadastro* vetor = (cadastro*)malloc(N * sizeof(cadastro));

    if (vetor == NULL) {

        printf("Erro de alocaçao de memoria.\n");

    exit(1);

    }

    for (int i = 0; i < N; i++) {

        printf("Cadastro %d:\n", i + 1);
        printf("Nome: ");
        fgets(vetor[i].nome, 100, stdin);

    vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0'; 
        
        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        getchar();
        printf("Enderec3o: ");
        fgets(vetor[i].endereco, 200, stdin);

    vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';    
    
    }

    return vetor;
}

int main() {
    int N;
    
    printf("Digite o numero de cadastros: ");
    scanf("%d", & N);
    getchar();

    cadastro* cadastros = criarVetorCadastro(N);

    printf("\nDados cadastrados:\n");

            for (int i = 0; i < N; i++) {

                printf("Cadastro %d:\n", i + 1);
                printf("Nome: %s\n", cadastros[i].nome);
                printf("Idade: %d\n", cadastros[i].idade);
                printf("Endereco: %s\n", cadastros[i].endereco);
                printf("\n");
    }

    
    free(cadastros);

return 0;
}
