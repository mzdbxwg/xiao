#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char c;
	while (scanf("%c", &c) != EOF)  //这里不加分号
	{
		if (c != '\n')   //if就是假如（判断） 后面加小括号,小括号里面是一个表达式，这里不加分号
		{
			printf("%c", c - 32);
		}
		else {//else就是否则

		}
	}
}
