
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//switch ����ȫ  ()�ڱ���Ϊ����  case ��Ҳ����Ϊ���ͳ������ʽ

//switch  ���ڶ������
// ���Գ��� default ,break �������ܳ��� continue
//
//case���治һ����break
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;//������break ���ϱȽϺ� ���ں��ڴ���
	case 8:
		break;
	default:  //���п���  λ������
		printf("�������\n");
		break;
	}
	return 0;
}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//		break;
//	case 2:
//		printf("����2\n");
//		break;
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//		break;
//	case 5:
//		printf("����5\n");
//		break;
//	case 6:
//		printf("����6\n");
//		break;
//	case 7:
//		printf("����7\n");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	//�ж�һ�����Ƿ�Ϊ���������1-100�ڵ�����
//	int a = 0;
//	while (a < 100)// a����ȡ=100���������101
//	{
//		printf("%d\n", a);
//		a++;
//}
//	{
//	if (1== a  / 2)
//	{
//		printf("%d������\n", a);
//		
//	}
//		else
//			printf("%d��������\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else if ("age>=12&&age<=28")//else if (18 = < age < 28);  д������
//	printf("����\n");
//	else if (age >= 28 && age <= 50)
//		printf("׳��\n");


//	//else  ���������п���
//	 else �������if��ƥ��
//    ע���ж�if�����У�һ��=��== ����
//  if(5==num)  �� if(num==5)����


////// if()
////	else{
////		if()
////		else()
////		}
///      else
//	return 0;
//
//}