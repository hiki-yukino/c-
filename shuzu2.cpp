#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//012FFB20
//	//012FFB24
//	//012FFB20
//	//012FFB24
//	//012FFB20
//	//012FFB3C
//
//
//
//	return 0;
//}




//void bubble_aort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	           //int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;    //������һ�������ÿ�������Ѿ�������
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp =  arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;     //�������ݲ���ȫ����
//			}
//
//		}
//		if (flag == 1)   //���Ч��  �Ż�
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] ={ 9,8,7,6,5,4,3,2,1,0 };//ð������ ���� ����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_aort(arr,sz); //9��Ԫ�� ��Ҫ8��ð������ ÿ����Ҫ8-i ��i=0��i++���ԱȽ�
//	      //������arr ���� ��Ԫ�ص�ַ&arr[0] ������������1.sizeof(arr) 2.&������/&arr ����ĵ�ַ         
//		  //������arr����  ʵ�ʴ��ݵ���arr��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}