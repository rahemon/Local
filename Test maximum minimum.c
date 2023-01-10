#include<stdio.h>
int main(){
    int a,b,min,max;
    printf("Enter two value=");
    scanf("%d%d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
        printf("Maximum =%d",max);
        printf("\nMinimum=%d",min);
return 0;
}
