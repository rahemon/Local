#include<stdio.h>
int main(){
    int a,b,c;
    printf("Serially enter value of a,b,c=");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b && a<c)
        printf("Min=%d",a);
    else if(b<a && b<c)
    printf("\nMin=%d",b);
    else
        printf("\nMin=%d",c);
return 0;
}
