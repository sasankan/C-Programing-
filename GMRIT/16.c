#include <stdio.h>

int main() {
    int marks;
    printf("Enter the marks: ");
    scanf("%d",&marks);
    switch(marks/10)
    {
    case 10:
        printf("Wow Full Marks");
        break;
    case 9:
        printf("Yes, I got A");
        break;
    case 8:
        printf("I got B");
        break;
    case 7:
        printf("Not Bad, I got C");
        break;
    case 6:
        printf("Somehow I managed to pass D");
        break;
    default:
        printf("Opps, I Failed");
        break;
    }
    return 0;
}
