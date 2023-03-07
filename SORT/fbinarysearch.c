#include <stdio.h>
#include <time.h>

int main()
{
    int i, low, high, mid, n, x;
    clock_t start , end;

    printf("Enter size of array : ");
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
    
    for(i = 1; i < n; i++)
    {
        if(a[i]<a[i-1]){
            printf("Enter sorted array...!!");
        }
    }
    printf("Enter value to find : ");
    scanf("\n%d", &x);

    low = 0;
    high = n - 1;
    start=clock();
    while (low <= high){
      int mid = low + (high - low )/2;
      if (a[mid] == x)
         {
            printf("element found at %d position",mid+1);
            end=clock();
            double cputime = (double)(end-start)/CLOCKS_PER_SEC;
            printf("\nCPU time is %lf",cputime);
             return 0;
         }
      if (a[mid] < x)
            low = mid + 1;
      else
            high = mid - 1;
   }
    printf("Element not found ");
    end=clock();
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
    return 0;
}