#include <stdio.h>

int main() {
    int arr[100],n,temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0,j=(n/2)-1;i<n/4;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}