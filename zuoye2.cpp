#define CRT_CURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>
#include<time.h>
#include<math.h>
   //Rand_Max-32767
void game()
{
	         //printf("�����");�ж�ǰ����Ϸ���߼�      //1.���������
	int ret = 0;
	int guess = 0;
	//ʱ��� =��ǰ�����ʱ��-��ȥ��ʼʱ��1970.1.1.0��0��0
              //time_t ������	
	ret=rand()%100+1;//����һ�������
	                //�޶���1-100
	   //printf("%d\n", ret);
	                //2.������  
	while (1)
	{
		printf("�������:\n");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}

void menu()
{
	printf("*************************\n");
	printf("***1.����Ϸ  0.�˳���Ϸ****\n");
	printf("**************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));//����Ƶ������ ���Էŵ�������         //��������Ϸ
	int input = 0;              //����������������һ�����֣���һ�����ֱȽϴ�С���ܶ����
	do 
	{
		menu();
		printf("��ѡ��\n");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);

	return 0;
}


//int main()
//{                    //��Ļ�ϴ�ӡ9*9�˷��ڳƱ�
//	// �� �� ÿ�δ�ӡһ�� ÿ�δ�ӡ++��
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i;j++)//for (j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);// ���Ӧ�ô�ӡ���ո� �ǽ���ֿ�
//		                                    //%2d��ӡ��λ��ȱλ�Ҷ��룬%-2d�����
//		}
//		printf("\n");//     ÿ�λ���
//	}
//	return 0;
//}

//int main()
//{                       //��10���������ֵ ����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int max = 0;//max ����Ϊ0  ������ȫΪ����ʱ������
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i<=10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{                //����1/1-1/2+1/3-1/4....-1/100
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{                  //���1-100֮�����д�9�����ֵ��ܸ���
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//  ������else if 99��©��
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}