#include <stdio.h>

struct hi
{
    int a;
    float b;
    char c[10];
};


int main(){
    struct hi obj={10,20.5,"hi"};
    struct hi obj1={20,30.5,"hola"};
    struct hi obj3={30,40.5,"namaste"};
    printf("%d %f %s",obj.a,obj.b,obj.c);
    printf("%d %f %s",obj1.a,obj1.b,obj1.c);
    printf("%d %f %s",obj3.a,obj3.b,obj3.c);

    return 0;
}