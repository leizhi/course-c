/*
 *一维数组的冒泡排序
 */
#include <stdio.h>
#include <stdlib.h>

//冒泡排序
int stort(){
    int tmp =0;

    int num[6]={9,400,7,300,6,3};
    //num[0] ? 
    int *p1 = (int *)&num;
    int *p2 = p1+1;
    int i=0,j=0;

    for(i=0;i<5;i++){
       p1 = (int *)&num;
       p2 = p1++;

       for(j=0;j<5;j++)
        {
        if(*p1 > *p2)
          {
	   tmp = *p1;
	   *p1=*p2;
	   *p2=tmp;
         }
         p1++;//地址加1
         p2++;//地址加1
        }
     }

    for(i=0;i<6;i++){
	printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}

int main(int argc, char * argv[]){
    int ret = stort();
    printf("排序方法的执行状态:%d\n",ret);
    return 0;
}


