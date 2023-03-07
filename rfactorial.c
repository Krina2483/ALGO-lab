#include<stdio.h>
#include<time.h>

int factorial(int x){
    int fact=1;
    if(x==1 || x==0){
        return fact;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(){
    int n;
    clock_t start , end;
    printf("Enter number to find factorial : ");
    scanf("%d",&n);
    start = clock();
    long fact = factorial(n);
    end = clock();
    printf("Factorial of %d is %ld",n,fact);
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
} 