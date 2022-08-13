#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//用for和continue实现奇数和

	int i, total;
	for (i = 1, total = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			total += i;
			printf("当前i=%d\n", i);
			printf("当前total=%d\n", total);
		}
	}

	printf("100以内奇数total = %d\n", total);


	system("pause");
	return 0;
}