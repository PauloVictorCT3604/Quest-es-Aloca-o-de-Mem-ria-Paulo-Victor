#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;
    int *vet; 

        printf("Insira o tamanho do vetor: ");
        scanf("%d", & n);

    vet = (int*) malloc(n * sizeof(int));


            if (vet == NULL) {

                printf("ERRO!!!.\n");
                
            return 1;

            }

    
        printf("Insira os valores do vetor:\n");

            for (int i = 0; i < n; i++){

                printf("Elemento %d: ", i + 1);
                scanf("%d", &vet[i]);

            }

        printf("Os elementos do vetor:\n");

            for (int i = 0; i < n; i++){

                printf("%d ", vet[i]);

            }

         printf("\n");

    free(vet);

    return 0;


}