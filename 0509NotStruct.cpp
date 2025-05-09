#include <iostream>
#include <cstdlib>
#include <random>

int main()
{
    // 非構造化プログラム
    // ───────────────────────────────────
    // ループ・・・goto文で実装
    // if/else文とgoto文による制御
    // ───────────────────────────────────

    std::mt19937 gen;
    std::uniform_int_distribution<> dist(1, 100);
    int secret = dist(gen); // Random int number ranged from 1 to 100.
    int guess = 0;
    int iteration = 0;

start: // Start 'Number Guess'
    std::cout << "Input a number ranged from 1 to 100 : ";
    std::cin >> guess;
    iteration++; // +1 time of # guess.

    if (guess < secret)
    {
        std::cout << "Guess number is higher than your input's.\n";
        goto start; // Return Line 19.
    }
    else if (guess > secret)
    {
        std::cout << "Guess number is lower than your input's.\n";
        goto start; // Return Line 19.
    }
    else
    {
        std::cout << "Correct! " << iteration << " times you guessed.\n";
        goto end; // End of loop and go to end.
    }

end:
    return 0;
}
