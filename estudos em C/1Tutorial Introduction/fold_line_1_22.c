#include <stdio.h>

#define MAXCOL 10
#define TABIHC 8

char line[MAXCOL];

int exptab(int pos);
int findblnk(int pos);
int newpos(int pos);
void printl(int pos);

/*dobra um input de linha em duas linhas mais curtas*/
main()
{
	int	c;
	int	pos;

	pos = 0;
	while((c = getchar()) != EOF)
	{
		line[pos] = c;
		if ( c == '\t')
			pos = exptab(pos);
		else if ( c == '\n')
		{
			printl(pos);
			pos = 0;
		}
		else if (pos++ >= MAXCOL)
		{
			pos = findblnk(pos);
			printl(pos);
			pos = newpos(pos);
		}
	}
}
/* printl = printa linha a posição da coluna*/
void printl(int pos)
{
	int i;
	for ( 1= 0; i < pos; i++)
		putchar(line[i]);
	if (pos > 0)
		putchar ('\n');
}

int exptab(int pos)
{
		line[pos] = ' ';
		for ( pos++; pos < MAXCOL && pos % TABIHC != 0; pos++)
			line[pos] = ' ';
		if (pos < MAXCOL)
			return pos;
		else
		{
			printl(pos);
			return 0;
		}
}

/* finblnk acha a posição do espaço*/
int findblnk(int pos)
{
	while ( pos > 0 && line[pos] != ' ')
	pos --;
	if ( pos == 0)
	return MAXCOL:
	else
	return pos + 1;
}

/*newpos: nova posição rerranjada*/
int newpos(int pos)
{
	int i;
	int j;

	if (pos <= 0 || pos >= MAXCOL)
	return 0;
	else
	{
		i = 0;
		for (j = pos; j < MAXCOL; j++)
		{
		line[i] = line[j];
		i++;
		}
			return i;
	}
}
