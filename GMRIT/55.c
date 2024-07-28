#include<stdio.h>
int main(){
    char s1[100];
    int i,count=0,j,n=0;
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
    n++;
    for(i=n-4;i<n;i++)
    count+=s1[i]-'0';
    printf("%d",count);

}