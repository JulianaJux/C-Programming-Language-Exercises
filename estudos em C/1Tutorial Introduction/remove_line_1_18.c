#include <stdio.h>
#define MAXLINE 1000

int	getline(char line[], int maxline);
int remove (char s[]);

/*remove espaços e tabs, e deleta linhas brancas*/

main()
{
	char line[MAXLINE];

	while(getline(line, MAXLINE) > 0)
		if (remove(line) > 0)
		printf("%s", line);
	return 0;
}
/*remove tudo da string s */

int remove(char s[])
{
	int i;

	i = 0;
	while (s[i] != '\n')
	i++;
	i--; /*volta pra pegar o que veio antes*/
	while ( i >= 0 && (s[i] == ' ' || s[i] == '\t'))
	i--;
	if  ( i >= 0)
	{
		i++;
		s[i] = '\n';
		i++;
		s[i] = '\0';
	}
	return i;
}
