#include <stdio.h>
#include <stdlib.h>

void again()
{
    int othway;
    printf("\nQuiere realizar alguna otra operacion?\n\n1) Si\n2) No\nOtro) No\nRespuesta: ");
    scanf("%d", othway);
    switch (othway)
    {
    case 1:
        system("cls");
        break;
    case 2:
        system("cls");
        exit(1);
    default:
        printf("No se reconocio ese digito.");
        break;
    }
}