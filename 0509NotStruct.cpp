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
    int secret = dist(gen); // 1〜100 の乱数
    int guess = 0;
    int iteration = 0;

start: // Number Guessの開始
    std::cout << "Input a number ranged from 1 to 100 : ";
    std::cin >> guess;
    iteration++;

    if (guess < secret)
    {
        std::cout << "Guess number is higher than your input's.\n";
        goto start;
    }
    else if (guess > secret)
    {
        std::cout << "Guess number is lower than your input's.\n";
        goto start;
    }
    else
    {
        std::cout << "Correct! " << iteration << " times you guessed.\n";
        // 状況終了
        goto end;
    }

end:
    return 0;
}
