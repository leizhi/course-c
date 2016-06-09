/*
*Copyright (C),Bunfly Tech. Co.Ltd.
*介绍:邦飞科技 chaper2_task
*日期:2016/04/25
*作者:雷智 leizhifesker@icloud.com
*/

#include <string.h> //引入字符串操作库
#include <stdio.h> //引入输入输出标准库
#include <stdlib.h>

void afunc(void)
{
static int long level=0;          //静态数据存储在数据段中
int      stack_var;               //局部变量，存储在栈区
if(++level==5)
{
return;
}
}
