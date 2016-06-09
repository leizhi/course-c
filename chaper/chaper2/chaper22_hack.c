#include <string.h>
#include <stdio.h>
int* function() { 
    char buffer[4]="a";//4 bytes 8bytes
    int *ret;//4 bytes 8bytes
    //rbp 4 bytes=12  8bytes =24
    ret = (int*)(buffer + 12); //64bits 24  32bits 12
    (*ret) += 4; //x86=7 arm=4
  return ret; //popl rip
}

int main() { 
   int x; 
   x = 0; 
   function();//push rip
   x = 1;
   printf("%d\n",x); 
}
