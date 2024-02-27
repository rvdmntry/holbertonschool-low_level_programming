#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

void generate_password(int length) {
    int i;
    char password[length + 1];

    srand(time(NULL)); // Seed the random number generator

    for (i = 0; i < length; i++) {
        // Generate random characters from ASCII range
        int randomChar = (rand() % 94) + 33; // ASCII printable characters range from 33 to 126
        password[i] = (char)randomChar;
    }

    password[length] = '\0'; // Null-terminate the string

    printf("%s\n", password);
}

int main(void) {
    generate_password(PASSWORD_LENGTH);
    return 0;
}
