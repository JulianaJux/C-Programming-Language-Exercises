#include <stdio.h>

int brace;
int brack;
int paren;

void in_quote(int c);
void in_comment(void);
void search(int c);

/* rudimentary syntax check para c*/

main()
{
	int c;
	extern int brace;
	extern int brack;
	extern int paren;

	while((c == getchar()) != EOF)
	
		if ( c == '/')
		{
			if ((c = getchar()) == '*')
			in_comment();
			else
			search(c);
		}
		else if ( c == '\'' || c == '"')
			in_quote(c);
		else
		search(c);

		if (brace < 0)
		{
			printf("Unbalanced braces\n");
			brace = 0;
		}
		else if (brack < 0)
		{
			printf("Unbalanced brackets\n");
			brack = 0;
		}
		else if (paren < 0)
		{
			printf("Unbalanced parens\n");
			paren = 0;
		}
		if (brace > 0)
		{
			printf("Unbalanced braces\n");
			brace = 0;
		}
		else if (brack > 0)
		{
			printf("Unbalanced brackets\n");
			brack = 0;
		}
		else if (paren > 0)
		{
			printf("Unbalanced parens\n");
			paren = 0;
		}
	}

	/* search: search for rudimentary syntax erros*/
	void search(int c)
	{
		extern int brace;
		extern int brack;
		extern int paren;

		if (c == '{')
		brace++;
		else if ( c == '}')
		brace --
		if (c == '[')
		brack++;
		else if ( c == ']')
		brack--;
		if (c == '(')
		paren++;
		else if ( c == ')')
		paren--;
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
void in_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c)
		if (d == '\\')
		getchar();
}
