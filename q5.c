#include <stdio.h>

#ifdef TESTADOR
  #define PRINTF(format, ...) fprintf(stderr, format, __VA_ARGS__)
#else
  #define PRINTF(format, ...) printf(format, __VA_ARGS__)
#endif


#define sucesso 0
#define Quant_De_Valores 5

int EncontrarMenorValor(int valores[]){

    int menor_val=valores[0];

    for (int i = 0; i < Quant_De_Valores; i++)
    {    
        if (menor_val > valores[i])
        {
            menor_val = valores[i];
        }
    }
    return menor_val;
}

int EncontrarMaiorValor(int valores[]){

    int maior_val=valores[0];

    for (int i = 0; i < Quant_De_Valores; i++)
    {    
        if (maior_val < valores[i])
        {
            maior_val = valores[i];
        }
    }
    return maior_val;
}

int EncontrarIndiceDoValor(int valores[], int valor_a_ser_encontrado){

    int indice;

    for (int i = 0; i < Quant_De_Valores; i++)
    {    
        if (valor_a_ser_encontrado == valores[i])
        {
            indice = i;
        }
    }
    return indice;
}

int main(int argv, char ** argc){

    int valores[Quant_De_Valores];

    for (int i = 0; i < Quant_De_Valores; i++)
    {
        printf("Diga o %d valor : ", i+1);
        scanf("%d", &valores[i]);
        printf("\n");
    }
    
    printf("Menor Valor: ");
    PRINTF("%d ", EncontrarMenorValor(valores));
    printf("\nIndice: ");
    PRINTF("%d ", EncontrarIndiceDoValor(valores, EncontrarMenorValor(valores)));

    printf("\nMaior Valor: ");
    PRINTF("%d ", EncontrarMaiorValor(valores));
    printf("\nIndice: ");
    PRINTF("%d ", EncontrarIndiceDoValor(valores, EncontrarMaiorValor(valores)));
    
    printf("\n");


    return sucesso;
}