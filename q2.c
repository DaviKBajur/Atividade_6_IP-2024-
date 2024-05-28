#include <stdio.h>
#include <stdbool.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif


#define sucesso 0

#define Tam_Max_Vetor 20
 
int main(int argv, char ** argc){

    int tam_vetor;
    bool continuar;

    do
    {
        printf("Qual a quantidade de numeros (deve ser maior que 0 e menor ou igual a 20)?\n");
        scanf("%d", &tam_vetor);

        continuar = !((tam_vetor <= Tam_Max_Vetor) && (tam_vetor > 0)); 
        
    } while (continuar);
    


    float vetor[tam_vetor], escalar;

    for (int i = 0; i < tam_vetor; i++)
    {
        printf("Diga o %d valor : ", i+1);
        scanf("%f", &vetor[i]);
        printf("\n");
    }

    printf("Qual o escalar?(numero por qual os numeros do vetor serao multiplicados)\n");
    scanf("%f", &escalar);

    for (int i = 0; i < tam_vetor; i++)
    {
        printf("Valor %d * %.2f = ", i+1, escalar);
        PRINTF("%.2f ", vetor[i]*escalar);
        printf("\n");
    }
    



    return sucesso;
}
