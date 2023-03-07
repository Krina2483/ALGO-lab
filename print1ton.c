#include<stdio.h>
#include<time.h>

int main(){
    int n;
    clock_t start,end;
    printf("Enter n : ");
    scanf("%d",&n);
    start = clock();
    for(int i=1; i<=n; i++){
        printf("/n%d",i);
    }
    end = clock();
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
    return 0;
}