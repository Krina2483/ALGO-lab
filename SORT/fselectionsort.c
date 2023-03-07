#include<stdio.h>
#include <time.h>

int main(){
    clock_t start , end;
    int min,i,temp,n;
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
    for(i=0; i<n-1; i++){
        min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;        
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
10:0.000006
100:0.000028
1000:0.001039
10000:0.115947
100000:10.272566

averagecase
10:0.000005
100:0.000050
1000:0.002499
10000:0.117107
100000:10.267602

worstcase
10:0.000008
100:0.000016
1000:0.002468
10000:0.129790
100000:11.537466
*/