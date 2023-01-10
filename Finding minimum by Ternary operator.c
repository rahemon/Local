#include<stdio.h>
int main(){
    int a,b,c,m,n;
    printf("Enter three value=");
    scanf("%d%d%d",&a,&b,&c);
    m=(((a<b)?a:b)<c)?((a<b)?a:b):c;
    printf("Minimum=%d",m);
return 0;
}
