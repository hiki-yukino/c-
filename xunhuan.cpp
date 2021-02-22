#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// while循环有点问题  for 更实用 因为三个条件/初始化 判断 调整都在一个括号里
//for循环 内部不要改变变量  尽量采取前闭后开区间，<n ,这个n可能具有一定实际意义
//注意== 与 = 在判断部分的区别
//do while  先循环 再判断

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')//输出数字
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//printf("%d",'\n');输出结果为10 说明回车空格 ASCCI码值为10
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>\n");
//	scanf("%s", password);  //123456 scanf函数 没有读取\n回车
//	//当密码为"12345 ABCD ",这个密码有两个回车，以此类推，设置个循环getchar 读取所有回车，直到接受字符
//	printf("请确认密码(Y/N):>\n");// getchar 确读取了\n
//	//灾设置一个getchar 读走\n 就可以接收Y/N;
//	
//	//ret = getchar();//读走空格
//	while (ch=getchar()!='\n')
//	{
//		;
//	}
//
//	ret = getchar();//Y/N  
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}