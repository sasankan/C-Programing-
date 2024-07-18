#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while (t--){
        int k,count=0,i=1;
        scanf("%d",&k);
        while(1){
            if(i%3!=0 && i%10!=3){
                count++;
                if(count==k){
                    printf("%d",i);
                    break;
                }
            }
            i++;
        }

    return 0;
}