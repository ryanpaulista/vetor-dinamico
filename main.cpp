#include "linked_list.hpp"
#include <iostream>

int main() {
    linked_list list;

    // Teste: Inserção no início
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    std::cout << "Após push_front: ";
    std::cout << "Tamanho: " << list.size() << "\n"; // Deve ser 3
    std::cout << "get_at(0): " << list.get_at(0) << std::endl; // deve ser 10
    std::cout << "get_at(1): " << list.get_at(1) << std::endl; // deve ser 20
    std::cout << "get_at(2): " << list.get_at(2) << std::endl; // deve ser 30
    list.remove_at(1);
    std::cout << "\n";
    std::cout << "get_at(0): " << list.get_at(0) << std::endl; // deve ser 10
    std::cout << "get_at(1): " << list.get_at(1) << std::endl; // deve ser 30
    std::cout << "Tamanho: " << list.size() << "\n"; // Deve ser 2

    return 0;
}
