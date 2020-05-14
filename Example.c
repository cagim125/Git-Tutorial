#include <stdio.h>
main()
{
	int a,b,c ,hap;
	a = b = c = 2;
	printf("%d , %d , %d", a,b,c);
	hap = ++a | b-- & c--;
	printf(" %d %d %d %d ", hap ,a,b,c);
}
