#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch = 0;
	//int ch=getchar
	//putchar()=printf（"%s",ch）
	//ctrl+z
	//EOF--end of file
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		
	}
	return 0;
 }
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (50 == i)
//			continue;//输出到49后 终止本次循环  然后向上返回while  陷入死循环
//		printf("%d\n", i);
//		i++;
//	}//表达式为假/0时，才停止循环
//	return 0;
//}

//int main()
//{   
//	int i = 0;
//	while (i<=100)
//	{
//		if (50 == i)
//			break;//跳出循环
//		printf("%d\n", i);
//		i++;
//	}//表达式为假/0时，才停止循环
//	return 0;
//}