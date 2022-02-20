#include <stdio.h>
#include <math.h>

#define MAXOP 100 /* max size of operand or operator*/
#define NUMBER '0' /*signal that a number was found*/

int getop( char []);
void push(double);
double pop(void);
void clear(void);
/*reverse Polish calculator*/

main()
{
	int type;
	double op2;
	double op1;
	char s[MAXOP];

	while ((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop())
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
                if (op2 != 0.0)
				push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if (op2 != 0.0)
				push(fmod(pop(), op2));
				else
					printf("error: zero divisor\n");
				break;
			case '?':
				op2 = pop();
				printf("\t%.8g\n", op2);
				push(op2);
				break;
			case 'c':
				clear();
				break;
			case 'd':
			op1 = pop();
			op2 = pop();
			push(op1);
			push(op2);
			break;
			case '\n':
					printf("\t%.8g\n", pop());
			break;
			default:
				printf("error: unknow command %s\n", s);
				break;
		}
	}
	return 0;
}

/*clear: clear the stack*/
void		clear(void)
{
	sp = 0;
}

