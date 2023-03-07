#include<stdio.h>
#include<time.h>

long power(int x ,int y){
    long pow=1;
    for(int i=1; i<=y; i++){
        pow=pow*x;
    }
    return pow;
}

int main(){
    long a,b;
    clock_t start , end ;
    printf("Enter number to find power : ");
    scanf("%ld",&a);
    printf("Enter power : ");
    scanf("%ld",&b);
    start = clock();
    long p = power(a,b);
    end = clock();
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    
    printf("Power %ld of %ld is %ld",b,a,p);
    printf("\nCPU time is %lf",cputime);

    return 0 ;

}