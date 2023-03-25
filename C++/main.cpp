#include <iostream>
#include <string>
#include <random>

// Define a function to generate a random password
std::string generate_password() {
    // Define the characters to include in the password
    std::string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

    // Define the password length (between 14 and 16 characters)
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> length_dist(14, 16);
    int length = length_dist(gen);
    // The password length is randomly generated to be between 14 and 16 characters long.

    // Generate the password by randomly selecting characters from the character set
    std::string password;
    std::uniform_int_distribution<> char_dist(0, chars.length() - 1);
    for (int i = 0; i < length; i++) {
        password += chars[char_dist(gen)];
    }

    // Return the generated password
    return password;
}

int main() {
    // Call the function to generate a new password
    std::string password = generate_password();
    std::cout << password << std::endl;
    return 0;
}
