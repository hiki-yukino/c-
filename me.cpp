#include <stdio.h>
#include<string.h>
#pragma warning(disable:4996)
//结构体-复杂对象
//人--身高-年龄-体重-身份证号
//自己创造的类型

struct Man//一个人
{
	char name[20];//hiki-yukino
	float height;// 身高
	short age;//年龄
	int weight;//体重
//	long ID;//身份证号,数据类型定义错误，应该采取字符串类型
	char ID[40];//身份证号
};

int main()
{
	//;利用结构体-创造一个该类型的变量----我
	struct Man me = { "hiki-yukino",171,22,53,"51302219990103" };
	printf("姓名：%s\n身高:%lf\n年龄:%d\n体重:%d\n身份证号:%s\n", me.name, me.height, me.age, me.weight, me.ID);
	//一年后，age=23
	short age = 23;
	printf("姓名：%s\n身高:%lf\n年龄:%d\n体重:%d\n身份证号:%s\n", me.name, me.height, me.age, me.weight, me.ID);
	;
	//利用pM打印出 我的相关信息
	struct Man* pM = &me;
	printf("\n%s\n", (*pM).name);
	printf("\n%s\n", (*pM).ID);
	printf("\n%s", pM->name);
	printf("%s", pM->ID);
	strcpy(me.name, "yukino");//报错不安全 ，头文件添加#pragma warning(disable:4996)
	printf("\n%s\n", pM->name);

	return 0;
}



//int main()
//{
//	double d = 3.14;
//	double* pd = &d;//32-4  64-8
//	printf("%d\n", sizeof(pd));
//	*pd = 5.4;
//	printf("%lf\n", d);
//	printf("%lf\n", *pd);
//
//	return 0;
//}