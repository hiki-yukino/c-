#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//�ݹ龭����Ŀ
//1.��ŵ������  2.������̨��  Ҫ������n��̨�ף�һ���м�����������ָoffer��67����Ŀ

//void test(int n)
//{
//    if (n < 10000)
//    {
//        test(n+1);            //��ʹ�ݹ����޶�����Ҳ����ջ���
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
//	int a = 1;                    //��ʱ ѭ�����ڵݹ� ��쳲�������
                                  // �����ֶ���ʱ Ҫ���ǲ����� Ч���� д�����Ƿ�����
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
//{                              //���n��쳲������� 1 1 2 3 5 8ǰ������֮�͵��ڵ�������
//	                           //fib(n)=fib(n-1)*(n-2)
//	int n = 0;
//	int ret = 0;
//	scanf_s("%d", &n);
//
//	ret = fib(n);
//	printf("%d\n", ret);  // n=40ʱ
//	printf("%d\n", count);//������������Ĵ��� 39088169
//	return 0;
//}

//int f2(int n)
//{                      //�ݹ鷽ʽ
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
////{                     //  ѭ���ķ�ʽ
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret *= i;
////	}
////	return ret;
////}
//int main()
//{            //��n�Ľ׳�   ���������
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
//	                          //int count = 0;//������ʱ����
//	                           // while(*str!='\0')
//	if (*str != '\0')	              // {
//		return 1 + my_strlen(str + 1);	     //  count++;
//	else 		                         //  str++;
//			return 0;                            // }
//	                               //  return count;
//}
//int main()
//{                                                 //����������ʱ���������ַ�������
//	char arr[] = "hello world";//ע��\0
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
//	if (n > 9)  //����λ���ϵ���������ε��� ת����һλ ���ڹ�����ÿ�δ�ӡ
//	{           // һ��Ҫ������  1��������if ��2.print������������
//		print(n / 10);
//	}
//	printf("%d ", n % 10);//ע���ӡ�ո�
//}
//
//int main()
//{            // ����һ�������޷��ţ�����˳���ӡ����ÿһλ
//	unsigned int num = 0;
//	scanf_s("%d", &num);//1234  %10  4 %10 3  %10 2
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//
//	return 0;
//}


//int main()
//{            //ʷ����򵥵ĵݹ�
//	printf("hehe\n");  //�ݹ����׳��ֵ�����  Stack overflowջ���
//	main();      //�ڴ�: ջ��  �ֲ������������β�
//	             //     ���� ��̬���ٵ��ڴ� malloc��calloc����
//	            //     ��̬��  ȫ�ֱ��� static���εı���
//	              //Stackoverflow.com ����Ա��֪�� ȫ��
//	return 0;
//}


//int main()
//{
//	printf("%d\n", printf("%d\n", printf("%d\n", 43))); // 43 3 2 printf����ֵ �Ǵ�ӡ�ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));     // 4321  ��Ϊû��\n ���˸�����
//	return 0;
//}