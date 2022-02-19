#include <stdio.h>

#define MAXH 15 /* maximo do histograma*/
#define MAXW 11 /* maximo de uma palavra*/
#define IN 1 /* dentro da palavra*/
#define OUT 0 /* fora da palavra*/

/*faz um histograma horizontal*/
int main()
{
	int c;
	int i;
	int nc;
	int est;
	int len; /* tamanho de cada barra*/
	int maxv; /*valor maximo de comprimento da palavra*/
	int ovfl; /*numero de overflow de palavras*/
	int wl[MAXW]; /* contador de comprimento da palavra*/
	
	est = OUT;
	nc = 0;
	ovfl = 0;
	for (i = 0; i < MAXW; i++)
		wl[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			est = OUT;
			if (nc > 0)
			if (nc < MAXW)
			++wl[nc];
			else
			{
			ovfl++;
			nc = 0;
			}
		}
		else if (est == OUT)
		{
			est = IN;
			nc = 1; /* começo de uma nova palavra*/
		}	
		else
		{
		nc++; /*dentro da palavra*/
		}
		}
		maxv = 0;
		for (i = 1; i < MAXW; i++)
		if (wl[i] > maxv)
		maxv = wl[i];
		for ( i = 1; i < MAXW; i++)
		{
			printf("%5d - %5d : ", wl[i]);
			if(wl[i] > 0)
			{
				if((len = wl[i] * MAXH / maxv) <= 0)
				len = 1;
			}
		else
		len = 0;
		while (len > 0)
		{
			putchar('*');
			len--;
		}
		putchar ('\n');
		}
		if (ovfl > 0)
		printf ("Existem %d palavras >= %d\n", ovfl, MAXW);
	}
