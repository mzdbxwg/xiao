#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��1�ӵ�100
int main()
{
	int i = 1;
	int	total = 0; //�������յĺ�
	while (i<=100) //���ﲻ��д�ֺ�
	{
		total = total + i;
		i++;
	}
	printf("total=%d\n", total);
	system("pause");
	return 0;

}
