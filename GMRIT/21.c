#include<stdio.h>
int harshad(int);

int main(){
    int n,k;
    printf("Enter the number: ");
    scanf("%d",&n);
    k=harshad(n);
    if(k!=-1){
        printf("The number %d is a Harshad number",k);
    }
    else{
        printf("Not a Harshad number");
    }
}

int harshad(a){
    int x=a,s=0,d;
    while(x){
        d=x%10;
        s=s+d;
        x=x/10;
    }
    if (a%s==0){
        return a;
    }
    else{
        return -1;
    }
}