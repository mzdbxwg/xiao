#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k;
	i = 1 + 2.0;
	j = 1 + 2 * 3;
	k = i + j + -1 + pow(2, 3);//3+7+(-1)+8=17
	printf("i=%d\n", i);
	printf("j=%d\n", j);
	printf("k=%d\n", k);

	int a = 4 + 5 * 2 - 6 / 3 + 11 % 4;//%求余运算符
	printf("答案是：%d\n", a);

	scanf("%d", &a);
	printf("a=%d\n", a);//如果现在输入1234，那么现在要大家输出4321
	while (a != 0)//当a不等于0就可以进入循环
	{
		printf("%d", a % 10);
		a = a / 10;
	}
		printf("\n");

		return 0;
}
