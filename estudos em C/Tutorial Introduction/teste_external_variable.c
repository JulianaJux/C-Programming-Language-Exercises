#include <stdio.h>
#define MAXLINE 1000 /* input máximo do tamanho da linha*/

int max;
char line[MAXLINE];
char longest[MAXLINE];

int getline(void);
void copy(void);

/* printa a maior linha, versão 2*/

main()
{
	int len; /*linha atual tamanho*/
	extern int max; /*o tamanho maximo visto*/
	extern char longest[]; /*maior linha vai ser salva aqui*/

	max = 0;
	while ((len = getline()) > 0)
		if(len > max)
		{
		max = len;
		copy();
		}
	if (max > 0) /*tinha uma linha*/
		printf("%s", longest);
	return 0;
}

/*getline: le uma linha em s e retorna o tamanho*/
int getline(void)
{
	int c;
	int i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

/*copy: copy 'from'into 'to'; assumindo que é a maior*/

void copy(void)
{
	int i;
	extern char line[], longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0')
	i++;
}