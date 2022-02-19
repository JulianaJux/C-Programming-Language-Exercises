#include <stdio.h>

#define IN 1 /* dentro da palavra*/
#define OUT 0 /* fora da palavra*/

/* coloca uma palavra por linha*/

int main()
{
	int i;
	int est;

	est = OUT;
	while ((i = getchar()) != EOF)
	{
		if (i == ' ' || i == '\n' || i == '\t')
		{
			if (est == IN)
			{
				putchar('\n'); /*termina a palavra*/
				est = OUT;
			}
			else if (est == OUT)
			{
				est = IN; /*começa a outra palavra*/
				putchar(i);
			}
			else
			putchar(i); /*dentro da palavra*/
		}
	}
}
