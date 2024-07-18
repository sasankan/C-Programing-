// #include<stdio.h>
// int main(){
//     int x;
//     for(x=-1;x<=10;x++){
//         if(x<5)
//             continue;
//         else
//             break;
//         printf("hi");
//         x++;                                  
//     }
// }

// #include<stdio.h>
// int main(){
//     int i=0;
//     for(; i <=5; i++);
//         printf("%d",i);
//     return 0;    
// }

// #include<stdio.h>
// int main(){
//     int a=500,b=100,c;
//     if(!(a>=400))
//         b=300;
//     c=200;
//     printf("b=%d c=%d\n",b,c);
//     return 0;    
// }

// #include<stdio.h>
// int main(){
//     int x=3;
//     float y=3.0;
//     if(x==y)
//         printf("x and y are equal");
//     else
//         printf("x and y are not equal");
//     return 0;        
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     if(ch=printf(""))
//         printf("Yes\n");
//     else
//         printf("No\n");
//     return 0;        
// } 

// #include<stdio.h>
// void main(){
//     int a=b=c=10;
//     a=b=c=50;
//     printf("%d %d %d",a,b,c);
// } 

// #include<stdio.h>
// void main(){
//     int x;
//     x=printf("Kalki was amazing!");
//     printf("\nx=%d",x);
// }

// #include<stdio.h>
// void main(){
//     int a=0;
//     for(;a;)
//     a++;
//     printf("%d",a); 
// }  

// #include<stdio.h>
// void main(){
//     printf("%d",'B'<'A');
// }

// #include<stdio.h>
// void main(){
//     int i=65;
//     printf("\n %c %d",i,i);
// }

// #include<stdio.h>
// void main(){
//     int c=2,d=5,e=10,a;
//     a=c>0?d>1||e>1?100:200:300;
//     printf("a=%d",a);
// } 

// #include<stdio.h>
// int main(){
//     int x,y;
//     for(x=5;x>=1;x--){
//         for(y=1;y<=x;y++)
//         printf("%d\n",y);
//     }
// } //how many times loop runs

// #include<stdio.h>
// int main(){
//     float f=0.253;
//     if (f==0.253)
//         printf("YES\n");
//     else
//         printf("NO\n");
//     return 0;
// }                

// (a=b)?(c==d):(e==f)
// (a==b)?(c=d):(e=f)
// (a=b)?(c=d):(e=f)
// (a==b)?(c==d):(e==f) 

// #include<stdio.h>
// void main(){
//     int a=0,b=2;
//     if (a=10)
//         b=0;
//     else
//         b*=10;
//     printf("%d %d",a,b);    
// }

// #include<stdio.h> 
// void main(){
//     int x=4.4 % 2;
//     printf("%d",x);
// }

// #include <stdio.h>
// int main() {
//     char c = 'a';
//     switch (c) {
//         case 97:
//             break;
//         case 'a':
//             printf("98");
//             break;
//         case 99:
//             printf("99");
//             break;  
//         default:
//             printf("default");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int x=10;
//     do{
//         x++;
//     }
//     while (x++>20);
//     {
//         printf("%d",x);
//     }
//     return 0;
// } 

// #include<stdio.h>
// int main(){
//     int a=1;
//     printf("size of a is %d, ",sizeof(++a));
//     printf("value of a is %d",a);
// }

// #include<stdio.h>
// int main(){
//     int c,a=25;
//     c=printf("%d",a);
//     printf("\n%d",c);
//     return 0;
// } 

// #include<stdio.h>
// void main(){
//     int a=10;
//     if() printf("\n%d",a);
//     else printf("\n%d %d",a,a);
// } 

// #include<stdio.h>
// void main(){
//     int a=2;
//     switch(a){
//         case 1:
//             printf("goodbye");
//             break;
//         case 2:
//             continue;
//         case 3:
//             printf("bye");
//     }
// } 

// #include<stdio.h>
// void main(){
//     printf(3+"awesome");
// }

// #include<stdio.h>
// void main(){
//     printf("%d",10?0?5:1:12);
// }

// #include<stdio.h>
// void main(){
//     int a=5,b=6,c=9,d;
//     d=a>b?(a>c?1:2):(c>b?6:8);  
//     printf("%d",d);
// }

#include <stdio.h>
struct example {
    char lk;
    int b; 
    double d;
    int k; 
    }; 

int main() {
    printf("%d\n", sizeof(struct example));
    return 0;
}

// #include<stdio.h>
// int main(){
//     int i=20;
//     printf("%x",i);
// }


// #include<stdio.h>
// void main(){
//     int i;
//     i=0x10+010+10;
//     printf("\nx=%x",i);
// }


// #include <stdio.h>
// void main(){
//     auto void fun();
//     fun();
//     void fun(){
//         printf("Hola Amigo");
//     }
// }


// #include<stdio.h>
// int main(){
//     static int i;
//     int j;
//     for(j=0;j<10;j++){
//         i+=2;
//         i-=j;
//     }
//     printf("%d",i);
// }


// #include<stdio.h>
// static int i;
// void main(){
//     int i;
//     printf("i is %d",i);
// }


// #include<stdio.h>
// void fun(){
//     int x=0;
//     static int y=0;
//     x++;y++;
//     printf("%d--%d\n",x,y);
// }
// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }