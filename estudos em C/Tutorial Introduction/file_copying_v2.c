#include <stdio.h>
/* copia input para output; segunda versão*/

main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}
