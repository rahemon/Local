#include<stdio.h>
int main(){
    int x;
    printf("Enter days=");
    scanf("%d",&x);
    if(x>30)

        printf("Month=%d",x/30);
        printf("\nDays=%d",x%30);
return 0;
}

