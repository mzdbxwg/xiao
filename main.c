#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c;
	while (scanf("%c", &c) != EOF)  //���ﲻ�ӷֺ�
	{
		if (c != '\n')   //if���Ǽ��磨�жϣ� �����С����,С����������һ�����ʽ�����ﲻ�ӷֺ�
		{
			printf("%c", c - 32);
		}
		else {//else���Ƿ���

		}
	}
}