#define _CRT_SECURE_NO_WARNINGS//���scanf���뱨������
#include<stdio.h>//����Ԥ��������ڱ���֮ǰ���еĴ���
//scanf���ݵĸ�ʽ����������
//��ʽ��scanf(��ʽ�����ַ����������ַ��);scanf("%d%f",&a,&b);
//һ��scanf��������������  
//�������ʱÿ����%cǰ��Ҫ����һ���ո�
//����scanf()��������ʱ��ͨ����ַָ�����%f����һ��float������%lf����һ��double����
int main()
{
	int i;
	char c;
	float f;
	scanf("%d %c%f",&i,&c,&f);//һ��Ҫ�ڱ���ǰ����&���ţ�&ȡ��ַ�����
	printf("i=%d,c=%c,f=%f\n", i, c, f);
	system("pause");
	return 0;
}
