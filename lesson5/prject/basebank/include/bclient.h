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
