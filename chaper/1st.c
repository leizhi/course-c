/*
*Copyright (C),Bunfly Tech. Co.Ltd.
*介绍:邦飞科技 chaper2_task
*日期:2016/04/25
*作者:雷智 leizhifesker@icloud.com
*/

#include <string.h> //引入字符串操作库
#include <stdio.h> //引入输入输出标准库

static int gint = 100;

long lint =200;

const int gcint = 5566;

int sum(int a,int b)
{
	printf("a:%p\nb:%p\nsum:%p\n",&a,&b,&sum);
	return a+b;
}

int main() {//C语言的主函数又称入口函数 任何一个c程序 有且只能一个[更准确的说法是一个进程只能有且只能有一个主函数 ]
	printf("WELCOM TO Embedded Develop Course Chaper2\n"); //打印10进制的数
	int k=8;
	static int mk =67;
	const int cint = 30;

	char ch[4];

	int (*p)(int,int);
	p = sum;
	int (*p1)();
	p1 = main;
	
	p(1,2);
	printf("cint:%p\n",&cint);
	printf("p+1:%p\n",*(&p+3));
	printf("gcint:%p\n",&gcint);
	printf("p:%p\n&p:%p\nmain:%p\ngint:%p\nlint:%p\nk:%p\nmk:%p\nch%p\n",p,&p,p1,&gint,&lint,&k,&mk,ch); //打印10进制的数
}
