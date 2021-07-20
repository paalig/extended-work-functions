#include <iostream>

/*
Кролик сидит на нулевой ступеньке большой лестницы. Он может прыгать на одну или более ступенек вверх, но не далее чем на k.
Кролик хочет допрыгать до n-й ступеньки, но может сделать это большим количеством способов.
Напишите рекурсивную функцию, которая принимает число n типа int и число k — максимальную длину прыжка,
 а возвращает количество способов, которым кролик может доскакать до n-й ступеньки.
Если максимальная длина прыжка не задана — считать её равной трём.
 */
int Count (int a, int k = 3) {
    int count = 0;
    if (a < 0) {
        return 0;
    } else if (a == 1 || a == 0) {
        return 1;
    } else {
        for (int i = k; i > 0; i--) {
            count += Count(a - i, k);
        }
        return count;
    }
}

bool Check(int a) {
    return a > 0;
}

int main() {

    int n;
    int k;

    std::cout << "Input stair number and jump range:" << std::endl;
    std::cin >> n >> k;

    if (Check(n) && Check(k)) {
        std::cout << Count(n, k) << std::endl;
    } else if (Check(n) && !Check(k)){
        std::cout << Count(n) << std::endl;
    } else {
        std::cout << "Wrong input" << std::endl;
    }

    return 0;
}
