#include<stdio.h>

//i++��ʾi=i+1���Ƚ���������ǰ�ӼӺͺ����
//++iֱ�Ӱ����ȼ����㼴��
int main()
{
	int i = -1;
	int j;
	j=i++>-1;//��ӼӲ��������j=i>-1��i++
	printf("i=%d,j=%d\n", i,j);
	printf("i���ֽ���=%d\n", sizeof(i));
	system("pause");
	return 0;
}