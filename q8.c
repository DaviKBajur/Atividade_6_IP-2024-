#include <stdio.h>
#include <stdbool.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif


#define sucesso 0

void CalcularNumerosFibonnaci(int vetor[], int tam_vetor){


    vetor[0] = 1;

    if (tam_vetor != 1){   
    
    vetor[1] = 1;


    for (int i = 2; i < tam_vetor; i++)
    {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }
    }

    for (int i = 0; i < tam_vetor; i++)
    {
        PRINTF("%d ", vetor[i]);
    }
    printf("\n");
    
}
 
int main(int argv, char ** argc){

    int tam_vetor;
    bool continuar;

    do
    {
        printf("Qual a quantidade de numeros de Fibonnaci(deve ser maior que 0)?\n");
        scanf("%d", &tam_vetor);

        continuar = !(tam_vetor > 0); 
        
    } while (continuar);

    int vetor[tam_vetor];

    CalcularNumerosFibonnaci(vetor, tam_vetor);  

    return sucesso;
}