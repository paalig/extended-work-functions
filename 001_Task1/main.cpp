#include <iostream>
#include <vector>
/*
 Напишите функцию swapvec, принимающую std::vector<int> и указатель на массив переменных типа int (одного размера)
 и обменивающую значения этих массивов.
 */

void Swapvec(std::vector<int>& vec, int* a) {
    for (int i = 0; i < vec.size(); i++) {
        int temp = vec[i];
        vec[i] = a[i];
        a[i] = temp;
    }
}

int main() {
    std::vector<int> a = {6,7,8,9,10};
    int b[] = {1,2,3,4,5};
    int* pb = b;

    Swapvec(a, pb);

    for(int i = 0; i < a.size(); i++)
        std::cout << a[i];
    std::cout << std::endl;
    for(int i = 0; i < a.size(); i++)
        std::cout << b[i];

    return 0;
}
