#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a,b;
	printf("ÇëÊäÈëÁ½¸öÊý£º");
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
