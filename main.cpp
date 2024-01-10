#include <iostream>
#include <string>
#include "encryptor.h"

int main()
{
    std::string text;
    int choice, shift;
    bool keepRunning = true;

    std::cout << "Welcome to the Encryption Program!\n";
    std::cout << "1. Start\n";
    std::cout << "2. Exit\n";
    std::cout << "Choose an option: ";
    std::cin >> choice;

    if (choice != 1)
    {
        std::cout << "Exiting program." << std::endl;
        return 0;
    }

    std::cin.ignore(); // Ignore newline character left in the buffer after reading integer

    while (keepRunning)
    {
        std::cout << "\nEnter text (or type 'exit' to quit): ";
        std::getline(std::cin, text); // Read the entire line

        // Check if the user wants to exit
        if (text == "exit")
        {
            std::cout << "Exiting program." << std::endl;
            break; // Exit the loop and the program
        }

        std::cout << "Enter shift value (0-25): ";
        std::cin >> shift;
        std::cin.ignore(); // Ignore newline character left in the buffer

        std::cout << "1. Encrypt\n";
        std::cout << "2. Decrypt\n";
        std::cout << "3. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;
        std::cin.ignore(); // Ignore newline character left in the buffer

        std::string processedText;

        switch (choice)
        {
        case 1:
            processedText = Encryption::caesarCipher(text, shift);
            std::cout << "Encrypted Text: " << processedText << std::endl;
            break;
        case 2:
            processedText = Encryption::caesarDecipher(text, shift);
            std::cout << "Decrypted Text: " << processedText << std::endl;
            break;
        case 3:
            keepRunning = false;
            std::cout << "Exiting program." << std::endl;
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}