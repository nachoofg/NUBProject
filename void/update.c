#include <stdio.h>
#include <stdlib.h>

void update(int value)
{
    FILE *arch = fopen("movelog.txt", "w");
    fprintf(arch, "%d", value);
    fclose(arch);
}
