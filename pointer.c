#include<stdio.h>
int main(){
    int a=5, *p;
    printf("a=%d",a);
    printf("\n&a=%d",&a);
    p=&a;
    printf("\np=%d",p);
    printf("\n&p=%d",&p);
    printf("\n*p=%d",*p);
    printf("\n*(&a)=%d",*(&a));
    return 0;
}