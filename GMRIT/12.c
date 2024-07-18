#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n==1 || n==2){
            printf("%d\n",0);
        }
        else if (n%2==0){
            printf("%d\n",(n/2)-1);
        }
        else{
            printf("%d\n",n/2);
        }
    }
    
}