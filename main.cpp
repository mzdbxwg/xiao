#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char op;//����op��������
	int x, y;//����x,y���Ҫ���������
	printf("\n �������������ʽ��  ");
	scanf("%d%c%d", &x, &op, &y);//�����������ʽ
	switch (op)
	{
	case '+':printf("\n %d %c %d=%d\n", x, op, y, x + y);
		break;
	case '-':printf("\n %d %c %d=%d\n", x, op, y, x - y);
		break;
	case '*':printf("\n %d %c %d=%d\n", x, op, y, x * y);
		break;
	case '/':printf("\n %d %c %d=%d\n", x, op, y, x / y);
		break;
	default:
		printf("\n ���������Ч�������.\n");//��Ч�����
	}
}