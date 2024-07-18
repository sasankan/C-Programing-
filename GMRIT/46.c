#include <stdio.h>

int firstOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) { // Go Right
            s = mid + 1;
        } else { // Go Left
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int mid;
    int ans = -1;
    while (s <= e) {
        mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) { // Go Right
            s = mid + 1;
        } else { // Go Left
            e = mid - 1;
        }
    }
    return ans;
}

void firstAndLastPosition(int arr[], int n, int k, int *first, int *last) {
    *first = firstOcc(arr, n, k);
    *last = lastOcc(arr, n, k);
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    int first, last;
    
    firstAndLastPosition(arr, n, key, &first, &last);
    
    printf("First Occurrence: %d\n", first);
    printf("Last Occurrence: %d\n", last);
    
    return 0;
}
