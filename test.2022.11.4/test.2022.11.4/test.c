#define _CRT_SECURE_NO_WARNINGS 

//包含一个叫stdio.h的文件
//std i o --标准输入输出 standard input output
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d%d",&num1,&num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}

//char-字符类型                                                  
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch); // %c --打印字符格式的数据
//	int age = 20;
//	printf("%d\n",age);  // %d--打印整数型十进制数据
//	return 0;
//}

  //int main() //主函数-程序的入口-main函数有且仅有一个
  //{
	 //  //这里完成任务
	 //  //在屏幕上输出 hello world
	 //  //函数- print function - printf -打印函数
	 //  //库函数-C语言本身提供给我们使用的
	 //  //别人的东西-打招呼-include
  //  printf("hello world\n");
	 // return 0;
  // }

//int是整型的意思
//main前面的int表示main函数调用之后返回一个整型值
//int main()
//{
//
//   return 0;返回 0--这里int和main是一个组合
//}