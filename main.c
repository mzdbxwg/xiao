#include<stdio.h>
#include<stdlib.h>
//��ֵ����������ֻ�ܷű���
int main()
{
	//int a= 5;
	//a + 3 = 10;�������������������Ϊ��ֵ��˵���Ⱥ���߱����Ǳ���
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