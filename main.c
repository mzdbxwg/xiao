#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��1�ӵ�100,���ʹ���2000ʱ��ֹѭ��
int main()
{
	int i, total;
	//for�����ֻ���������ֺ�
	for (i = 1, total = 0; i <= 100; i++)
	{
		if (total>2000)
		{
			break;//���ʹ���2000ʱ��forѭ������,ֱ�ӽ���printf
		}
		total = total + i;
	}
	printf("total=%d��i=%d\n", total,i);
	system("pause");
	return 0;
}