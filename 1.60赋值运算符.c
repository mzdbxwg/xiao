#include<stdio.h>
#include<stdlib.h>
//赋值运算符的左边只能放变量
int main()
{
	//int a= 5;
	//a + 3 = 10;如果报出做操作数必须为左值，说明等号左边必须是变量
	int iNum, iResult;
	iNum = 10;
	iResult = 3;

	iNum += 5;
	iResult *= iNum;
	printf("%d\n", iNum);
	printf("%d\n", iResult);
	system("pause");
	return 0;
}
