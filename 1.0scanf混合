#define _CRT_SECURE_NO_WARNINGS//解决scanf编译报错问题
#include<stdio.h>//编译预处理命令：在编译之前进行的处理
//scanf数据的格式化键盘输入
//格式：scanf(格式控制字符串，输入地址表);scanf("%d%f",&a,&b);
//一个scanf读多种类型数据  
//混合输入时每次在%c前需要加入一个空格
//调用scanf()输入数据时，通过地址指向变量%f存贮一个float型数，%lf存贮一个double型数
int main()
{
	int i;
	char c;
	float f;
	scanf("%d %c%f",&i,&c,&f);//一定要在变量前加入&符号，&取地址运算符
	printf("i=%d,c=%c,f=%f\n", i, c, f);
	system("pause");
	return 0;
}
