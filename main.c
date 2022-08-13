#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i;
	while (scanf("%d", &i)!=EOF)
	{
		if (i > 0)//if的括号后面是不可以加分号的
		{
		printf("i is bigger than o\n");
		}else {//上面的条件为假时，走else
		printf("i is not bigger than 0\n");
		}
		
	}
	system("pause");
	return 0;
}
/*if(number>500)cost=0.15;
     else if(number>300)cost=0.10;
	     else if(number>100)cost=0.075;
		     else if(number>50)cost=0.005;
			     else cost=o*
				 上面只有一个语句会得到执行/
/*if(i>1)
    if(i<10)
	  printf("i>1 and i<10\n");
	  else
	  printf("no,they are not\n")
	  注意大括号*/