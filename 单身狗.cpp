#include<stdio.h>
#include<limits.h> 


int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4,5,7,4};
	//找出单身狗
	//暴力求解法
	//^  算法 
	//1^2^1^2^3^3^5=5 
	int i=0;
	int ret=0; 
	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组 元素个数
	for (i=0;i<sz;i++)
	{
	     ret=ret^arr[i];

		   }
	    printf("单身狗:%d\n",ret);//   3
	 
	
	 
	return 0;
 } 


//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4,5,7};
//	//找出单身狗
//	//暴力求解法
//	//^  算法 
//	//1^2^1^2^3^3^5=5 
//	int i=0;
//	int ret=0; 
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组 元素个数
//	for (i=0;i<sz;i++)
//	{
//	     ret=ret^arr[i];
//
//		   }
//	    printf("单身狗:%d\n",ret);//   7
//	 
//	
//	 
//	return 0;
// } 



//5^5----0
//3^3-----0
//3^5^3----5
//3^3^5-----5  ^运算满足交换律 
//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4,5,7,4};
//	//找出单身狗
//	//暴力求解法
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//计算数组 元素个数
//	for (i=0;i<sz;i++)
//	{
//	      //计算arr[i]出现的次数
//		  int count=0;
//		  int j=0;
//		  for(j=0;j<sz;j++)
//		  {   
//		     if(arr[i]==arr[j])
//		     {
//		     	 count++;
//			 }
//		   } 
//		   if (count==1)
//		   {
//		     printf("单身狗:%d\n",arr[i]);
//			 break; 
//		   }
//		
//	 } 
//	
//	 
//	return 0;
// } 
