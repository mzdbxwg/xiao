#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//sizeofһԪ��������������������ռ�ÿռ�Ĵ�С���������ӳ���Ŀ���ֲ�ԣ����ᵼ�¶��������ʱ�俪��
//sizeof��object||type_name��(���������)��sizeof�ڴ���������������
//sizeof () ��һ���ж��������ͻ��߱��ʽ���ȵ�������������þ��Ƿ���һ���������������ռ���ڴ��ֽ�����
//sizeof�������﷨��ʽ�����£�
//sizeof(type_name);//sizeof(����);
//sizeof object;//sizeof����;
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
	printf("%d\n", sizeof(_Bool));//�������ͣ�
	return 0;
}
