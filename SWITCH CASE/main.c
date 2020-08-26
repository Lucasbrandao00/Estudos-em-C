#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    float num1,num2, num3, s, m;


    printf("Digite 0 para encerrar o programa\n");
    printf("------------------------------------\n");
    printf("Informe o numero da matricula:\n");
    scanf("%f",&m);

    while(m!=0)
    {
    printf("Informe o valor da primeira nota:\n");
    scanf("%f", &num1);
        while(num1<0||num1>10)
        {
            printf("Digite um valor valido entre 0 e 10\n");
            scanf("%f",&num1);
        }

    printf("Informe o valor da segunda nota:\n");
    scanf("%f",&num2);
        while(num2<0||num2>10)
        {
            printf("Digite um valor valido entre 0 e 10\n");
            scanf("%f", &num2);
        }
    printf("Informe o valor da terceira nota:\n");
    scanf("%f",&num3);
        while(num3<0 || num3>10)
        {
            printf("Digite um valor valido entre 0 e 10\n");
            scanf("%f",&num3);
        }

    s=(num1 + num2 + num3)/3;

    system("cls");

    if(s>=7)
    {
        printf("Parabens, aprovado, sua media e %.2f\n",s);
        scanf("%f", s);
    }else
    {
        printf("Sua media e %.2f",s);
        printf("Reprovado, se fudeu kkkkkkkkk");
        scanf("%f",s);
    }

    printf("Informe o numero da matricula novamente:\n");
    scanf("%f",&m);

    }
    return 0;
}
