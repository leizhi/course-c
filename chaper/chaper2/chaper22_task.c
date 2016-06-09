/*
*Copyright (C),Bunfly Tech. Co.Ltd.
*介绍:邦飞科技 chaper2_task
*日期:2016/04/25
*作者:雷智 leizhifesker@icloud.com
*/

#include <string.h> //引入字符串操作库
#include <stdio.h> //引入输入输出标准库

//习题1
int task1(){
	int x=7;
	int i=0;//计数
	
    //可改成for
	while(1){

        //printf("continue i:%d x:%d\n",i,x);

        if((x%7==0) && (x%6==5) && (x%4==3) && (x%5==4) && (x%3==2) && (x%2==1)){
            //printf("x min value:%d\n",x);
            break;
            //return x;
        }
        //x++; //效率偏低 每次增加1
        x = x+7;//效率偏高  每次增加7
        
	    i++;//计数加1
	}
/*
    //for
	for(i=0;;){

        //printf("continue i:%d x:%d\n",i,x);

        if((x%7==0) && (x%6==5) && (x%4==3) && (x%5==4) && (x%3==2) && (x%2==1)){
            //printf("x min value:%d\n",x);
            break;
            //return x;
        }
        //x++; //效率偏低 每次增加1
        x = x+7;//效率偏高  每次增加7
        
	    i++;//计数加1
	}
*/
/*
    //for
	for(i=0;;i++){

        //printf("continue i:%d x:%d\n",i,x);

        if((x%7==0) && (x%6==5) && (x%4==3) && (x%5==4) && (x%3==2) && (x%2==1)){
            //printf("x min value:%d\n",x);
            break;
            //return x;
        }
        //x++; //效率偏低 每次增加1
        x = x+7;//效率偏高  每次增加7
        
	    //i++;//计数加1
	}
*/		
	return x;
}

//习题2
//输入参数1 x
//输入参数2 y
//输入参数3 0/1 代表最大公约数或者最小公倍数
int task2(int x,int y,int max_min){

	int i=0;//计数

    //相等 最大公约数和最大公被数都是本身 并返回
    if(x==y) return x;
    
	//交换大小
    int a = 0;
    if(y>x){
       a = x;
       x = y;
       y = a;
    }

    //then x > y
    switch(max_min){
        case 0:
                a = y;
                //可改成for
	            while(1){

                    //printf("continue i:%d a:%d\n",i,a);

                    if((y%a==0) && (x%a==0) ){
                        //printf("x and y at max value:%d\n",a);
                        return a;
                    }
                  a--;//减1
                    
	             i++;//计数加1
	            }
            break;
        default:
	        a = x;
            //可改成for
	        while(1){

                //printf("continue i:%d a:%d\n",i,a);

                if((a%x==0) && (a%y==0) ){
                    //printf("x and y at min value:%d\n",a);
                    return a;
                }
                a += x;//减1
                
	            i++;//计数加1
	        }
	        break;      
    }
	return a;
}

//习题3
//前n项目的和
//改成公式 Sn=(A0+An)*n/2
int task3(int minv,int maxv){
    int i;
    int sum=0;
    for(i=minv;i<maxv+1;i++){
        sum += i;
    }
    //sum = (minv+maxv)*(maxv-minv+1)/2;
    //printf("Sn:%d\n",sum);
    return sum;
}

int main() {//C语言的主函数又称入口函数 任何一个c程序 有且只能一个[更准确的说法是一个进程只能有且只能有一个主函数 ]
	printf("WELCOM TO Embedded Develop Course Chaper2\n"); //打印10进制的数
	
	printf("task1:\t%d\n",task1()); //打印10进制的数
	printf("task2:\t%d\n",task2(4,6,1)); //打印10进制的数
	printf("task3:\t%d\n",task3(1,100)); //打印10进制的数
}
