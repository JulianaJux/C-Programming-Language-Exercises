#include <stdio.h>
/* copia input para output; primeira versão*/

main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}
