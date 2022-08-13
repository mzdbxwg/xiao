#include<stdio.h>

//i++表示i=i+1；比较难理解的是前加加和后减减
//++i直接按优先级运算即可
int main()
{
	int i = -1;
	int j;
	j=i++>-1;//后加加拆成两步：j=i>-1再i++
	printf("i=%d,j=%d\n", i,j);
	printf("i的字节数=%d\n", sizeof(i));
	system("pause");
	return 0;
}
