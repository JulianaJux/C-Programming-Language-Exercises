#include <stdio.h>
#define MAXLINE 1000 /* input máximo do tamanho da linha*/

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* printa a maior linha*/

main()
{
	int len; /*linha atual tamanho*/
	int max; /*o tamanho maximo visto*/
	char line[MAXLINE]; /*linha atual*/
	char longest[MAXLINE]; /*maior linha vai ser salva aqui*/

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0)
		if(len > max)
		{
		max = len;
		copy(longest, line);
		}
	if (max > 0) /*tinha uma linha*/
		printf("%s", longest);
	return 0;
}

/*getline: le uma linha em s e retorna o tamanho*/
int getline(char s[], int lim)
{
	int c;
	int i;

	for (i=0; i<lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

/*copy: copy 'from'into 'to'; assumindo que é a maior*/

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
	i++;
}