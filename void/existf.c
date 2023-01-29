#include <stdio.h>
#include <stdlib.h>

void existf()
{
    FILE *file1 = fopen("movelog.txt", "r");
    FILE *file2 = fopen("movelog.txt", "r");

    if (!file1)
    {
        fclose(file1);
        createf(0);
    }

    if (!file2)
    {
        fclose(file1);
        createf(1);
    }
}
