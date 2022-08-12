#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	printf("您老贵庚啊：");
	scanf("%d", &i);
	
	if(i>=18)
	{
		printf("请进门！\n");
		printf("希望玩得高兴！\n");
	}else
	{
		printf("不能进门！\n");
		printf("慢走，不送！\n");
	}
	return 0;
}