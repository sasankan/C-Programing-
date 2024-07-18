#include <stdio.h>
int main(){
    int n,event,police=0,unsolved=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&event);
        if(event==-1){
            if(police>0){
                police--;
            }
            else{
                unsolved++;
            }
        }
        else{
            police=police+event;
        }
    }
    printf("%d",unsolved);
    return 0;
}