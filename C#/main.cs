using System;

public class PasswordGenerator {
    // Define a function to generate a random password
    public static string GeneratePassword() {
        // Define the characters to include in the password
        string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
        // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

        // Define the password length (between 14 and 16 characters)
        Random random = new Random();
        int length = random.Next(3) + 14;
        // The password length is randomly generated to be between 14 and 16 characters long.

        // Generate the password by randomly selecting characters from the character set
        char[] password = new char[length];
        for (int i = 0; i < length; i++) {
            int randomIndex = random.Next(chars.Length);
            password[i] = chars[randomIndex];
        }

        // Return the generated password
        return new string(password);
    }

    public static void Main() {
        // Call the function to generate a new password
        string password = GeneratePassword();
        Console.WriteLine(password);
    }
}