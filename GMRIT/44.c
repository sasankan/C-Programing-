#include<stdio.h>

int count(int a){
    if (a==0) return 0;
    return 1 + count(a/10);

}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",count(n));
    return 0;
}