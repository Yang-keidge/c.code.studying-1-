#define _CRT_SECURE_NO_WARNINGS 

//����һ����stdio.h���ļ�
//std i o --��׼������� standard input output
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

//char-�ַ�����                                                  
//int main()
//{
//	char ch = 'A';
//	printf("%c\n", ch); // %c --��ӡ�ַ���ʽ������
//	int age = 20;
//	printf("%d\n",age);  // %d--��ӡ������ʮ��������
//	return 0;
//}

  //int main() //������-��������-main�������ҽ���һ��
  //{
	 //  //�����������
	 //  //����Ļ����� hello world
	 //  //����- print function - printf -��ӡ����
	 //  //�⺯��-C���Ա����ṩ������ʹ�õ�
	 //  //���˵Ķ���-���к�-include
  //  printf("hello world\n");
	 // return 0;
  // }

//int�����͵���˼
//mainǰ���int��ʾmain��������֮�󷵻�һ������ֵ
//int main()
//{
//
//   return 0;���� 0--����int��main��һ�����
//}