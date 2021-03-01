#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{


	return 0;
}


//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i <3 ; i++)
//	{
//		int j = 0;
//		for (j = 0; j <4 ; j++)
//		{
//			printf("&arr[%d][%d] =%p\n", i, j, &arr[i][j]);
//		}
//	}printf("\n");
//	   /* &arr[0][0] = 008FFE58
//		& arr[0][1] = 008FFE5C
//		& arr[0][2] = 008FFE60
//		& arr[0][3] = 008FFE64
//		& arr[1][0] = 008FFE68          二维数组也是连续存放
//		& arr[1][1] = 008FFE6C
//		& arr[1][2] = 008FFE70
//		& arr[1][3] = 008FFE74
//		& arr[2][0] = 008FFE78
//		& arr[2][1] = 008FFE7C
//		& arr[2][2] = 008FFE80
//		& arr[2][3] = 008FFE84*/
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = {1,2,3,4,5};   //3行4列
//	int arr2[3][4] = { {1,2,3},{4,5} };
//	//int arr[][] = { 1,2,3,4,5,6,7,8 };
//	//int arr[][4]={{1,2,3,4},{5,6,7,8}}
//	// 列不能省略 行可以省略
//	char ch[5][6];
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p",i,&arr[i]);//printf("%p\n",&arr[i]);
//	}
//	//17824412
//	//17824416
//	//17824420      整型 4个字节 连续存放
//	//17824424
//    //17824428
//	//17824432
//	//17824436
//	return 0;
//}



//int main()
//{
//	char arr[] = "abcdef";// a b c d e f '\0'
//
//	//printf("%c\0", arr[3]);
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)//int sz=sizeof(arr)/sizeof（arr[0])
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //随机值
//	return 0;
//}

//int main()
//{               //创建一个数组--存放类型--10个
//	int arr[10];        //初始化可不完全 默认为0
//	char arr2[5];        //剩下的为0 0 0
//	//int n=5;
//	//char ch[n];n是个变量   []里只能是常量
//	char arr3[5] = { 'a','b' }; // 只有a b 两个字符
//	char arr4[5] = "ab";//a b \n 三个字符
//	char arr5[] = "abcdef";
//	printf("%d\n", sizeof(arr5));//7   求所占空间大小 单位是字节
//	printf("%d\n", strlen(arr5));//6   求字符串长度 不包括'\0' 两者没有关系
//	return 0;
//
//}