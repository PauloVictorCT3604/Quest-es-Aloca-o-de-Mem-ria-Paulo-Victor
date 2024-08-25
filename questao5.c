#include <stdio.h>
#include <stdlib.h>

int valor(){
    
    int N;
    
            do{
               
                printf("Digite um valor inteiro N e positivo: ");
                scanf("%d", & N);
                
                    if(N <= 0){
                        
                        printf("O valor deve ser um número positivo maior que 0.\n");
                    
                    }

            }while(N <= 0);

return N;

}

int* vetor(int N){

    int* vetor = (int*)malloc(N * sizeof(int));
    
            if(vetor == NULL){

                printf("ERRO!!!\n");
            
            exit(1);
    
            }

        printf("\nDeve ser maior ou igual a 2\n\n");

            for(int i = 0; i < N; i++){

                        do{

                            printf("Insira valor da posicao %d: ", i);
                            scanf("%d", &vetor[i]);
                            
                                if (vetor[i] < 2) {
                                    printf("O valor deve ser maior ou igual a 2.\n");
                                }

                        }while(vetor[i] < 2);
            }

return vetor;  

}

int main(){

    int N = valor();
    int* vet = vetor(N);

        printf("\nValores do vetor:\n");  

            for (int i = 0; i < N; i++) {
           
                printf("%d\t ", vet[i]);
            
            }
        
        printf("\n");

    free(vet);

return 0;

}
