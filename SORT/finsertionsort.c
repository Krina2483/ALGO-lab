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
    for (int i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
 
        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
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
10:0.000008
100:0.000009
1000:0.000014
10000:0.000096
100000:0.000647

averagecase
10:0.000010
100:0.000030
1000:0.001933
10000:0.068539
100000:5.273887

worstcase
10:0.000008
100:0.000041
1000:0.002735
10000:0.117239
100000:10.559004
*/