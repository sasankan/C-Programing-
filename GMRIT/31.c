#include<stdio.h>
#include<limits.h>
int main(){
    int arr[100],n;
    printf("Enter the no of elements of array: ");
    scanf("%d",&n);

    printf("Enter the values of the array: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
     
    int largest=INT_MIN;
    int sec_largest =INT_MIN;
    for(int i=0;i<n;i++){
        if (arr[i]>largest) largest=arr[i];    
    }
    for(int j=0;j<n;j++){
        if(arr[j]>sec_largest && arr[j]!=largest) sec_largest=arr[j];
    }
    printf("%d\n",largest);
    printf("%d",sec_largest);
}