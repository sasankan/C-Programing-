#include<stdio.h>

int xor(int n){
    if(n%4==1) return("%d",1);
    if(n%4==2) return("%d",n+1);
    if(n%4==3) return("%d",0);
    if(n%4==0) return("%d",n);
}

int main(){
    int R,L,x=0;
    printf("Enter the lower limit: ");
    scanf("%d",&L);
    printf("Enter the upper limit: ");
    scanf("%d",&R);
    x=xor(R)^xor(L-1);
    printf("%d",x);
    return 0;
}