#define CRT_CURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>
#include<time.h>
#include<math.h>
   //Rand_Max-32767
void game()
{
	         //printf("输错了");判断前面游戏的逻辑      //1.产生随机数
	int ret = 0;
	int guess = 0;
	//时间戳 =当前计算机时间-减去起始时间1970.1.1.0：0：0
              //time_t 长整型	
	ret=rand()%100+1;//产生一个随机数
	                //限定到1-100
	   //printf("%d\n", ret);
	                //2.猜数字  
	while (1)
	{
		printf("请猜数字:\n");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大啦\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对啦\n");
			break;
		}
	}

}

void menu()
{
	printf("*************************\n");
	printf("***1.玩游戏  0.退出游戏****\n");
	printf("**************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));//不能频繁调用 所以放到主函数         //猜数字游戏
	int input = 0;              //电脑跑起来随机输出一个数字，才一个数字比较大小且能多次玩
	do 
	{
		menu();
		printf("请选择：\n");
		scanf_s("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);

	return 0;
}


//int main()
//{                    //屏幕上打印9*9乘法口称表
//	// 行 列 每次打印一行 每次打印++项
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i;j++)//for (j = 1; j < 10; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);// 最后应该打印个空格 是结果分开
//		                                    //%2d打印两位，缺位右对齐，%-2d左对齐
//		}
//		printf("\n");//     每次换行
//	}
//	return 0;
//}

//int main()
//{                       //求10个数的最大值 整数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int max = 0;//max 不能为0  数组中全为负数时。。。
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i<=10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{                //计算1/1-1/2+1/3-1/4....-1/100
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

//int main()
//{                  //输出1-100之间所有带9的数字的总个数
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)//  这里有else if 99会漏掉
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}