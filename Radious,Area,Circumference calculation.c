#include<stdio.h>
#define PI 3.1416
int main(){
    float r,area,circumference;
    printf("Enter radious=");
    scanf("%f",&r);
    area=PI*r*r;
    circumference=2*PI*r;
    printf("Area=%f",area);
    printf("\nCircumference=%f",circumference);



return 0;
}
