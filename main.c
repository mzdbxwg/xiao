#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	printf("���Ϲ������");
	scanf("%d", &i);
	
	if(i>=18)
	{
		printf("����ţ�\n");
		printf("ϣ����ø��ˣ�\n");
	}else
	{
		printf("���ܽ��ţ�\n");
		printf("���ߣ����ͣ�\n");
	}
	return 0;
}