use rand::Rng;

// Define a function to generate a random password
fn generate_password() -> String {
    // Define the characters to include in the password
    let chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
    // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

    // Define the password length (between 14 and 16 characters)
    let length = rand::thread_rng().gen_range(14..=16);
    // The password length is randomly generated to be between 14 and 16 characters long.

    // Generate the password by randomly selecting characters from the character set
    let password: String = (0..length)
        .map(|_| chars.chars().nth(rand::thread_rng().gen_range(0..chars.len())).unwrap())
        .collect();

    // Return the generated password
    password
}

fn main() {
    // Call the function to generate a new password
    let password = generate_password();
    println!("{}", password);
}