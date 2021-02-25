#define CRT_SERURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void Add(int* p)
{
	(*p)++;    //*p++;//因为++优先级高于*
}
int main()
{              //写一个函数 每次调用 num加一
	int num = 0;
	Add(&num);
	printf("%d\n", num);


	return 0;
}


//int binary_search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr[0]);  不能在这里求长度
//	int left = 0;
//	int right = sz - 1;
//	//int mid = (left + right) / 2;//  这语句每次循环都参与 所以应该在循环中
//	while (left <=right)      //一定是<=
//	{   
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//			
//		}
//		else if(arr[mid]>k)
//			(right = mid - 1);
//		else
//			return mid;
//	}
//}
//
//int main()
//{      //写一个二分查找函数
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 4;
//	int sz = sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//		printf("找到了，下标：%d\n", ret);
//
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{          //判断一年是否为闰年
//	int year = 0;
//	scanf_s("%d", &year);
//	if(1==is_leap_year(year))
//	printf("%d是闰年\n", year);
//
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n - 1; j++)//j<=sqrt(n)
//	{
//			if((n%j)==0)    //if ((n / j) == 0)  /  求的是余数不可能为0 .。。。。。
//			return 0;
//			//break;  多余了 return返回直接结束
//		
//	
//	}
//	return 1;
//}
//int main()
//{                      //写一个函数判断素数
//	int i= 0;
//	scanf_s("%d",&i);
//	if (is_prime(i) == 1)
//	printf("%d是素数\n", i);
//	else
//		printf("%d不是素数\n", i);
//	return 0;
//}

//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	    //int* pa = &a;
//	    //*pa = 20;// 用指针变量来操作
//	printf("%d %d\n", a, b);
//	swap2(&a, &b);          //传地址调用 形参影响到直接改变实参
//	printf("%d %d\n", a, b);
//
//	return 0;
//}                             //取决于是否改变函数外部变量

//void swap1(int x,int y)
//{    
//	int tmp = 0;
//	 tmp = x;
//	 x = y;
//	 y = tmp;               此方法中 x,y与a,b没有建立关系  不行NO
//}
//int main()
//{       //写一个函数交换两个整型变量
//	int a = 0;
//	int b = 10;
//	printf("%d %d\n", a, b);
//	swap1(a, b);       //传值调用  所以形参改变并没有影响到实参 所以不成功
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	    return y;
//}
//int main()
//{                 //自定义函数 函数名 参数类型返回类型 参数
//	int a = 0;
//	int b =10;
//	int max=getmax(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{         //memset-memory/内存-set/设置
//	char p[] = "hello world!";
//
//	memset(p,'*',5);//memset(p,int value,num)
//	printf("%s\n", p);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;            //库函数  自定义函数
//	z = x + y;          //MSDN  cppreference.com
//	return z;          //www.cplusplus.com  查看文档 了解C.library
	                    //strlen-string length //strcpy  
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}