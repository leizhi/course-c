/*
*Copyright (C),Bunfly Tech. Co.Ltd.
*介绍:邦飞科技 chaper2_task
*日期:2016/04/25
*作者:雷智 leizhifesker@icloud.com
*/

#include <string.h> //引入字符串操作库
#include <stdio.h> //引入输入输出标准库
#include <stdlib.h>

extern void afunc(void);
extern etext,edata,end;

int bss_var;                                //未初始化全局数据存储在BSS区
int data_var=42;                            //初始化全局数据存储在数据区
#define SHW_ADR(ID,I) printf("the %8s\t is at adr:%8x\n",ID,&I); //打印地址宏

int main(int argc,char *argv[])
{
    char *p,*b,*nb;
    printf("Adr etext:%8x\t Adr edata %8x\t Adr end %8x\t\n",&etext,&edata,&end);
    printf("\ntext Location:\n");
    SHW_ADR("main",main);              //查看代码段main函数位置
    SHW_ADR("afunc",afunc);           //查看代码段afunc函数位置
    printf("\nbss Location:\n");
    SHW_ADR("bss_var",bss_var);      //查看BSS段变量位置
    printf("\ndata location:\n");
    SHW_ADR("data_var",data_var);     //查看数据段变量
    printf("\nStack Locations:\n"); 
    afunc();
    p=(char *)alloca(32);              //从栈中分配空间
    if(p!=NULL)
    {
    SHW_ADR("start",p);
    SHW_ADR("end",p+31);
    }
    b=(char *)malloc(32*sizeof(char));   //从堆中分配空间
    nb=(char *)malloc(16*sizeof(char));  //从堆中分配空间
    printf("\nHeap Locations:\n");
    printf("the Heap start: %p\n",b);   //堆起始位置

}
