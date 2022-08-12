#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//关系运算符（ =,<,> ）和逻辑运算符(优先级高：逻辑非！中：逻辑与&& 低：逻辑或||)
int main()
{
	int b = 5, c = 3;//(真为1，假为0)
	printf("%d\n",3>1&&1<2);
	printf("%d\n",3+1||2==0);
	printf("%d\n",!(b+c));
	printf("%d\n",!0+1<1||!(3+4));
	printf("%d\n",'a'-'b'&&'c');//97-98  99


	//短路求值
	int m = 3,n = 3;
	(m = 0) && (n = 5);//左面为假，即为假
	printf("m=%d,n=%d\n", m, n);
	(m = 1) || (n = 5);//左面为真，即为真
	printf("m=%d,n=%d\n", m, n);


	int a = 18;//a=2或a=8
	if (3<a&&a<10)  /*要判断3<a同时a<10，要用逻辑运算符： ！逻辑非（a为真，！a为假）
					&& 逻辑与（全真为真，一假全假）
	               ||逻辑或（全假为假，一真全真）*/
	{
		printf("a shi right\n");
	} 
	else
	{
		printf("a shi wrong\n");
	}


//判断两个浮点数是否相等,必须要用下面的方法；if (f-234.56>-0.0001（或-1e4) && f-234.56<0.0001)
	float f = 234.56;
	//if (f == 234.56)
	if (f-234.56>-0.0001 && f-234.56<0.0001)
	{
		printf("f 等于 234.56\n");

	}
	else
	{
		printf("f 不等于 234.56\n");
	}
	system("pause");
	return 0;
}
