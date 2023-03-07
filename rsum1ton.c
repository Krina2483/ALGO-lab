#include<stdio.h>
#include<time.h>

int sum(int x){
    int s=0;
    for(int i=1; i<=x; i++){
        s+=i;
    }
    return s;
}

int main(){
    int n;
    clock_t start,end;
    printf("Enter nth number : ");
    scanf("%d",&n);
    start = clock();
    int s = sum(n);
    end = clock();
    printf("Sum of 1 to %d is %d",n,s);
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
}