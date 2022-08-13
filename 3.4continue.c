#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//从1加到100,奇数求和
int main()
{
	int i, total;
	//for语句中只能有两个分号
	for (i = 1, total = 0; i <= 100; i++)
	{
		if (i % 2 == 0)//如果i是偶数
		{
			continue;//提前结束本轮循环
		}
		total = total + i;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;
}
