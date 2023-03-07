#include<stdio.h>

int main(){
    int n,x,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array : ");
    for(i=0; i<n; i++)
    {
        scanf("\n%d",&a[i]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}