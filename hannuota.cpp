#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

static int count = 0;
void move(char getone, char putone) {

    count++;                         //盘子的移动次数  从getone 到 putone
    printf("%c-->%c\n", getone, putone); //  打印每次移动盘子的动作
}

void hanoit(int n, char a, char b, char c) {
    if (n == 1)
    {
        move(a, c);                         //只需移动一次
    }
    else
    {
        hanoit(n - 1, a, c, b);            //始终让空柱子为最后的目标柱子
        printf("count :%d\n", count);      // 打印从n、n-1、n-2....2每次的移动次数
        move(a, c);                        //  打印每次移动盘子的动作
        hanoit(n - 1, b, a, c);           //让下一级的三个柱子上依旧按顺序分布 2（剩下的一所有） 1/代表最上层的那个盘子 0/目标柱子 回到最初
    }

}

int main() {
   
    int m;

    scanf_s("%d", &m);
    hanoit(m, 'A', 'B', 'C');
    printf("count :%d", count);

    //system("pause");
    return 0;
}


//void move(char getone, char putone) {
//	printf("%c-->%c\n", getone, putone);
//}
//
//void hanoit(int n, char a, char b, char c) {
//	if (n == 1) {
//		move(a, c);
//	}
//	else {
//		hanoit(n - 1, a, c, b);
//		move(a, c);
//		hanoit(n - 1, b, a, c);
//	}
//
//}
//
//int main() {
//	int m;
//
//	scanf_s("%d", &m);
//	hanoit(m, 'A', 'B', 'C');
//
//	system("pause");
//	return 0;
//}



//int hannuota(int n)
//{
//	int count = 0;
//	int a = n;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	if (n==1)
//	{
//		
//		return 1;
//	}
//	else
//	{
//		for (i = n; i>=2; i--)
//		{
//			hannuota(n-1);
//         
//		
//		}
//		return hannuota(n);
//	}
//}
//
//
//int main()
//{                  //汉诺塔问题 递归求解
//	               n个盘子 3个柱子 
//	               最下层+n-1 
//	               1+1+n-2
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//	
//	ret=hannuota(n);
//
//	printf("%d\n",ret);
//
//	return 0;
//}