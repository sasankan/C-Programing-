#include<stdio.h>
int main(){
    int num,digit,rev=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num)
    {
        digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    printf("%d",rev);
    return 0;
}