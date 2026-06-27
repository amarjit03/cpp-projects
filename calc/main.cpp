#include <iostream>

int main()
{
    int choice;

    double num1, num2, result;

    while (true)
    {
        std::cout << "++++++++++++++++++\n";
        std::cout << "Simple Calculator\n";
        std::cout << "++++++++++++++++++\n\n";

        std::cout << "1 Add\n";
        std::cout << "2 Sub\n";
        std::cout << "3 Mul\n";
        std::cout << "4 Div\n";
        std::cout << "5 Exit\n";

        std::cout << "Choose an Option\n";
        std::cin >> choice;

        std::cout << "you have selected : " << choice << "\n";

        std::cout << "Enter your first number\n";

        std::cin >> num1;

        std::cout << "Enter your second number\n";

        std::cin >> num2;

        if (choice == 1)
        {
            result = num1 + num2;
        }

        else if (choice == 2)
        {
            result = num1 - num2;
        }

        else if (choice == 3)
        {
            result = num1 * num2;
        }

        else if (choice == 4)
        {
            result = num1 / num2;
        }

        else
        {
            std::cout << "Invalid Choice \n";
        }

        std::cout << "\nresult : " << result << "\n";
    }

    return 0;
}