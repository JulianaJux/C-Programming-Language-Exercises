#include <stdio.h>

/*contar char blank, tab e novas linhas*/

int main ()
{
	int tab;
	int bl;
	int nl;
	int i;
	char * = str1;

	tab = '	';
	bl = ' ';
	nl = '\n';

	while (tab || bl || nl)
	{
		i++;
	}

    printf("Input the text: ");
    scanf("[^\n]", str1); // takes everything before '\n'
	printf("%s\n", str1);
	printf("%d\n", i);

}