#include <stdio.h>
#include <limits.h>

/*determinar os ranges de cada tipo de dado*/

main()
{
	/*tipos com signed*/
	printf("signed char min = %d\n", SCHAR_MIN);
	printf("signed char max = %d\n", SCHAR_MAX);
	printf("signed short min = %d\n", SHRT_MIN);
	printf("signed short max = %d\n", SHRT_MAX);
	printf("signed int min = %d\n", INT_MIN);
	printf("signed int max = %d\n", INT_MAX);
	printf("signed long min = %d\n", LONG_MIN);
	printf("signed long max = %d\n", LONG_MAX);

	/*tipos unsigned*/
	printf("unsigned char max = %u\n", UCHAR_MAX);
	printf("unsigned short max = %u\n", USHRT_MAX);
	printf("unsigned int max = %u\n", UINT_MAX);
	printf("signed long max = %u\n", ULONG_MAX);
}
