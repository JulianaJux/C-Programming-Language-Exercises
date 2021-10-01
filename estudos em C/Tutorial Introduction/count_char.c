#include <stdio.h>
/* contar caracteres in input; primeira versão */

main()
{
    long nc;
    
    nc = 0;
    while (getchar() != EOF)
    nc++;
    printf("%ld\n", nc);
}
