#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ch = 0;
	//int ch=getchar
	//putchar()=printf��"%s",ch��
	//ctrl+z
	//EOF--end of file
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
		
	}
	return 0;
 }
//int main()
//{
//	int i = 0;
//	while (i <= 100)
//	{
//		if (50 == i)
//			continue;//�����49�� ��ֹ����ѭ��  Ȼ�����Ϸ���while  ������ѭ��
//		printf("%d\n", i);
//		i++;
//	}//���ʽΪ��/0ʱ����ֹͣѭ��
//	return 0;
//}

//int main()
//{   
//	int i = 0;
//	while (i<=100)
//	{
//		if (50 == i)
//			break;//����ѭ��
//		printf("%d\n", i);
//		i++;
//	}//���ʽΪ��/0ʱ����ֹͣѭ��
//	return 0;
//}