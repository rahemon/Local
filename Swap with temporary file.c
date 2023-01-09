#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("Before swap:%d,%d",x,y);
    temp=x+y;              /*     temp=x*y         x=temp/x        y=temp/y      */
    x=temp-x;
    y=temp-y;
    printf("\nAfter swap:%d,%d",x,y);


return 0;
}
