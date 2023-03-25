import java.util.Random;

public class PasswordGenerator {

    // Define a function to generate a random password
    public static String generatePassword() {
        // Define the characters to include in the password
        String chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
        // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

        // Define the password length (between 14 and 16 characters)
        Random random = new Random();
        int length = random.nextInt(3) + 14;
        // The password length is randomly generated to be between 14 and 16 characters long.

        // Generate the password by randomly selecting characters from the character set
        StringBuilder password = new StringBuilder();
        for (int i = 0; i < length; i++) {
            int randomIndex = random.nextInt(chars.length());
            password.append(chars.charAt(randomIndex));
        }

        // Return the generated password
        return password.toString();
    }

    public static void main(String[] args) {
        // Call the function to generate a new password
        String password = generatePassword();
        System.out.println(password);
    }
}