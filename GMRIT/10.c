#include<stdio.h>
int main(){
    int limak,bob,year;
    scanf("%d %d",limak,bob);
    while(limak<=bob){
        limak*=3;
        bob*=2;
        year++;
    }
    printf("%d",year);
    return 0;
}