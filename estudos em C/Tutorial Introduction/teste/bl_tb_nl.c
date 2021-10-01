#include <stdio.h>

main()
{
    int j;
    int bl;
    int nl;
    int tb;

    bl = 0;
    nl = 0;
    tb = 0;

    while ((j = getchar()) != EOF)
    {
        if (j == ' ')
        bl++;
        if (j == '\t')
        tb++;
        if (j == '\n')
        nl++;
    }
    printf("%d bl, %d tb, %d nl\n", bl, tb, nl);
    return 0;
}
