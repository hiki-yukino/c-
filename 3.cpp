#include<stdio.h>

int main()
{
	int a=10;
	int*p=&a;
	*p=20;
	printf("%p\n",a);

	char ch='w';
	char* pc=&ch ;
	*pc='a' ;
	printf("%p\n",ch);
	
	return 0;
 } 





//  void test()
//{
//  static	int a=1;//静态局部变量 
//	a++;
//	printf("a=%d\n",a);
//	 
//}
//int main()
//
//{
//    int i=0;
//    while(i<5)
//    {
//    	test();
//    	i++;
//	}
//	
//	return 0;
// } 






//void test()
//{
//	int a=1;
//	a++;
//	printf("a=%d\n",a);
//	 
//}
//int main()
//
//{
//    int i=0;
//    while(i<5)
//    {
//    	test();
//    	i++;
//	}
//	
//	return 0;
// } 



//{
//	int a=10;
//	int b=a++;
//	int c=++a;
//	printf("a=%d b=%d c=%d\n",a,b,c);
//	
//	return 0;
// } 
