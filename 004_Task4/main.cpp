#include <iostream>

/*
Напишите рекурсивную функцию, которая принимает большое число n типа long long и переменную ans, а возвращает void.
После завершения работы функции в переменной ans должно оказаться количество чётных цифр в записи числа n.
 */
void Count(long long int& a, int ans) {
    if (a != 0) {
        if (a%2 == 0) {
            ans++;
        }
        a /= 10;
        Count(a, ans);
    } else {
        std::cout << ans << std::endl;
    }
}

int main() {
    long long int n;
    int ans = 0;
    std::cout << "Input number:" << std::endl;
    std::cin >> n;

    Count(n, ans);

    return 0;
}
