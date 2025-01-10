#include "linked_list.hpp"
#include <iostream>

int main() {
    linked_list list;

    // Teste: Inserção no início
    list.push_back(10);
    list.push_back(100);
    list.push_back(300);
    std::cout << "Após push_front: ";
    std::cout << "Tamanho: " << list.size() << "\n"; // Deve ser 3
    std::cout << "get_at(0): " << list.get_at(0) << std::endl; // deve ser 10
    std::cout << "get_at(1): " << list.get_at(1) << std::endl; // deve ser 100
    std::cout << "get_at(2): " << list.get_at(2) << std::endl; // deve ser 300
    std::cout << "\n";
    list.remove(100);
    std::cout << "Tamanho: " << list.size() << "\n"; // Deve ser 2
    std::cout << "get_at(0): " << list.get_at(0) << std::endl; // deve ser 10
    std::cout << "get_at(1): " << list.get_at(1) << std::endl; // deve ser 300
    //std::cout << "Ocorrencias do número 10: " << list.count(40) << "\n"; // Deve ser 2
    //std::cout << "Test find(191) indice: " << list.find(191) << "\n"; // Deve ser 2

    return 0;
}
