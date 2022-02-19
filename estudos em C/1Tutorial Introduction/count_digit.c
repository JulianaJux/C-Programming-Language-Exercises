#include <stdio.h>

/*contar digitos, espaço em branco e outros*/

int main ()
{
	int c;
	int i;
	int nw;
	int no;
	int ndigit [10];

	nw = 0;
	no = 0;
	for ( i = 0; i < 10; i++)
	ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			nw++;
		else
			no++;
	printf("digits = ");
	for ( i = 0; i < 10; i++)
		printf( "%d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nw, no);
}
