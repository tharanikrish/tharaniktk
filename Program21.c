#include<stdio.h>
void main(){
    int N,A,D;
    int sum=0;
    printf("N, A, D: ");
    scanf("%d%d%d",&N,&A,&D);
    sum = (N*(A+D));
    printf("%d",sum);
}
