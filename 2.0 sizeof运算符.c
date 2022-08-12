#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//sizeof一元运算符，计算变量或类型占用空间的大小，可以增加程序的可移植性，不会导致额外的运算时间开销
//sizeof（object||type_name）(对象或类型)，sizeof内存容量度量函数，
//sizeof () 是一个判断数据类型或者表达式长度的运算符。其作用就是返回一个对象或者类型所占的内存字节数。
//sizeof有两种语法形式，如下：
//sizeof(type_name);//sizeof(类型);
//sizeof object;//sizeof对象;
int main()
{
	int i=123;
	char j='c';
	float k=3.14;

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof j);
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof k);
	printf("%d\n", sizeof(_Bool));//布尔类型？
	return 0;
}
