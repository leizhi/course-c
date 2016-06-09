#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//全局变量
//方式1.1
struct _car
{
	int id;
	char name[20];
}car;
//方式1.2
struct _car1
{
        int id;
        char name[20];
};

struct _car1 car8;
//方式2.3
typedef struct _car1 ts_car1;//声明的结构名的别名
ts_car1 car7;

//方式2.1
typedef struct ccar
{
        int id;
        char name[20];
}typecar,typecar2;
typecar car2;
//typecar2 car10;

//方式2.2
typedef struct
{
        int id;
        char name[20];
}a,b,c;

a car4;
b car5;
c car6;

//方式1.1
union uk1_1
{
        int a;
        char b;
        unsigned int c;
};
union uk1_1 u3,u4;
typedef union uk1_1 uuk;

uuk uuk1;

//方式1.2
union uk1_2
{
        signed int a;
        unsigned char b;
        unsigned int c;
}u1,u2;
//方式1.3
union
{
        int a;
        char b;
        unsigned int c;
}u5;
//宏指令
/*
#define MON   1
#define TUE   2
#define WED   3
#define THU   4
#define FRI   5
#define SAT   6
#define SUN   7
*/
/*
enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
};
enum DAY yesterday, today, tomorrow;
*/

enum DAY
{
      MON=1, TUE, WED, THU, FRI, SAT, SUN
} yesterday, today, tomorrow;

typedef enum DAY  EDAY;
EDAY yday;

//位域

struct _2bs { unsigned a:4; unsigned :0;  unsigned b:4;  unsigned c:4; };
struct _1bs { unsigned a:1; unsigned :0; };

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
