#include <stdio.h>
#include <time.h>

void merge(int a[], int l, int m, int r){
    int n1, n2;
    n1 = m-l+1;
    n2 = r-m;

    int L[n1], R[n2];

    for(int i = 0 ; i<n1 ; i++)
        L[i] = a[l+i];
    for(int i = 0 ; i<n2 ; i++)
        R[i] = a[m+1+i];

    int i=0,j=0;
    int  k = l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
        a[k++] = L[i++];

    while(j<n2)
        a[k++] = R[j++];
}

void mergerSort(int a[], int l, int r){
    if(l<r){
        int m = l + (r-l)/2;
        mergerSort(a, l, m);
        mergerSort(a, m+1, r);
        merge(a, l, m, r);
    }
}

int main(){
    int n,i;
    clock_t start , end;
    printf("Enter size of array : ");
    scanf("%d", &n);
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
    mergerSort(a, 0, n-1);
    end=clock();

    printf("sorted array is : ");
    for(int i = 0 ; i<n ; i++){
        printf("%d ", a[i]);
    }
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);

    return 0;
}
/*bestcase
10:0.000016
100:0.000027
1000:0.000232
10000:0.002207
100000:0.014954

averagecase
10:0.000015
100:0.000029
1000:0.000334
10000:0.003277
100000:0.026222

worstcase
10:0.000012
100:0.000033
1000:0.000337
10000:0.001654
100000:0.014734
*/