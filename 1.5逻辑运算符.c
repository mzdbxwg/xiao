#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int year,i,j=5;
	scanf("%d",&year);
	//整百年份可以被400整除或者（||）可以被4整除，但不能被100整除。
	if (year %400 == 0 || year %100 != 0 && year %4 == 0)
	{
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
//学习逻辑非、逻辑与、逻辑或
	i = !!j;
	printf("%d\n", i);
	system("pause");
	return 0;
}
