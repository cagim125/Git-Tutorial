#include <stdio.h>
#include <string.h>
main()
{
	int k;
	int i;
	char a[] = "information!";
	char n  = strlen(a);
	char st[n];
	n--;
	for ( k=n; k >= 0; k--){
		st[n-k]= a[k];
	}  
	for(i = 0; i< strlen(st); i++){
		printf("%c" , st);
	}
	
	//printf("%s\n" , a);
	//printf("%-10.4s\n" , a);
	//printf("%10.4s\n" , a);
}
