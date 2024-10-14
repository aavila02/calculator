#include <iostream>

int main() {
    int num1, num2, output;
    char input;  // Change input to char
    std::cout << "--------------" << std::endl;
    std::cout << "| Calculator |" << std::endl;
    std::cout << "--------------" << std::endl;
    std::cout << std::endl << "Enter an operation (+, -, *, /): ";
    std::cin >> input;

    while (true) {
        switch (input) {
            case '+':
                // Handle addition
                std::cout << "Addition operation selected" << std::endl << "Enter the first number: ";
                std::cin >> num1;
                std::cout << "Enter the second number: ";
                std::cin >> num2;
                
                output = num1 + num2;
                std::cout << std::endl << "Output: " << output << std::endl;
                break;
            case '-':
                // Handle subtraction
                std::cout << "Subtraction operation selected" << std::endl << "Enter the first number: ";
                std::cin >> num1;
                std::cout << "Enter the second number: ";
                std::cin >> num2;

                output = num1 - num2;
                std::cout << std::endl << "Output: " << output << std::endl;
                break;

            case '*':
                // Handle multiplication
                std::cout << "Multiplication operation selected" << std::endl << "Enter the first number: ";
                std::cin >> num1;
                std::cout << "Enter the second number: ";
                std::cin >> num2;
                
                output = num1 * num2;
                std::cout << std::endl << "Output: " << output << std::endl;
                break;

            case '/':
                // Handle division
                std::cout << "Division operation selected" << std::endl << "Enter the first number: ";
                std::cin >> num1;
                std::cout << "Enter the second number: ";
                std::cin >> num2;

                output = num1 / num2;
                std::cout << std::endl << "Output: " << output << std::endl;
                break;

            default:
                std::cout << "Invalid operation!" << std::endl;
                break;
        }

        // Exit the loop for this simple example (otherwise, ask for input again)
        break;
    }

    return 0;
}
