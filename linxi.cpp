#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>


int main()
{
	int i = 0;
	char password[20] = {0};// ����20����������⣬���������ݴ������
	for (i = 0; i < 3; i++)
	{
		printf("����������:\n");
		scanf("%s", password);
		if (strcmp(password, "123456")==0)//��Ϊ== ���������ж��ַ������
		{
			printf("������ȷ\n");
			system("cls");
			printf("��¼�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (3 == i)
		printf("������������˳�����\n");
	return 0;
}




//int main()
//{                                   //4.����Ļ�������м����
//	//welcome to new world!!!!!!
//	//#########################
//	//w#######################!
//	//we#####################!!
//	//wel###################!!!
//	char arr1[] = "welcome to new world!!!!!";
//	char arr2[] = "#########################";
//	int left = 0;
//	//  right=sizeof(arr��/sizeof(arr[0])-2; ��Ϊ��������ַ�������β������ '\n',�ټ����±�-1������-2��
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000); //��Ϣ1�룬ms��λ
//		system("cls");//ϵͳ����-cls-�����Ļ
//		left++;
//		right--;
//
//	}
//	printf("%s\n", arr2);
//	return 0;
//}