#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
	int i = 0;
	char password[20] = {0};// 不给20，会出现问题，好像是数据存在溢出
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:\n");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)//因为== 不能用来判断字符串相等
		{
			printf("密码正确\n");
			system("cls");
			printf("登录成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (3 == i)
		printf("三次密码错误，退出程序\n");
	return 0;
}




//int main()
//{                                   //4.从屏幕两端向中间输出
//	//welcome to new world!!!!!!
//	//#########################
//	//w#######################!
//	//we#####################!!
//	//wel###################!!!
//	char arr1[] = "welcome to new world!!!!!";
//	char arr2[] = "#########################";
//	int left = 0;
//	//  right=sizeof(arr）/sizeof(arr[0])-2; 因为输入的是字符串，结尾隐藏着 '\n',再加上下标-1，所有-2；
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //休息1秒，ms单位
//		system("cls");//系统命令-cls-清空屏幕
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}