#include<stdio.h>

int xor(int a){
    if(a%4==1) return("%d",1);
    if(a%4==2) return("%d",a+1);
    if(a%4==3) return("%d",0);
    if(a%4==0) return("%d",a);
}

int main(){
    int L,R;
    printf("Enter the value of L: ");
    scanf("%d",&L);
    printf("Enter the value of R: ");
    scanf("%d",&R);
    int a,b;
    a=xor(R);
    b=xor(L-1);
    printf("%d",a^b);
    return 0;
}