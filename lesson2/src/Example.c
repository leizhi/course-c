#include <stdio.h>
#include <stdlib.h>

int main(){
	//注释 语句语法就是定义好了的规则 不能改变
	//
	int i;	
	//循环语句for 方式一
	for(i=0;i<10;i++){
		printf("看看是什么:%d\n",i);
	}

	//循环语句for 方式二
	i=2;
	for(;i<10;i++){
		printf("看看是什么:%d\n",i);
	}

	//循环语句for 方式三
	for(i=0;;i++){
		printf("看看是什么:%d\n",i);
		if(i==5) break;
	}
	//循环语句for 方式四
	for(i=0;i<10;){
		printf("看看是什么:%d\n",i);
		i++;
	}

	i=0;
	while((i++)<10){
		printf("while 看看是什么:%d\n",i);
	}

	do{
		printf("do while 看看是什么:%d\n",i);
	}while(i-->0);

	i=4;

	if(i==i){
		printf("if 1 看看是什么:%d\n",i);
	}

	if(i==i){
		printf("if 2 看看是什么:%d\n",i);
	}

	if(i==i){
		printf("if else if 看看是什么:%d\n",i);
	}else if(i==i){
		printf("if else else 看看是什么:%d\n",i);
	}
	//if1
	if(i==i){
		printf("if1 1 看看是什么:%d\n",i);
	}else{
		printf("if1 2 看看是什么:%d\n",i);
	}
	//if2
	if(i==i){
		printf("if2 1 看看是什么:%d\n",i);
	}else if(i==i){
		printf("if2 2 看看是什么:%d\n",i);
	}else{
		printf("if2 3 看看是什么:%d\n",i);
	}

	switch(i){
		case 1:
			printf("switch 看看是什么:%d\n",i);
		case 2:
			printf("switch 看看是什么:%d\n",i);
		default:
			printf("switch 看看是什么:%d\n",i);
	}
	
}
