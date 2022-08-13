#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//从1加到100
int main()
{
	int i = 1;
	int	total = 0; //存贮最终的和
	while (i<=100) //这里不能写分号
	{
		total = total + i;
		i++;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;

}
