#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char  ch ;

	printf("������ɼ�(���ִ�Сд)��");
	scanf("%c", &ch);

	switch(ch)
	{
	case'A':printf("��ĳɼ���90�����ϣ�\n"); break;
	case'B':printf("��ĳɼ���80~90��֮�䣡\n"); break;
	case'C':printf("��ĳɼ���70~80��֮�䣡\n"); break;
	case'D':printf("��ĳɼ���60~70��֮�䣡\n"); break;
	case'E':printf("��ĳɼ���60���£�\n"); break;
	default:printf("��������Ч����������\n"); 
	}
	return 0;
}