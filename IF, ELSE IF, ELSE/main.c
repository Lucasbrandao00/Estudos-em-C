#include <stdio.h>
int main()
{
    int nota;
    printf("Informe a nota final:\n");
    scanf("%d",&nota);
    if(nota<0 || nota>100)
    {
        printf("Informe um valor válido entre 0 e 100:\n");
        scanf("%d",&nota);
    }
        if(nota<50)
    {
        printf("Reprovado\n");
    }else if(nota>69)


    {
    printf("Aprovado\n");
    }else/**<  */

    {
        printf("Se fudeu\n");
    }
    return 0;
}
