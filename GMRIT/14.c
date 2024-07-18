#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "password123"; 
    int attempts = 3;
    char user_input[50];

    while (attempts > 0) {
        printf("Enter the password: ");
        scanf("%s", user_input);

        if (strcmp(user_input, password) == 0) {
            printf("Welcome!\n");
            break;
        } else {
            attempts--;
            if (attempts > 0) {
                printf("Wrong password! You have %d attempts left.\n", attempts);
            } else {
                printf("Account blocked.\n");
                break;
            }
        }
    }

    return 0;
}
