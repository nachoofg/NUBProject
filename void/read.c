#include <stdio.h>
#include <stdlib.h>

int read()
{
    int num;
    FILE *file = fopen("movelog.txt", "r");
    if (file)
    {
        fscanf(file, "%d", &num);
        fclose(file);
        return num;
    }
    return 0;
}
