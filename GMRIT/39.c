// #include <stdio.h>
// void fun();
// //int a=50;
// int main(){
//     int a=1;
//     fun();
//     {
//         int a=10;
//         printf("\nInside block 1: %d",a);
//     }
//     {
//         printf("\nInside the block 2: %d",a++);
//     }
//     printf("\nInside main: %d",a);
//     return 0;
// }

// void fun(){
//     int a=25;
//     printf("\nInside the function: %d",a); 
// }


// #include<stdio.h>
// int main(){
//     auto int a=10;
//     {
//         auto int a=20;
//         printf("\nInside block: %d",a);
//     }
//     printf("\nValue of a: %d",a);
// }

// #include <stdio.h>

// int main() {
//     void fun() {
//     static int count = 0;
//     count++;
//     printf("Count: %d\n", count);
//     }
//     fun();
//     fun();
//     fun();
//     return 0;
// }


// #include <stdio.h>

// void sumOfArrayElements(int arr[], int n) {
//     register int sum = 0; // Suggest to store 'sum' in a CPU register
//     register int i;       // Suggest to store 'i' in a CPU register
    
//     for (i = 0; i < n; i++) {
//         sum += arr[i];
//     }
    
//     printf("Sum of array elements: %d\n", sum);
// }

// int main() {
//     int array[] = {1, 2, 3, 4, 5};
//     int n = sizeof(array) / sizeof(array[0]);
    
//     sumOfArrayElements(array, n);
    
//     return 0;
// }



