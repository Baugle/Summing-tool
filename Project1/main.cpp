/*求和工具：把所有输入的数加在一起*/
#include<stdio.h>

int main(void)
{
	long int fir = 0;   /*输入的数据*/
	long int sec = 0;   /*总和*/
	printf("这是一个求和工具，直接输入数字，按“q”退出！:");
	while (scanf_s("%ld",&fir) == 1)  /*如果继续输入数字则进行循环 （sacnf返回值1或0） */
	{
		sec = fir + sec;
		printf("输入数字，按“q”退出！:");
	}
	printf("和为 “ %ld ”", sec);   /*打印和*/
	getchar();           /*防止一闪而过的问题*/
	return 0;
	/*如需在别的电脑上运行，则需要设置以下内容
	项目→属性→配置属性→高级→MFC的使用→在静态库中使用MFC*/
}
