#include <stdio.h>
main()
{
	int i = 0, hap =0;
	while(1){
		++i;
		hap += i;
		if(i >= 100) break;
	}
	printf("1���� 100������ ����: %d �Դϴ�" , hap);
}
