#include<stdio.h>
#include<limits.h> 


int main()
{
	int arr[]={1,2,3,4,5,1,2,3,4,5,7,4};
	//�ҳ�����
	//������ⷨ
	//^  �㷨 
	//1^2^1^2^3^3^5=5 
	int i=0;
	int ret=0; 
	int sz=sizeof(arr)/sizeof(arr[0]);//�������� Ԫ�ظ���
	for (i=0;i<sz;i++)
	{
	     ret=ret^arr[i];

		   }
	    printf("����:%d\n",ret);//   3
	 
	
	 
	return 0;
 } 


//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4,5,7};
//	//�ҳ�����
//	//������ⷨ
//	//^  �㷨 
//	//1^2^1^2^3^3^5=5 
//	int i=0;
//	int ret=0; 
//	int sz=sizeof(arr)/sizeof(arr[0]);//�������� Ԫ�ظ���
//	for (i=0;i<sz;i++)
//	{
//	     ret=ret^arr[i];
//
//		   }
//	    printf("����:%d\n",ret);//   7
//	 
//	
//	 
//	return 0;
// } 



//5^5----0
//3^3-----0
//3^5^3----5
//3^3^5-----5  ^�������㽻���� 
//int main()
//{
//	int arr[]={1,2,3,4,5,1,2,3,4,5,7,4};
//	//�ҳ�����
//	//������ⷨ
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);//�������� Ԫ�ظ���
//	for (i=0;i<sz;i++)
//	{
//	      //����arr[i]���ֵĴ���
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
//		     printf("����:%d\n",arr[i]);
//			 break; 
//		   }
//		
//	 } 
//	
//	 
//	return 0;
// } 
