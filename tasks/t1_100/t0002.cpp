//
// Created by DEVELOPER on 27.10.2021.
//

#include <iostream>

int main() {
    int N;
    std::cin >> N;
    N < 1 ? std::cout << 1 << std::endl : std::cout << (N+1)*N/2 << std::endl;
}