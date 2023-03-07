#include <stdio.h>
#include <time.h>

void fibonacci(int x){
    if(x==1){
        printf("0");
    }
    else if(x==2){
        printf("0 1");
    }
    else{
        int a=0,b=1,temp;
        printf("0 1 ");
        for(int i=1; i<=(x-2); i++){
            temp=a+b;
            printf("%d ",temp);
            a=b;
            b=temp;
        }
    }
}

int main(){
    int n ;
    clock_t start , end;
    printf("Enter nth turm of fibonacci series : ");
    scanf("%d",&n);
    start = clock();
    fibonacci(n);
    end = clock();

    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
    return 0;
}