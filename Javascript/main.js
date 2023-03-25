// Define a function to generate a random password
function generatePassword() {
  // Define the characters to include in the password
  const chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+";
  // The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

  // Define the password length (between 14 and 16 characters)
  const length = Math.floor(Math.random() * 3) + 14;
  // The password length is randomly generated to be between 14 and 16 characters long.

  // Initialize an empty password string
  let password = "";

  // Generate the password by randomly selecting characters from the character set
  for (let i = 0; i < length; i++) {
    const randomIndex = Math.floor(Math.random() * chars.length);
    password += chars[randomIndex];
  }

  // Return the generated password
  return password;
}

// Call the function to generate a new password
const password = generatePassword();
console.log(password);