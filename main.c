#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int year,i,j=5;
	scanf("%d",&year);
	//������ݿ��Ա�400�������ߣ�||�����Ա�4�����������ܱ�100������
	if (year %400 == 0 || year %100 != 0 && year %4 == 0)
	{
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
//ѧϰ�߼��ǡ��߼��롢�߼���
	i = !!j;
	printf("%d\n", i);
	system("pause");
	return 0;
}