#include <stdio.h>
static int a = 1;
main()
{
	increase();
	increase();
}
void increase(){
	int  b = 2; 
	printf("%d , %d\n" , ++a , ++b);
}
