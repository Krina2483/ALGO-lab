#include <stdio.h>
#include <time.h>
long fact();
int main(){
    long n,factorial;
    clock_t start,end;
    printf("Enter number to find factorial ");
    scanf("%ld",&n);
    start = clock();
    factorial = fact(n);
    end = clock();
    printf("\nFactorial of %ld is %ld",n,factorial);
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);

    return 0;
}

long fact(long x){
    long fact=1;
    if(x==0){
        return 1;
    }
    else{
        for(long i=1; i<=x; i++){
            fact=fact*i;
        }
        return fact;
    }
}