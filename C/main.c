#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Define a function to generate a random password
char *generate_password() {
    // Define the characters to include in the password
    char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

    // Define the password length (between 14 and 16 characters)
    srand(time(NULL));
    int length = rand() % 3 + 14;
    // The password length is randomly generated to be between 14 and 16 characters long.

    // Generate the password by randomly selecting characters from the character set
    char *password = malloc(length + 1);
    for (int i = 0; i < length; i++) {
        int random_index = rand() % strlen(chars);
        password[i] = chars[random_index];
    }
    password[length] = '\0';

    // Return the generated password
    return password;
}

int main() {
    // Call the function to generate a new password
    char *password = generate_password();
    printf("%s\n", password);
    free(password);
    return 0;
}