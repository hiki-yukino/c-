#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp
 int main()
{
	char intput[20]= { 0 };//��������
	//�ػ�
	//system()-ִ��ϵͳ����
	system("shutdown -s -t 60");//�ػ�
again:	
	printf("��ע�⣬ ��ĵ��Խ���һ�����ڹػ������룺���Ǵ��У���ȡ���ػ�\n");
	scanf("%s",intput);
	if (strcmp(intput,"���Ǵ���")==0)
	 {
	   system("shutdown -a"); 
	 }
	else
	{
		goto again;
	}
	 
	return 0;
 } 
