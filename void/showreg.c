#include <stdio.h>
#include <stdlib.h>

void showreg()
{
    system("cls");
    int algo;
    FILE *file = fopen("./movelog.txt", "r");
    if (file)
    {
        while ((algo = getc(file)) != EOF)
            putchar(algo);
        fclose(file);
    }
}
