// Define a function to generate a random password
func generatePassword() -> String {
    // Define the characters to include in the password
    let chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+"
    // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

    // Define the password length (between 14 and 16 characters)
    let length = Int.random(in: 14...16)
    // The password length is randomly generated to be between 14 and 16 characters long.

    // Generate the password by randomly selecting characters from the character set
    var password = ""
    for _ in 0..<length {
        let randomIndex = Int.random(in: 0..<chars.count)
        let randomChar = chars[chars.index(chars.startIndex, offsetBy: randomIndex)]
        password += String(randomChar)
    }

    // Return the generated password
    return password
}

// Call the function to generate a new password
let password = generatePassword()
print(password)