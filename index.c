#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

#include "./void/createf.c"
#include "./void/existf.c"
#include "./void/putreg.c"
#include "./void/read.c"
#include "./void/update.c"
#include "./void/again.c"
#include "./void/showreg.c"

int main()
{
    int prin;
    printf("Bienvenido al banco! A continuacion debera de seleccionar una opcion\n\n1) registro\n2) ingresar dinero\n3) quitar dinero\n4) establecer dinero\nQue accion quiere realizar usted?");
    scanf("%d", &prin);

    existf();

    switch (prin)
    {
    case 2:
    {
        int banco = read();
        int suma;

        printf("\nElije el monto a sumar: ");
        scanf("%d", &suma);
        update(banco + suma);
        printf("\nAhora su monto total es de: %d", (banco + suma));
        putreg("Se ingreso:", suma);
        again();
        break;
    }
    case 3:
    {
        int banco = read();
        int resta;

        printf("\nElije el monto a restar: ");
        scanf("%d", &resta);
        update(banco - resta);
        printf("\nAhora su monto total es de: %d", (banco - resta));
        putreg("Se retiro:", resta);
        again();
        break;
    }
    case 4:
    {
        int valor;

        printf("\nElije el monto a establecer:");
        scanf("%d", &valor);
        update(valor);
        printf("\nAhora su monto total es de: %d", (valor));
        putreg("Se establecio:", valor);
        again();

        break;
    }
    case 1:
        showreg();
        break;
    default:
        system("cls");
        main();
        break;
    }

    return 0;
}
