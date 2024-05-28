#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif


#define sucesso 0
#define Quant_De_Valores 20


int main(int argv, char ** argc){

    int valores[Quant_De_Valores];
    int maior_val, menor_val, indice_maior = 0, indice_menor = 0;

    for (int i = 0; i < Quant_De_Valores; i++)
    {
        printf("Diga o %d valor : ", i+1);
        scanf("%d ", &valores[i]);
        printf("\n");
    }

    maior_val = valores[0];
    menor_val = valores[0];

    for (int i = 1; i < Quant_De_Valores; i++)
    {
        if (maior_val < valores[i])
        {
            maior_val = valores[i];
            indice_maior = i;
        }
        
        if (menor_val > valores[i])
        {
            menor_val = valores[i];
            indice_menor = i;
        }

    }
    
    printf("Menor Valor: ");
    PRINTF("%d ", menor_val);
    printf("\nIndice: ");
    PRINTF("%d ", indice_menor);

    printf("\nMaior Valor: ");
    PRINTF("%d ", maior_val);
    printf("\nIndice: ");
    PRINTF("%d ", indice_maior);
    
    printf("\n");


    return sucesso;
}
