#include <stdio.h>
#include <stdlib.h>

#define MaxSize 50 //
typedef int ElemType;//˳�����Ԫ�ص�����
//��̬����
typedef struct {
	ElemType data[MaxSize];//���������������Ԫ��
	int length;//��ǰ���ݱ����ж��ٸ�Ԫ��
}SqList;

//i��������λ�ã���1��ʼ��eҪ�����Ԫ��
bool ListInsert(SqList& L, int i, ElemType e)
{
	if (i<1 || i>L.length + 1)//�ж�Ҫ�����λ���Ƿ�Ϸ�
		return false;
	if (L.length >= MaxSize)//Ԫ�ش�����,�����ٴ���
		return false;
	for (int j = L.length; j >= i; j--)//�ƶ�Ԫ�ر��е�Ԫ��,���������ƶ�
		L.data[j] = L.data[j - 1];
	L.data[i - 1] = e;//�����±���㿪ʼ�������һ��λ�ã����ʵ��±�Ϊ0
	L.length++;
	return true;//�ߵ�����������ɹ�������true
}
//ɾ��ʹ��Ԫ��e�����õ�Ŀ�����ó���Ӧ��ֵ
bool ListDelete(SqList& L, int i, ElemType& e)
{
	if (i<1 || i>L.length)//���ɾ����λ���ǲ��Ϸ�
		return false;
	if (L.length == 0)//˳�����û��Ԫ�أ�����ɾ��
	{
		return false;
	}
	e = L.data[i - 1];//��ȡ��Ӧ���ж�Ӧ��Ԫ�أ���ֵ��e
	for (int j = i; j < L.length; j++)//��i��λ�����ΰ�Ԫ����ǰ����
		L.data[j - 1] = L.data[j];
	L.length--;//ɾ��һ��Ԫ�أ�˳����ȼ�1
	return true;
}
//��ӡ˳���Ԫ��
void PrintList(SqList& L)
{
	for (int i = 0; i < L.length; i++)
	{
		printf("%4d", L.data[i]);//Ҫ������Ԫ�ش�ӡ��һ��
	}
	printf("\n");
}

//���ҳɹ�������λ�ã�λ�ô�1��ʼ������ʧ�ܣ�����0
int LocateElem(SqList L, ElemType e)
{
	int i;
	for (i = 0; i < L.length; i++)//����˳���
		if (L.data[i] == e)
			return i + 1;//��1����Ԫ����˳����е�λ��
	return 0;
}

int main()
{
	SqList L;//˳��������
	bool ret;//�鿴����ֵ����������True������False
	ElemType del;//������Ҫɾ����Ԫ��
	//�����ֶ���˳�����ǰ����Ԫ�ظ�ֵ
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;//�ܹ�����Ԫ��
	ret = ListInsert(L, 2, 60);//�ڶ���λ�ò���60���Ԫ��	
	if (ret)
	{
		printf("����ɹ�\n");
		PrintList(L);//��ӡ�ɹ����˳���
	}
	else {
		printf("����ʧ��\n");
	}
	ret = ListDelete(L, 1, del);//ɾ����һ��λ�õ�Ԫ��,����ɾ����Ԫ�����
	if (ret)
	{
		printf("ɾ���ɹ�\n");
		printf("ɾ��Ԫ��ֵΪ%d\n",del);
		PrintList(L);//��ӡ�ɹ����˳���
	}
	else {
		printf("ɾ��ʧ��\n");
	}
	int elem_pos;
    elem_pos= LocateElem(L, 60);
	if (elem_pos)
	{
		printf("���ҳɹ�\n");
		printf("Ԫ��λ��Ϊ%d\n", ret);
	}else {
		printf("����ʧ��\n");
	}
	system("pause");//ͣ�ڿ���̨����
}