#include<stdio.h>
int main(){
    int x,y,temp;
    printf("Enter X=");    /*  colon soho prinr:   printf("\"hello world\"")       */
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    printf("Before swap:%d,%d",x,y);
    temp=x;                           /*x ta k temp er man dhora hoise*/
    x=y;
    y=temp;
    printf("\nAfter swap:%d,%d",x,y);


return 0;
}
