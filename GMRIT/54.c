#include <stdio.h>
int main() {
    char s1[100],s2[100];
    int i,c1[123]={0},c2[123]={0};
    printf("Enter the string s1 ");
    gets(s1);
    printf("Enter the string s2 ");
    gets(s2);
    for(i=0;s1[i]!='\0';i++) c1[s1[i]]++;
    for(i=0;s2[i]!='\0';i++) c2[s2[i]]++;
    for(i=0;i<123;i++){
       if(c1[i]!=0 && c2[i]!=0)
       printf("%c\n",i);
    }
    
}