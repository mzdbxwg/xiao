#include<stdio.h>

int main()
{
	int i, j;//i行j列
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d*%d=%-4d", i, j, i * j);//4列宽度左对齐控制输出对齐
		printf("\n");
	}
	return 0;
}
