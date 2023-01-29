#include <stdio.h>
#include <stdlib.h>

void update(int algo);
void createf(int which)
{
    FILE *dbc;
    if (which == 0)
        dbc = fopen("movelog.txt", "w");
    update(0);
    if (which == 1)
        dbc = fopen("movelog.txt", "w");
    update(0);

    fclose(dbc);
}
