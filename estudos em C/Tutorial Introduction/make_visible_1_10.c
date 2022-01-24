#include <stdio.h>

/* substitui tabs e backspaces com caracteres visíveis*/
int main()
{
	int i;

	while ((i = getchar ()) != EOF)
	if (i == '\t')
		printf("\\t");
	else if (i == '\b')
		printf("\\b");
	else if (i == '\\')
		printf("\\\\");
	else
	putchar(i);
}
