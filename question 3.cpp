#include <stdio.h>
#include <string.h>  
int main() {
    char storedUsername[] = "admin";
    char storedPassword[] = "1234";
    char enteredUsername[50];
    char enteredPassword[50];
    printf("Enter username: ");
    scanf("%s", enteredUsername);
    printf("Enter password: ");
    scanf("%s", enteredPassword);
    if (strcmp(enteredUsername, storedUsername) == 0 && strcmp(enteredPassword, storedPassword) == 0) {
        printf("Access granted\n");
    } else {

        printf("Access denied\n");
    }

    return 0;
}

