#include<stdio.h>

int main(){
    int arr[100],n,temp,k;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the value of k: ");
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        temp=arr[n-1];
        for(int i=n-1;i>=1;i--){
            arr[i]=arr[i-1];
        }   
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}