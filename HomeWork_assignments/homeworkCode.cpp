#include <iostream>

int creationOfdecimals(int sum)
{
    if (sum == 0)
    {
        return 0;
    }
    else
    {
        return (sum % 2) + 10 * creationOfdecimals(sum / 2);
    }
}

int main()
{
    int sum;

    std::cout << "Enter int: \n";
    std::cin >> sum;

    std::cout << "Here is number in binary: "
              << creationOfdecimals(sum);

    return 0;
}