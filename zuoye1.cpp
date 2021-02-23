#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{                 //打印素数
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{                        //j++用j+2代替，100->101
		//判断是否为素数
	     //1.试除法 产生2->i-1  最差算法
		//  2.sqrt(i)/i/2
		//  3.排除偶数的i       素数求解的N种境界
		int j = 0;
		for (j = 2; j <= sqrt(i);j++)  //math.h               //for (j = 0; j < i; j++)
		{             //sqrt(i)可用i/2代替
			        
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
//{                    //打印闰年 1000-2000年
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//闰年是4的倍数并且不能被100整除
//		//能被400整除
//		if (0 == year % 400||year%4==0&&year%100!=0)
//		{
//			printf("%d", year);
//			count++;
//		}
//	
//	}
//	printf("一共有%d个闰年\n", count);
//	return 0;
//}

//int main()
//{                      //求最大公约数，给定两数
//	int a = 0;        //辗转相除法
//	int b = 0;
//	int r = 0;
//	scanf("%d %d", &a, &b);
//	while (a % b)     //()里可用等式r=a%b代替 简化代码
//	{
//		r = a% b;
//		a = b;
//		b = r;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{                    //输出3的倍数，100
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
//{          //比较三个数的大小并输出
//	int a = 0;
//	int b = 0;
//	int c = 0;//固定a为最大值，c最小
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