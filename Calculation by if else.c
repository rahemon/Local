#include<stdio.h>
int main(){
    int x,y,k,w;
    float z;
    printf("X=");
    scanf("%d",&x);
    printf("Y=");
    scanf("%d",&y);
    printf("K=");
    scanf("%d",&k);
    printf("W=");
    scanf("%d",&w);
    if(y==w)
        printf("Invalide");
    else
        z=(x-k)/(float)(y-w);
        printf("Result Z=%f",z);
    return 0;
}
