#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a,b;
	printf("请输入两个数：");
	scanf("%d%d", &a,&b);

	if (a != b)
	{
		if(a>b)
		{
			printf("%d>%d", a, b);
		}
		else 
		{
			printf("%d<%d", a, b);
		}
	}
	else 
		printf("%d=%d\n",a,b);
	return 0;
}