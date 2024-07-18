#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n+1];
    for (int i=1; i<=n;i++){
        scanf("%d",&k);
        arr[k]=i;
    }
    for(int i=1;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}