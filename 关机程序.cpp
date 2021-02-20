#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
 int main()
{
	char intput[20]= { 0 };//存贮数据
	//关机
	//system()-执行系统命令
	system("shutdown -s -t 60");//关机
again:	
	printf("请注意， 你的电脑将在一分钟内关机，输入：我是大佬，就取消关机\n");
	scanf("%s",intput);
	if (strcmp(intput,"我是大佬")==0)
	 {
	   system("shutdown -a"); 
	 }
	else
	{
		goto again;
	}
	 
	return 0;
 } 
