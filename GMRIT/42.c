// #include <stdio.h>

// int binarySearch(int arr[], int target, int start, int end) {
//     int mid = 0;
//     while(start<=end){
        
//     }return -1;
// }
  
// int main() {
//     int arr[] = {1,2,3,7,7,7,7,7,7,9,11};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 7;
//     int start = 0;
//     int end = size-1;
//     int k= binarySearch(arr, target, start, end);
//     if(k==-1) printf("Element not fund");
//     else printf("Index of the element is: %d",k);
//     return 0;
// }


/*


#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
for(int i=0;i<size;i++){
    if(arr[i]==target){
        return i;
    }
}
    return -1;
}

int main() {
    int arr[] = {4, 2, 9, 7, 1, 7 , 7, 6, 7, 7 ,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
*/
#include <stdio.h>
void linearSearch(int arr[], int size, int target) {
int count=0;
for(int i=0;i<size;i++){
    if(arr[i]==target){
        printf("Array found at index:%d\n",i);
        count++;
    }
}
printf("Number of times target repeated is:%d",count);
}
int main() {
    int arr[] = {4, 2, 9, 7, 1, 7 , 7, 6, 7, 7 ,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    linearSearch(arr,size,target);
  /*  int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array\n");
    }
*/
    return 0;
}