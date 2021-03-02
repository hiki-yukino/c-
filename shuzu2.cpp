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
//		int flag = 1;    //假设这一趟排序的每对排序都已经有序了
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp =  arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;     //本趟数据不完全有序
//			}
//
//		}
//		if (flag == 1)   //提高效率  优化
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] ={ 9,8,7,6,5,4,3,2,1,0 };//冒泡排序 降序 升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_aort(arr,sz); //9个元素 需要8趟冒泡排序 每趟需要8-i （i=0；i++）对比较
//	      //数组名arr 就是 首元素地址&arr[0] 但有两个例外1.sizeof(arr) 2.&数组名/&arr 数组的地址         
//		  //对数组arr传参  实际传递的是arr首元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}