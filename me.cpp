#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//�ṹ��-���Ӷ���
//��--���-����-����-���֤��
//�Լ����������

struct Man//һ����
{
	char name[20];//hiki-yukino
	float height;// ���
	short age;//����
	int weight;//����
//	long ID;//���֤��,�������Ͷ������Ӧ�ò�ȡ�ַ�������
	char ID[40];//���֤��
};

int main()
{
	//;���ýṹ��-����һ�������͵ı���----��
	struct Man me = { "hiki-yukino",171,22,53,"51302219990103" };
	printf("������%s\n���:%lf\n����:%d\n����:%d\n���֤��:%s\n", me.name, me.height, me.age, me.weight, me.ID);
	//һ���age=23
	short age = 23;
	printf("������%s\n���:%lf\n����:%d\n����:%d\n���֤��:%s\n", me.name, me.height, me.age, me.weight, me.ID);
	;
	//����pM��ӡ�� �ҵ������Ϣ
	struct Man* pM = &me;
	printf("\n%s\n", (*pM).name);
	printf("\n%s\n", (*pM).ID);
	printf("\n%s", pM->name);
	printf("%s", pM->ID);
	strcpy(me.name, "yukino");//������ȫ ��ͷ�ļ����#pragma warning(disable:4996)
	printf("\n%s\n", pM->name);

	return 0;
}



//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32-4  64-8
//	printf("%d\n", sizeof(pd));
//	*pd = 5.4;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//
//	return 0;
//}