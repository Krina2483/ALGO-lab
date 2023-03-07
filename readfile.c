#include<stdio.h>
#include <math.h>

int main(){
    FILE *fp;
    fp = fopen("num.txt","r");
    int a[20],i=0;

    while (fscanf(fp,"%d",&a[i])!=EOF)
    {
        i++;
    }

    a[i]='\0';

    for(i=0; a[i]!='\0'; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
/*
int rand(void);
int main(){

    for(int i=0; i<10; i++){
        printf("%d\n", rand()%100);
    }
}
*/