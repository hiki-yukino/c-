
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//switch 不安全  ()内必须为整形  case 后也必须为整型常量表达式

//switch  用于多种情况
// 可以出现 default ,break ，但不能出现 continue
//
//case后面不一定用break
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;//最后这个break 加上比较好 便于后期处理
	case 8:
		break;
	default:  //可有可无  位置随意
		printf("输入错误\n");
		break;
	}
	return 0;
}



//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	}
//	return 0;
//}



//int main()
//{
//	//判断一个数是否为奇数；输出1-100内的奇数
//	int a = 0;
//	while (a < 100)// a不能取=100，最后会输出101
//	{
//		printf("%d\n", a);
//		a++;
//}
//	{
//	if (1== a  / 2)
//	{
//		printf("%d是奇数\n", a);
//		
//	}
//		else
//			printf("%d不是奇数\n", a);
//	}
//	return 0;
//}


//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else if ("age>=12&&age<=28")//else if (18 = < age < 28);  写法错误
//	printf("青年\n");
//	else if (age >= 28 && age <= 50)
//		printf("壮年\n");


//	//else  最后这个可有可无
//	 else 与最近的if相匹配
//    注意判断if（）中，一个=与== 区别
//  if(5==num)  比 if(num==5)更好


////// if()
////	else{
////		if()
////		else()
////		}
///      else
//	return 0;
//
//}