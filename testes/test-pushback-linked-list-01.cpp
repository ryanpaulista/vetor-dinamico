#include <iostream>
#include <chrono>
#include "linked_list.hpp"

int main() {
    unsigned int n;
    std::cin >> n;
    linked_list l1;
    auto beg = std::chrono::high_resolution_clock::now();
    for (unsigned int i = 0; i < n; ++i) {
        int x;
        std::cin >> x;
        l1.push_back(x);
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - beg;
    if (not (l1.size() == n)) {
        std::cerr << "[ERROR] check push_back method!\n";
        exit(1);
    }
    std::cerr << "[INFO] " << "Elapsed time for "
        << n << " pushes back :"
        << elapsed.count() << std::endl;
    return 0;
}