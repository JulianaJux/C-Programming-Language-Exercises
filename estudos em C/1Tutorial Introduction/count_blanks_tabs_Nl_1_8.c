#include <stdio.h>

/*contar char blank, tab e novas linhas*/

int main ()
{
	int tab;
	int bl;
	int nl;
	int i;

	tab = 0;
	bl = 0;
	nl = 0;

	while (( i = getchar()) != EOF)
	{
	if (i == ' ')
		bl++;
	if (i == '\t')
		tab++;
	if ( i == '\n')
		nl++;
	}
	printf("%d %d %d\n", bl, tab, nl);

}
