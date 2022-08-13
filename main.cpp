#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	char op;//变量op存放运算符
	int x, y;//变量x,y存放要计算的数据
	printf("\n 请输入算数表达式：  ");
	scanf("%d%c%d", &x, &op, &y);//输入算术表达式
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
		printf("\n 输入的是无效的运算符.\n");//无效运算符
	}
}