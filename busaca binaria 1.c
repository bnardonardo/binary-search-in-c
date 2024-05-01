#include <stdio.h>

#define tam         3
#define falso       0
#define verdadeiro  1

int main ()
{
    int vetor[3], i, VouF=falso, guarda, final=tam, numproc, ini=0, meio, fim=tam;
    printf("Entre com o valor do vetor: \n");
    for (i=0; i<tam; i++)
    {
        printf("Elemento %d \n", i);
        scanf("%d", &vetor[i]);
        getchar();
        }

    printf("Qual valor esta bscando?\n");
    scanf("%d", &numproc);
    while (ini<= fim){
        meio = ((ini + fim)/2);
        if (numproc < vetor[meio]){
            fim = meio-1;
            ("resultado busca binaria %d\n", meio);

            } else if (numproc > vetor[meio]){
            ini = meio + 1;
            }else return printf("resultado busca binaria %d\n", meio);


    }return printf ("Valor nao encontrado");

return(0);
}

