#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//��for��continueʵ��������

	int i, total;
	for (i = 1, total = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		else
		{
			total += i;
			printf("��ǰi=%d\n", i);
			printf("��ǰtotal=%d\n", total);
		}
	}

	printf("100��������total = %d\n", total);


	system("pause");
	return 0;
}