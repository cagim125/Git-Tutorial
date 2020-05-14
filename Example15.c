#include <stdio.h>
main()
{
	int i = 0, hap =0;
	while(1){
		++i;
		hap += i;
		if(i >= 100) break;
	}
	printf("1에서 100까지의 합은: %d 입니다" , hap);
}
