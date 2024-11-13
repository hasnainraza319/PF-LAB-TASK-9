#include <stdio.h>
#include <string.h>  
int main() {
    char students[5][50] = {
        "numii", 
        "Henny", 
        "harry", 
        "sharjeel", 
        "jenny"
    };

    char search_name[50];
    int found = 0;  

    printf("Enter the name to search: ");
    scanf("%s", search_name);
    for (int i = 0; i < 5; i++) {
        if (strcmp(students[i], search_name) == 0) {
            found = 1;
            break; 
        }
    }
    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
    return 0;
}

