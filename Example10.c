#include <stdio.h>
main()
{
	int a = 32 , b, c;
	b =a << 2;
	a >>= 3;
	c = a << 4;
	printf("%d  %d  %d" , a,b,c);
}
