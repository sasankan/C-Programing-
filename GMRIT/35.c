// #include<stdio.h>
// int main(){
//     int a=10;
//     int aptr=&a;
//     printf("%d",aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int aptr=&a;
//     printf("%p",aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%d",aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int * aptr=&a;
//     printf("%p",aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%p",&aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%d",*aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int b=20;
//     int *aptr=&a;
//     *aptr=b;
//     printf("%d",*aptr);
// }

// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%p\n",&a);
//     *aptr=20;
//     printf("%d\n",*aptr);
//     printf("%p\n",aptr);
// }


// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%p\n",aptr);
//     printf("%p\n",aptr+1); 
// }


// #include<stdio.h>
// int main(){
//     int a=10;
//     int *aptr=&a;
//     printf("%d\n",*aptr);
//     printf("%d\n",*aptr+1);
// }

// #include<stdio.h>
// int main(){
//     int a=1025;
//     int *aptr=&a;
//     printf("%d\n",sizeof(int));
//     printf("%p\t%d\n",aptr,*aptr);
//     char *bptr=(char*)aptr;
//     printf("%p\t%d\n",bptr,*bptr); 
//     printf("%p\t%d\n",bptr+1,*bptr+1); 
// }

// #include<stdio.h>
// void increment(int x){
//     x+=2;
// }

// int main(){
//     int a=10;
//     increment(a);
//     printf("%d",a);
// }

// #include<stdio.h>
// void increment(int a){
//     a+=2;
//     printf("address inside fun = %d\n",&a);
// }

// int main(){
//     int a=10;
//     increment(a);
//     printf("%d\n",a);
//     printf("address inside main = %d\n",&a);
// }

// #include<stdio.h>
// void increment(int *aptr){
//     *aptr+=2;
// }
// int main(){
//     int a=10;
//     increment(&a);
//     printf("%d",a);
// }


// #include <stdio.h>
// int main() {
//     int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
//     int *ptr = arr;
//     for (int i = 0; i < 4; i++) {
//         printf("%d\n", *(ptr + 1));
//         ptr++;
//     }
//     return 0;
// }

#include <stdio.h>
int sumofarr(int a[]){
    int sum=0;
    int size = sizeof(a)/sizeof(a[0]);  
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    return sum;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int total = sumofarr(arr);
    printf("%d",total);
    return 0;
}//450 //100 //




//int (*x())[20]

// #include<stdio.h>
// #define N 5
// void main(){
//     int a[N],*p,i;
//     float b[N],*q;
//     for(i=0;i<N;i++){
//         a[i]=1; b[i]=0.3;
//     }
//     p=&a[3];
//     q=&b[3];
//     *p=5;
//     *(p-1)=7;
//     *(p+1)=9;
//     *q=.2;
//     *(q-1)=.4;
//     *(q+1)=.6;
//     for (int i = 0; i < N; i++){
//         printf("\n%d\t%0.2f",a[i],b[i]);
//     }
// }    

// #include<stdio.h>
// void main(){
//     int a[]={6,2,8,4,9},*p,n;
//     p=a+2;
//     n=*p;
//     printf("\nOutput1: %d",n);
//     n=*++p;
//     printf("\nOutput2: %d",n);
//     n=*(--p);
//     printf("\nOutput3: %d",n);
//     n=*p--;
//     printf("\nOutput4: %d",n);
//     n=(*p)++;
//     printf("\nOutput5: %d",n);
//     n=++(*p);
//     printf("\nOutput6: %d",n);
//     n=--*p;
//     printf("\nOutput7: %d",n);
//     n=*(++p);
//     printf("\nOutput8: %d",n);
// }     

// #include<stdio.h>
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     int k;
//     int (*p)(int,int);
//     p=&add;
//     k=(*p)(2,3);
//     printf("%d",k);
// }

// #include<stdio.h>
// int add(int a,int b){
//     return a+b;
// }
// int main(){
//     int k;
//     int (*p)(int,int)=&add;
//     k=p(2,3);
//     printf("%d",k);
// }


