#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//printf���������ʽ��������3��4.2��5.2��4.1
int main()
{
	printf("name=%s,age=%3d,sex=%c,score=%4.2f\n", "guoshi", 55 ,'m', 98.5);
	//%d:���ʮ�����з���Int�ͣ�%e:���ʮ�����޷���Int��
	//%f:��С����ʽ��6λС�������float double�ͣ�%e����׼ָ����ʽ���float double��
	//%c���ַ���ʽ��������ַ�
	//l ��d,uǰ���long��  h  ��d,uǰ���short��
	//m ������ݵ���С�������λ>m����ʵ�������<m���Ҷ��룬�󲹿ո� -m����룬�Ҳ��ո�
	//��ʾ����.n �Ը�������ʾ���nλС������ʽ��%.nf  ���磺%10.4f����ʾȡ��λС����λ��10
	//Ҫ������ٷֺţ�%����Ҫ������%%

	system("pause");
	return 0;

}