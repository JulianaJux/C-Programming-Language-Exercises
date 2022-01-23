#include <stdio.h>

/*contar caracteres no input; versão 2 */

main()
{
    double nc;
    for (nc = 0; getchar() != EOF; nc ++);
    printf("%o.f\n", nc);
}
