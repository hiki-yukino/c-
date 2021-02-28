#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

static int count = 0;
void move(char getone, char putone) {

    count++;                         //���ӵ��ƶ�����  ��getone �� putone
    printf("%c-->%c\n", getone, putone); //  ��ӡÿ���ƶ����ӵĶ���
}

void hanoit(int n, char a, char b, char c) {
    if (n == 1)
    {
        move(a, c);                         //ֻ���ƶ�һ��
    }
    else
    {
        hanoit(n - 1, a, c, b);            //ʼ���ÿ�����Ϊ����Ŀ������
        printf("count :%d\n", count);      // ��ӡ��n��n-1��n-2....2ÿ�ε��ƶ�����
        move(a, c);                        //  ��ӡÿ���ƶ����ӵĶ���
        hanoit(n - 1, b, a, c);           //����һ�����������������ɰ�˳��ֲ� 2��ʣ�µ�һ���У� 1/�������ϲ���Ǹ����� 0/Ŀ������ �ص����
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
//{                  //��ŵ������ �ݹ����
//	               n������ 3������ 
//	               ���²�+n-1 
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