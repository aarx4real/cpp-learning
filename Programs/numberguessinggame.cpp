#include <iostream>
#include <ctime>

int main()
{

    srand(time(NULL));

    std::cout << "Guess the number(1-100) : ";

    int random = (rand() % 100) + 1;
    int guess;

    do
    {
        std::cin >> guess;

        if (guess == random)
        {
            std::cout << "Correct Guess!";
        }
        else if (guess > random)
        {
            std::cout << "Guess Lower! : ";
        }
        else
        {
            std::cout << "Guess Higher! : ";
        }

    } while (random != guess);

    return 0;
}