#include <stdio.h>
#define MAXLINE 1000

int getline(char line [], int maxline);
void reverse(char s[]);

/*reverter o input line, uma linha de cada vez*/

main()
{
	char line[MAXLINE];

	while (getline(line, MAXLINE) > 0)
	{
		reverse(line);
		printf( "%s", line);
	}
}

/* reverter: reverter string s*/

void	reverse(char s[])
{
	int i;
	int j;
	char temp;

	i = 0;
	while(s[i] != '\0')
	i++;
	i--;
	if (s[i] == '\n')
	i--;
	j = 0;
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		i++;
	}
}
