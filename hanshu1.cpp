#define CRT_SERURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

void Add(int* p)
{
	(*p)++;    //*p++;//��Ϊ++���ȼ�����*
}
int main()
{              //дһ������ ÿ�ε��� num��һ
	int num = 0;
	Add(&num);
	printf("%d\n", num);


	return 0;
}


//int binary_search(int arr[], int k,int sz)
//{
//	//int sz = sizeof(arr[0]);  �����������󳤶�
//	int left = 0;
//	int right = sz - 1;
//	//int mid = (left + right) / 2;//  �����ÿ��ѭ�������� ����Ӧ����ѭ����
//	while (left <=right)      //һ����<=
//	{   
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//			
//		}
//		else if(arr[mid]>k)
//			(right = mid - 1);
//		else
//			return mid;
//	}
//}
//
//int main()
//{      //дһ�����ֲ��Һ���
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 4;
//	int sz = sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//		printf("�ҵ��ˣ��±꣺%d\n", ret);
//
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{          //�ж�һ���Ƿ�Ϊ����
//	int year = 0;
//	scanf_s("%d", &year);
//	if(1==is_leap_year(year))
//	printf("%d������\n", year);
//
//	return 0;
//}


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n - 1; j++)//j<=sqrt(n)
//	{
//			if((n%j)==0)    //if ((n / j) == 0)  /  ���������������Ϊ0 .����������
//			return 0;
//			//break;  ������ return����ֱ�ӽ���
//		
//	
//	}
//	return 1;
//}
//int main()
//{                      //дһ�������ж�����
//	int i= 0;
//	scanf_s("%d",&i);
//	if (is_prime(i) == 1)
//	printf("%d������\n", i);
//	else
//		printf("%d��������\n", i);
//	return 0;
//}

//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	    //int* pa = &a;
//	    //*pa = 20;// ��ָ�����������
//	printf("%d %d\n", a, b);
//	swap2(&a, &b);          //����ַ���� �β�Ӱ�쵽ֱ�Ӹı�ʵ��
//	printf("%d %d\n", a, b);
//
//	return 0;
//}                             //ȡ�����Ƿ�ı亯���ⲿ����

//void swap1(int x,int y)
//{    
//	int tmp = 0;
//	 tmp = x;
//	 x = y;
//	 y = tmp;               �˷����� x,y��a,bû�н�����ϵ  ����NO
//}
//int main()
//{       //дһ�����������������ͱ���
//	int a = 0;
//	int b = 10;
//	printf("%d %d\n", a, b);
//	swap1(a, b);       //��ֵ����  �����βθı䲢û��Ӱ�쵽ʵ�� ���Բ��ɹ�
//	printf("%d %d\n", a, b);
//	return 0;
//}


//int getmax(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	    return y;
//}
//int main()
//{                 //�Զ��庯�� ������ �������ͷ������� ����
//	int a = 0;
//	int b =10;
//	int max=getmax(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{         //memset-memory/�ڴ�-set/����
//	char p[] = "hello world!";
//
//	memset(p,'*',5);//memset(p,int value,num)
//	printf("%s\n", p);
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;            //�⺯��  �Զ��庯��
//	z = x + y;          //MSDN  cppreference.com
//	return z;          //www.cplusplus.com  �鿴�ĵ� �˽�C.library
	                    //strlen-string length //strcpy  
//}
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}