#include <iostream>
#include <Windows.h>

void drawRectangle(int N, int K) {
    system("chcp 1251");
    system("cls");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    int height, width;

    std::cout << "¬вед≥ть висоту пр€мокутника (N): ";
    std::cin >> height;

    std::cout << "¬вед≥ть ширину пр€мокутника (K): ";
    std::cin >> width;

    drawRectangle(height, width);

    return 0;
}
