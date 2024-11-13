#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vigenereCipher(char *plaintext, char *key, char *ciphertext) {
    int textLen = strlen(plaintext);
    int keyLen = strlen(key);
    int i, j = 0;

    for (i = 0; i < textLen; i++) {
 
        if (isalpha(plaintext[i])) {
      
            char plainChar = toupper(plaintext[i]) - 'A';
            char keyChar = toupper(key[j % keyLen]) - 'A';

            char cipherChar = (plainChar + keyChar) % 26 + 'A';

            ciphertext[i] = cipherChar;

            j++;
        } else {

            ciphertext[i] = plaintext[i];
        }
    }
    ciphertext[textLen] = '\0'; 
}
int main() {
    char plaintext[100], key[100], ciphertext[100];

    printf("Enter the plaintext: ");
    fgets(plaintext, sizeof(plaintext), stdin);
    plaintext[strcspn(plaintext, "\n")] = '\0';  

    printf("Enter the key: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';
    
    vigenereCipher(plaintext, key, ciphertext);

    printf("Ciphertext: %s\n", ciphertext);

    return 0;
}

