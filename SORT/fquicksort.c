#include<stdio.h>
#include<time.h>

void quicksort(int x[10],int,int);
int partition(int x[10],int,int);
int main()
{
    clock_t start , end;
    int n,i;
    printf("Enter size of the array: ");
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
    quicksort(a,0,n-1);
    end=clock();

    printf("sorted element: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);

    return 0;
}

void quicksort(int x[10],int first,int last)
{
    int mid;
    if(first<last)
    {
        mid=partition(x,first,last);
        quicksort(x,first,mid-1);
        quicksort(x,mid+1,last);
    }
}
int partition(int x[10],int p, int r)
{
    int value,i,j,temp;
    value=x[r];
    i=p-1;
    for(j=p;j<r-1;j++)
    {
        if(x[j]<=value)
        {
            i=i+1;
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
    }
    temp=x[i+1];
    x[i+1]=x[r];
    x[r]=temp;

    return(i+1);
}
/*bestcase
10:0.000008
100:0.000037
1000:0.002072
10000:0.098016
100000:8.534381

averagecase
10:0.000012
100:0.000020
1000:0.000150
10000:0.002077
100000:0.018387

worstcase
10:0.000008
100:0.000038
1000:0.002071
10000:0.105740
100000:9.097066
*/