package main

import (
	"fmt"
	"math/rand"
	"time"
)

// Define a function to generate a random password
func generatePassword() string {
	// Define the characters to include in the password
	chars := "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+"
	// The character set includes uppercase and lowercase letters, numbers, and a variety of special characters.

	// Define the password length (between 14 and 16 characters)
	rand.Seed(time.Now().UnixNano())
	length := rand.Intn(3) + 14
	// The password length is randomly generated to be between 14 and 16 characters long.

	// Generate the password by randomly selecting characters from the character set
	password := make([]byte, length)
	for i := 0; i < length; i++ {
		password[i] = chars[rand.Intn(len(chars))]
	}

	// Return the generated password
	return string(password)
}

func main() {
	// Call the function to generate a new password
	password := generatePassword()
	fmt.Println(password)
}