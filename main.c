#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��1�ӵ�100
int main()
{
	int i, total;
	//for�����ֻ���������ֺ�
	for(i = 1, total = 0; i <= 100; i++)
	{
		total = total + i;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;
}