#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{                 //��ӡ����
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{                        //j++��j+2���棬100->101
		//�ж��Ƿ�Ϊ����
	     //1.�Գ��� ����2->i-1  ����㷨
		//  2.sqrt(i)/i/2
		//  3.�ų�ż����i       ��������N�־���
		int j = 0;
		for (j = 2; j <= sqrt(i);j++)  //math.h               //for (j = 0; j < i; j++)
		{             //sqrt(i)����i/2����
			        
			if (i % j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d\n", i);
		}
	}  
	printf("%d\n", count);
	return 0;
}



//int main()
//{                    //��ӡ���� 1000-2000��
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//������4�ı������Ҳ��ܱ�100����
//		//�ܱ�400����
//		if (0 == year % 400||year%4==0&&year%100!=0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	
//	}
//	printf("һ����%d������\n", count);
//	return 0;
//}

//int main()
//{                      //�����Լ������������
//	int a = 0;        //շת�����
//	int b = 0;
//	int r = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)     //()����õ�ʽr=a%b���� �򻯴���
//	{
//		r = a% b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{                    //���3�ı�����100
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (0 == i%3)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}



//int main()
//{          //�Ƚ��������Ĵ�С�����
//	int a = 0;
//	int b = 0;
//	int c = 0;//�̶�aΪ���ֵ��c��С
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//
//	}
//	if (b< c)
//	{
//		int tmp = b;
//		c= b;
//		b = tmp;
//
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}