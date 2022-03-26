#include <stdio.h>
#include <stdlib.h>

void putreg(char str[30], int value)
{
    // a = append
    // Appends to a file. Writing operations, append data at the end of the file.
    FILE *arch = fopen("bnkreg.txt", "a");
    fprintf(arch, "%s: %d\n", str, value);
    fclose(arch);
}