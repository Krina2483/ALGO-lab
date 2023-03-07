#include <stdio.h>
#include <time.h>
void countingSort(int array[], int size) {
    int output[10];
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max)
            max = array[i];
    }

    int count[10];

    for (int i = 0; i <= max; ++i) {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }

    for (int i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Driver code
int main() {
    int n,i;
    clock_t start , end;
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
    countingSort(a, n);
    end=clock();

    for (int i = 0; i < n; i++) {
        printf("%d  ", a[i]);
    }
    double cputime = (double)(end-start)/CLOCKS_PER_SEC;
    printf("\nCPU time is %lf",cputime);
    return 0;
}