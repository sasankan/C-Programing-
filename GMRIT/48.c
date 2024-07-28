// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*)malloc(n * sizeof(int));


//     for (i = 0; i < n; i++) {
//         ptr[i] = i + 1;
//     }

//     printf("The elements of the array are: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);

//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     int n, i;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     ptr = (int*)calloc(n, sizeof(int));

//     if (ptr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("The elements of the array are: ");
//     for (i = 0; i < n; i++) {
//         printf("%d ", ptr[i]);
//     }

//     free(ptr);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n1, n2, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n1);

    ptr = (int*)malloc(n1 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n1; i++) {
        ptr[i] = i + 1;
    }

    printf("Enter new number of elements: ");
    scanf("%d", &n2);

    ptr = (int*)realloc(ptr, n2 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (i = n1; i < n2; i++) {
        ptr[i] = i + 1;
    }

    printf("The elements of the array are: ");
    for (i = 0; i < n2; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}


