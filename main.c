#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//从1加到100,当和大于2000时终止循环
int main()
{
	int i, total;
	//for语句中只能有两个分号
	for (i = 1, total = 0; i <= 100; i++)
	{
		if (total>2000)
		{
			break;//当和大于2000时，for循环结束,直接进入printf
		}
		total = total + i;
	}
	printf("total=%d，i=%d\n", total,i);
	system("pause");
	return 0;
}