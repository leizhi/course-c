#include <stdio.h>
#include <stdlib.h>
//全局变量
int s1=100;
static double d1=5.8; //全局静态变量
const int ci = 1024; //常量 全局的
int main(){
	//注释 语句语法就是定义好了的规则 不能改变
	//局部变量
	unsigned int i;
	int iarray[] = {3,2,3};
	long l1;
	long long ll1;
	float f1;
	double d1;
	char c1;
	char ca[]={'a','b','c'};
	char caa[2][2]={{'a','b'},{'c','d'}};
	int iaa[2][2];
	
	static int k=100; //局部静态变量 函数退出后静态区区的变量不回收
	const float f2=4.78;//局部常量

	printf("i 的值:%d i 的地址:%p\n",i,&i);
	printf("ca 的值:%c i 的地址:%p\n",*ca,ca);
	printf("caa 的值:%c i 的地址:%p\n",*(*(caa+0)+0),caa);

	printf("caa 的值:%c i 的地址:%p\n",*(*(caa+0)+1),*(caa+0)+1);
	printf("caa 的值:%c i 的地址:%p\n",*(*(caa+1)+0),*(caa+1)+0);


	printf("caa 的值:%c i 的地址:%p\n",caa[0][1],&caa[0][1]);
	printf("caa 的值:%c i 的地址:%p\n",caa[1][0],&caa[1][0]);
	
	printf("&main:%p\n",main);
	printf("&f2:%p\n",&f2);
	printf("&ci:%p\n",&ci);
	printf("&d1:%p\n",&d1);
	printf("&k:%p\n",&k);
	printf("&s1:%p\n",&s1);

}
