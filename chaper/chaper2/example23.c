/*
*Copyright (C),Bunfly Tech. Co.Ltd.
*介绍:邦飞科技 chaper212 五则运算
*日期:2016/04/21
*作者:雷智 leizhifesker@icloud.com
*/
#include <string.h> //引入字符串操作库
#include <stdio.h> //引入输入输出标准库

//地址与指针操作
int mfun(){
	int a=12,b;
	int *p;
	int **ptr;
	
	p = &a;
	*p=24;
	
	ptr = &p;
	*ptr = &b;
	**ptr = 34;
	
	printf("a values:%d\n",a);
	printf("b values:%d\n",b);
	
	printf("a address is:%p\n",&a);
	printf("b address is:%p\n",&b);
	
	printf("a value is:%d %d\n",*(&a),*p);
	printf("b value is:%d %d\n",*(&b),**ptr);
	
	printf("a address is:%p\n",&(*(&a)));
	printf("a value is:%d\n",*(&(*(&a))));
	
	printf("a value is:0x%08x\n",*(&(*(&a))));
}

int main() {//C语言的主函数又称入口函数 任何一个c程序 有且只能一个[更准确的说法是一个进程只能有且只能有一个主函数 ]
	//申名2个整型的局部变量
	//int前加入 static 的区别?
	//是否int前可加入 extern,加入代表什么意思?
	int a,b;
	a=200;//变量赋值 = 与 ==的区别 初学者注意!
	b=100;
	//printf 为标准输入输出库函数,所有的标准库来自glibc
	//printf 的用法
	//参数为可变参数
	//第0个参数显示控制字符串
	//第1参数开始为可变参数
	printf("a:%d\n",a); //打印10进制的数
	printf("a+b:%d\n",a+b);
	printf("a-b:%d\n",a-b);
	printf("a*b:%d\n",a*b);
	printf("a/b:%d\n",a/b);
	printf("a\%b:%d\n",a%b);
	
	mfun();
}
