#include<stdio.h>
#include <time.h>

int main(){
    clock_t start , end;
    int x,i,j,temp,n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    FILE *fp;
    char filename[20];
    printf("Enter file name : ");
    scanf("%s",&filename);
    fp = fopen(filename,"r");

    for(i=0; i<n; i++){
        fscanf(fp,"%d",&a[i]);
    }

    a[i]='\0';
    start=clock();
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    end=clock();
    printf("sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
    return 0;
}
/*bestcase
10:0.000007
100:0.000033
1000:0.002636
10000:0.118810
100000:10.255284

averagecase
10:0.000011
100:0.000065
1000:0.004287
10000:0.249101
100000:29.726112

worstcase
10:0.000007
100:0.000078
1000:0.003518
10000:0.201285
100000:18.719542
*/