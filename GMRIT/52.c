#include<stdio.h>
int main(){
    char s1[100],temp;
    int i,j,n1=0;
    printf("Enter the string S1: ");
    gets(s1);
    for(int i=0;s1[i]!='\0';i++){
        n1++;
    }
    for(i=0,j=n1-1;i<n1/2;i++,j--){
        temp=s1[i];
        s1[i]=s1[j];
        s1[j]=temp;
        
    }   
    printf("%s",s1); 
    return 0;
}