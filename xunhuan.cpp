#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// whileѭ���е�����  for ��ʵ�� ��Ϊ��������/��ʼ�� �ж� ��������һ��������
//forѭ�� �ڲ���Ҫ�ı����  ������ȡǰ�պ����䣬<n ,���n���ܾ���һ��ʵ������
//ע��== �� = ���жϲ��ֵ�����
//do while  ��ѭ�� ���ж�

//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')//�������
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//printf("%d",'\n');������Ϊ10 ˵���س��ո� ASCCI��ֵΪ10
//
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("����������:>\n");
//	scanf("%s", password);  //123456 scanf���� û�ж�ȡ\n�س�
//	//������Ϊ"12345 ABCD ",��������������س����Դ����ƣ����ø�ѭ��getchar ��ȡ���лس���ֱ�������ַ�
//	printf("��ȷ������(Y/N):>\n");// getchar ȷ��ȡ��\n
//	//������һ��getchar ����\n �Ϳ��Խ���Y/N;
//	
//	//ret = getchar();//���߿ո�
//	while (ch=getchar()!='\n')
//	{
//		;
//	}
//
//	ret = getchar();//Y/N  
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}