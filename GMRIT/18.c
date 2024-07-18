#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b,div=0,x=0;
        scanf("%d %d",&a,&b);
        if(a%b==0){
            printf("%d\n",0);
            continue;
        }
        div=a/b;
        x=(div+1)*b;
        printf("%d\n",x-a);

    }
    return 0;
}