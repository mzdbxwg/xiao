#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//函数自己调用自己就是递归（试用：上N个楼梯有几种上法，只能走一步或二步）
int step(int n)
{
if (1 == n||2==n)
{
return n;//第二步一定写结束条件
}
return step(n - 1) + step(n - 2); //第一步是写好递归公式

}
int main()
{
int n;//存台阶
scanf("%d", &n);
printf("%d\n",step(n));
}

