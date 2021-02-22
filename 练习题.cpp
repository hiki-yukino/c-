#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>

int main()
{             //  3.在一个  有序数组  中查找某个具体数字n，编写int binsearch(int x,int v[],int n);
	      //功能：在v[0]<=v[1]<=....v[n-1]的数组中查找x
	
	int v[] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
		int x = 4;

		int sz = sizeof(v) / sizeof(v[0]);
		int left = 0;//左下标
		int right = 11;//右下标
             //for (j = n-1; j >0; j--)
		     //{
		     //	if (x == v[j])             思路有问题
             //printf("n=%d", j);
		    //	break;
		       //}*/     
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (v[mid]>x)
			{
				right = mid - 1;
			}
			else if (v[mid] < x)
				left = mid+1;
			else
			{
				printf("找到了，下标是：%d\n", mid);
				break;
			}
		}
	return 0;
}




//int main()
//{             //           2.计算1-10的阶乘之和
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}
//	printf("sum=%d", sum);//sum=4037913
//
//	return 0;
//}




//int main()
//{
//	int i = 0;//               1.求n的阶乘
//	long long ret= 1;
//	int n = 0;
//	scanf("%d", &n);//100  太大了
//	for (i = 1; i <= n; i++)
//		ret = ret*i;
//	printf("ret=%lld\n", ret);//%d 数据溢出
//	return 0;
//}