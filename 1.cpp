#include <iostream>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
        {
            std::cout << " ";
        }

        // Inner loop for printing '*' characters
        for (int k = 1; k <= 2 * i - 1; ++k)
        {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }
    return 0;
}
