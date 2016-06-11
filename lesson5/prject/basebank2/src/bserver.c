#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bserver.h"

int main(){
	//注释 语句语法就是定义好了的规则 不能改变
	//结构类型初始化
	ts_car1 car200 = {
		.id=30,
		.name="长安汽车"
	};	
	//局部变量
	car.id=100;
	
	//char *p = "宾利汽车";
	//strcpy(car.name,p);
	strcpy(car.name,"宾利汽车");
	printf("汽车序列号:%d 汽车品牌:%s\n",car.id,car.name);

	car2.id=102;
	strcpy(car2.name,"奔驰");
	printf("汽车序列号:%d 汽车品牌:%s\n",car2.id,car2.name);


	car4.id=104;
	strcpy(car4.name,"宝马");
	printf("汽车序列号:%d 汽车品牌:%s\n",car4.id,car4.name);

	car5 = car4;
	printf("汽车序列号:%d 汽车品牌:%s\n",car5.id,car5.name);
	car6 = car4;
	printf("汽车序列号:%d 汽车品牌:%s\n",car6.id,car6.name);
	
	c * cp = &car6;
	printf("汽车序列号:%d 汽车品牌:%s\n",cp->id,cp->name);
	printf("汽车序列号:%d 汽车品牌:%s\n",((c *)&car6)->id, ((c *)&car6)->name);
	
	u1.a = -2147483648;
	u1.b = 'a';
	u1.c = 4294967295;
   	printf("u1.a:%d u1.b:%c u1.c:%u sizeof:%d\n",u1.a, u1.b,u1.c,sizeof(int)); 
	printf("u1.a:%d u1.b:%c u1.c:%u sizeof:%d\n",((union uk1_2 *)&u1)->a, ((union uk1_2 *)&u1)->b,((union uk1_2 *)&u1)->c,sizeof(union uk1_2));

    	yesterday = MON;
    	today     = TUE;
    	tomorrow  = SUN;
    	printf("%d %d %d \n", yesterday, today, tomorrow);	
	struct _1bs by_1;

	by_1.a = 1;	
   	printf("bs_1.a:0x%01x \n",by_1.a); 
   	printf("bs_1.a:0x%01x \n", ((struct _1bs *)&by_1)->a); 
	if(by_1.a) printf("true\n");
	else printf("flase\n");

}
