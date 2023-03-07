#include<stdio.h>
int rand(void);
int main(){
    FILE *fp;
    long int i , number;
    printf("Enter size of number");
    scanf("%ld",&number);
    fp = fopen("bestcase.txt","w");
    for(i=1; i<=number; i++){
        fprintf(fp,"%ld\n", i); //best
    }

    fp = fopen("averagecase.txt","w");
    for(i=1; i<=number; i++){
        fprintf(fp,"%d\n", rand()%100000); //average
    }

    fp = fopen("worstcase.txt","w");
    for(i=1; i<=number; i++){
        fprintf(fp,"%ld\n", number-i+1); //worst
    }
    
    return 0;
}