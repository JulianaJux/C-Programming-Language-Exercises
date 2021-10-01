#include <stdio.h>

/*conta linhas de um input*/

main()
{
    int c;
    int nl;

    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        nl++;
        printf("%d\n", nl);
    }
}
