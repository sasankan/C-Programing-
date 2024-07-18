#include<stdio.h>

int xor(int n){
    if(n%4==0) return("%d",n);
    if(n%4==1) return("%d",1);
    if(n%4==2) return("%d",n+1);
    if(n%4==3) return("%d",0);
}

int main(){
    int L,R,a,b;
    printf("Enter the value of L: ");
    scanf("%d",&L);
    printf("Enter the R value: ");
    scanf("%d",&R);
    a=xor(L-1);
    b=xor(R);   
    printf("%d",a^b);
    return 0;
}