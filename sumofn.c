#include<stdio.h>
#include<time.h>

int main(){
    clock_t start,end;
    long n,sum=0;
    printf("Enter nth number : ");
    scanf("%d",&n);
    start=clock();
    for(long i=1; i<=n; i++){
        sum+=i;
    }
    end=clock();
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("sum of %ld numbers is %ld",n,sum);
    printf("/nCPU time is %lf",cputime);
    return 0 ;
}