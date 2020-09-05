#include <stdio.h>
#include <stdalign.h>

float c, f;
int choice;

void Celsius_Fahrenheit()
{

    printf("\nDigite o temperatura em graus Ceusius a ser convertida: ");
    scanf("%f", &c);
    f = ((160 + c * 9) / 5);
    printf("\nSão %.2f ºF\n", f);
}

void Fahrenheit_Celsius()
{

    printf("\nDigite o temperatura em graus Fahrenheit a ser convertida: ");
    scanf("%f", &f);
    c = ((f - 32) / 1.8);
    printf("\nSão %.2f ºC\n", c);
}

main()
{
    do
    {
        printf("-=-=-=-=-=-=-=-=  CONVERSOR DE TEMPERATURA  -=-=-=-=-=-=-=-=-=-\n\n");
        printf("           (1) - CONVERTER DE FAHRENHEIT PARA CELSIUS\n");
        printf("           (2) - CONVERTER DE CELSIUS PARA FAHRENHEIT\n");
        printf("           (0) - FINALIZAR O PROGRAMA");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\nDIGITE O NÚMERO CORRESPONDENTE A OPÇÃO DESEJADA\n");
        printf("=====>  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Fahrenheit_Celsius();
            break;

        case 2:
            Celsius_Fahrenheit();
            break;

        default:
            printf("-=-=-=-=-=-=-=-=-=-=  ERRO - OPÇÃO INVALIDA  -=-=-=-=-=-=-=-=-=-=\n");
            printf("POR FAVOR EXECUTE O PROGRAMA NOVAMENTE E INSIRA UM OPÇÃO VALIDA\n");

            break;
        }

    } while (choice != 3);
}