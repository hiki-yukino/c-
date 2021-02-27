#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//递归经典题目
//1.汉诺塔问题  2.青蛙跳台阶  要跳到第n个台阶，一共有几种跳法《剑指offer》67道题目

//void test(int n)
//{
//    if (n < 10000)
//    {
//        test(n+1);            //即使递归有限定条件也容易栈溢出
//    }
//}
//
//int main()
//{
//    test(1);
//    return 0;
//}

//int fib3(int n)
//{
//	int a = 1;                    //此时 循环快于递归 求斐波那契数
                                  // 当两种都行时 要考虑操作性 效率性 写起来是否容易
//	int b = 1;
//	int c = 0;
//
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	ret = fib3(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int count = 0;
//int fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <=2)
//		return 1;
//	else
//		return fib(n - 1)+fib(n - 2);
//}

//int main()
//{                              //求第n个斐波那契数 1 1 2 3 5 8前两个数之和等于第三个数
//	                           //fib(n)=fib(n-1)*(n-2)
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//
//	ret = fib(n);
//	printf("%d\n", ret);  // n=40时
//	printf("%d\n", count);//第三个数计算的次数 39088169
//	return 0;
//}

//int f2(int n)
//{                      //递归方式
//
//	if (n > 1)
//	{
//		return n * f2(n - 1);
//	}
//	else
//		return 1;
//}
////
////int f1(int n)
////{                     //  循环的方式
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//int main()
//{            //求n的阶乘   不考虑溢出
//	int n = 0;
//	int ret = 1;
//	scanf_s("%d", &n);
//	ret=f2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int my_strlen(char* str)
//{
//	                          //int count = 0;//创了临时变量
//	                           // while(*str!='\0')
//	if (*str != '\0')	              // {
//		return 1 + my_strlen(str + 1);	     //  count++;
//	else 		                         //  str++;
//			return 0;                            // }
//	                               //  return count;
//}
//int main()
//{                                                 //不允许建立临时变量，求字符串长度
//	char arr[] = "hello world";//注意\0
//	/*int len = strlen(arr);
//	printf("%d\n", len);*/
//
//	int len = my_strlen(arr);
//
//	printf("len=%d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)  //将两位以上的数经过多次调用 转化成一位 并在过程中每次打印
//	{           // 一定要有条件  1限制条件if 和2.print（限制条件）
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//注意打印空格
//}
//
//int main()
//{            // 接受一个整型无符号，按照顺序打印他的每一位
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1234  %10  4 %10 3  %10 2
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//
//	return 0;
//}


//int main()
//{            //史上最简单的递归
//	printf("hehe\n");  //递归容易出现的问题  Stack overflow栈溢出
//	main();      //内存: 栈区  局部变量、函数形参
//	             //     堆区 动态开辟的内存 malloc、calloc分配
//	            //     静态区  全局变量 static修饰的变量
//	              //Stackoverflow.com 程序员的知乎 全球
//	return 0;
//}


//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43))); // 43 3 2 printf返回值 是打印字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));     // 4321  因为没有\n 少了个符号
//	return 0;
//}