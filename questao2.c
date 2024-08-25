#include <stdio.h>
#include <stdlib.h>

typedef struct{
    
    char nome;
    int num_Matricula;
    float notas[3];

} aluno;


int main() {
    
    printf("Tamamnho em bytes da estrutura: %zu byte(s)\n", sizeof(aluno));

    return 0;
}
