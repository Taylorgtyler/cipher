# Cipher - Caesar Cipher Encryption and Decryption

Cipher is a C++ program that allows you to encrypt and decrypt text using the Caesar Cipher encryption algorithm.

Eventually this will be made into a time based challenge game.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
  - [Encrypting Text](#encrypting-text)
  - [Decrypting Text](#decrypting-text)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

### Prerequisites

Before using Cipher, make sure you have the following prerequisites installed on your system:

- C++ compiler (e.g., g++ or clang++)
- Git (optional, for cloning the repository)

### Installation

1. Clone the Cipher repository to your local machine (if you haven't already):

```
git clone https://github.com/yourusername/cipher.git
```

2. Compile the program using your C++ compiler:

```
g++ cipher/main.cpp cipher/encryptor.cpp -o cipher_program
```

or

```
clang cipher/main.cpp cipher/encryptor.cpp -o cipher_program
```

## Usage

### Encrypting Text

To encrypt text, run the program and choose the "Start" option. Enter the text you want to encrypt and a shift value (0-25) when prompted. The program will display the encrypted text.

### Decrypting Text

To decrypt text, select the "Start" option, and enter the Caesar Cipher encrypted text along with the correct shift value. The program will decrypt the text and display the original message.

## Contributing

Contributions to Cipher are welcome! If you'd like to contribute, please follow these guidelines:

- Fork the repository.
- Create a new branch for your changes: `git checkout -b feature/your-feature`.
- Make your changes and commit them: `git commit -m 'Add new feature'`.
- Push your changes to your fork: `git push origin feature/your-feature`.
- Create a pull request, explaining your changes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
