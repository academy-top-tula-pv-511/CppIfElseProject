#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n < 0)
    {
        n = -n;
    }
        

    if (!(n % 2))
    {
        std::cout << "even\n";
        n = n * 2;
    }
    else
    {
        std::cout << "odd\n";
        n = n * 3;
    }
}
