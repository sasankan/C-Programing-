#include <stdio.h>

int fun(int a[],int size){
    int sum=0; 
    for(int i=size-1;i>=0;i--){
        sum+=a[i];
        printf("%d\t",sum);
    }
    return 0;
}
int main() {
    int arr[100],n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    fun(arr,n);
    return 0;
}