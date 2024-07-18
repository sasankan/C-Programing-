#include <stdio.h>

int main(){
    int a=15;
    if((a&1)==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}