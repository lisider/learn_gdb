#include "stdio.h"
void fun(void){
    int a = 0;
    int b = 1;
    int c = a+b;
    printf("%d\n",c);
}

int main(void){
    int a = 0;
    int b = 1;
    int c = a+b;
    printf("%d\n",c);
    fun();
}
