#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);

/*remove todos os comentários de um programa em C*/
main()
{
	int c;
	int d;

	while (( c = getchar()) != EOF)
	rcomment(c);
	return 0;
}

/* rcomment = lê cada caractere, remove os comentários*/

void rcomment(int c)
{
	int d;

	if (c == '/')
		if((d = getchar()) == '*')
		in_comment();
	else if (d == '/')
	{
		putchar(c);
		putchar(d);
	}
	else
	{
		putchar(c);
		putchar(d);
	}
	else if (c == '\'' || c = '"')
	echo_quote(c);
	else
		putchar(c);
}

/* incomment: dentro de um comentário válido*/
void in_comment(void)
{
	int c;
	int d;

	c = getchar();
	d = getchar();
	while ( c != '*' || d != '/')
	{
		c = d;
		d = getchar();
	}
}

/*echo_quote: echo caracteres com aspas*/
void echo_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c)
	{
		putchar(d);
		if (d == '\\')
			putchar(getchar());
	}
	putchar(d);
}
