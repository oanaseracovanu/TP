#include <stdio.h>
#include <stdlib.h>

void citire(int v[])
{
    FILE *f;
    char c;
    if ((f = fopen("9_7.txt", "r")) == NULL)
    {
        printf("error");
    }
    else
    {
        while (!feof(f))
        {
            fscanf(f, "%c", &c);
            v[c]++;
        }
        fclose(f);
    }
}
int main()
{
    int v[500],i;
    for (i = 0; i < 500; i++)
    {
        v[i] = 0;
    }

    citire( v);
    for (i = 0; i < 500; i++)
    {
        if (v[i] > 0)
            printf("%c: %d\n", i, v[i]);
    }

    return 0;
}