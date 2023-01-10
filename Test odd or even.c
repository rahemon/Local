#include<stdio.h>
int main(){
    int a;
    printf("Enter a value=");
    scanf("%d",&a);
    if((a%2)==0)
        printf("The even number=%d",a);
    else
        printf("The odd number=%d",a);

return 0;
}
