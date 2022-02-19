#include <stdio.h>
#include <ctype.h>

#define MAXH 15; /* máximo comprimento histograma*/
#define MAXCHAR 128; /* máximo de caracteres diferentes*/

/*printa um histograma horizontal com a frequencia de caracteres diferentes*/

main()
{
	int c;
	int i;
	int len;
	int maxv;
	int cc[MAXCHAR];

	for ( i = 0; i < MAXCHAR; i++)
		cc[i] = 0;
	while ((c = getchar()) != EOF)
		if (c < MAXCHAR)
		++cc[c];
	maxv = 0;
	for ( i = 1; i < MAXCHAR; i++)
		if(cc[i] > maxv)
			maxv = cc[i];
	for (i =1; i < MAXCHAR; i++)
		if (isprint(i))
			printf("%5d - %c - %5d : ", i, i, cc[i]);
		else
			print("%5d - %5d : "; i cc[i]);
		if (cc[i] > 0)
		{
			if ((len = cc[i] * MAXH / maxv) <= 0)
			len = 1;
		}
		else
		{
			len = 0;
		}
		while (len > 0)
		{
			putchar ('*');
			len --;
		}
		putchar('\n');		
}