//增(自增)1运算符++：使变量的值增加1个单位 ++n :n=n+1          n++：n=n+1
//减（自减）1运算符--：使变量的值减少1个单位 --n :n=n-1        n--：n=n-1
//前缀++n,--n： 先对n增减1，然后再使用n的值如：m=++n;即是n=n+1，m=n;
//后缀n++，n--: 先使用n的值，然后对n增1减1 如：m=n++;即使m=n;n=n+1;
//m=++n-2  就是n=n+1;m=n-2  如n=5则m=4  m=n++-2  就是m=n-2;n=n+1;如n=5则m=3，n=6
//-n++； 就是-（n++） 相当于：-n ,n=n+1   

#include<stdio.h>
int main()
{
	int n = 5;
	printf("%d", -(n++));
	printf("%d", -n);
	printf("%d", -n++);
	printf("%d", -(n++));
	return 0;
}
