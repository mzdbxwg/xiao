#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	printf("ÇëÊäÈë·ÖÊý£º");
	scanf("%d", &i);

	if (i >= 90)
	{
		printf("A\n");
	}
	else if (i >= 80&&i<90)
	{
		printf("B\n");
	}
	else if (i >= 70 && i < 80)
	{
		printf("C\n");
	}
	else if (i >= 60 && i < 70)
	{
		printf("D\n");
	}
	else
		printf("E\n");
		return 0;
}