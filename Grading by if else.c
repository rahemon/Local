#include<stdio.h>
int main(){
    int n;
    printf("Enter subject number=");
    scanf("%d",&n);
    if(n>0&&n>100)
        printf("Nothing=");
    else if(n>=80&&100>=n)
        printf("Grade=A+");
    else if(n>=70&&79>=n)
        printf("Grade=A");
    else if(n>=60&&69>=n)
        printf("Grade=A-");
    else if(n>=50&&59>=n)
        printf("Grade=B+");
    else if(n<50&n>=0)
        printf("Grade=Fail");

return 0;
}
