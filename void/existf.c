#include <stdio.h>
#include <stdlib.h>

void existf()
{
    FILE *file1 = fopen("bnk.txt", "r");
    FILE *file2 = fopen("bnkreg.txt", "r");

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