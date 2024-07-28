#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int*)malloc(2*sizeof(int));
    for(int i=0;i<2;i++){
        printf("%d ",ptr[i]);
    }
}
