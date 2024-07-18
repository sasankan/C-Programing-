#include<stdio.h>
#include<limits.h>
int main(){
    int arr[9]={2,5,6,7,1,3,4,3,6};
    int largest = INT_MIN;
    int sec_largest = INT_MIN;
    for(int i=0;i<9;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    for(int i=0;i<9;i++){
        if(arr[i]>sec_largest && arr[i]!=largest) sec_largest=arr[i];
    }
    printf("%d\n",largest);
    printf("%d\n",sec_largest);
    return 0;
}