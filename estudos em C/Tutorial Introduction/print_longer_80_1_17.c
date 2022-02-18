#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80

int getline(char line[], int maxline);

/*print linhas acima de 80 caracteres*/
main()
{
	int len; /*tamanho da linha atual*/
	char line[MAXLINE]; /*input aual*/

	while((len = getline(line, MAXLINE)) > 0)
		if (len >= LONGLINE)
			printf("%s", line);
	return 0;
}
