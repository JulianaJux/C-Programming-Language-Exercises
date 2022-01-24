#include <stdio.h>

#define NOBLANK 'a'
/* substitui uma string de espaço com um único espaço*/
int main ()
{
	int i;
	int lasti;

	lasti = NOBLANK;
	while ((i = getchar()) != EOF)
	{
		if (i != ' ')
			putchar(i);
		if (i == ' ')
			putchar(i);
		lasti = i;
	}

}
