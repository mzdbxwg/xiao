//赋值运算符和数学中的等号有何区别？
//1有方向性a=3是a<-3  2左值和右值类型应一致
//赋值运算符的优先级：
//(1)单重赋值a=3+9   (2)多重赋值a=b=3  a=a+1(右a读数，左a写)可写成a+=1  还有-=，*= /= %=
//如何给表达式赋值：(1)变量=表达式如：a=3   (2)类型 变量=表达式如：int a=3 
//已知int a=3;执行a+=a-=a*a后，变量a的值是：先执行a*a=9变成a+=a-=9 最后变成-12
//执行a += a -= a *= a后，（1）先算3*3=9 a=9 （2）再算a-=9得出a=0  再算a+=0  最后变量a的值是：0

#include<stdio.h>
int main()
{
	int a=0;
	float x=0, y=0;
	a += 1;//a = a + 1;
	x = y = 1;
	printf("%d,%f,%f", a, x, y);
	return 0;

}
