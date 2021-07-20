#include <iostream>

/*
Кролик сидит на нулевой ступеньке большой лестницы. Он может прыгать на 1, 2 или 3 ступеньки вверх.
Кролик хочет допрыгать до n-й ступеньки, но может сделать это большим количеством способов.
Напишите рекурсивную функцию, которая принимает число n типа int, а возвращает количество способов,
 которыми кролик может доскакать до n-й ступеньки.
 */

bool CheckStair(int a) {
    return a > 0;
}

int Count(int a) {
    if (a < 0) {
        return 0;
    } else if (a == 1 || a == 0) {
        return 1;
    } else {
        return Count(a - 1) + Count(a - 2) + Count(a - 3);
    }
}

int main() {

    int n;
    std::cout << "Input stair number" << std::endl;
    std::cin >> n;

    if(CheckStair(n)) {
        std::cout << Count(n) << std::endl;
    } else {
        std::cout << "Wrong input" << std::endl;
    }

    return 0;
}
