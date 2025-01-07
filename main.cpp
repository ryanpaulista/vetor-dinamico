#include "array_list.hpp"
#include <iostream>

int main() {
    array_list list(3); // Cria o array_list com capacidade inicial de 100

    std::cout << "Capacidade inicial: " << list.capacity() << std::endl;
    std::cout << "Tamanho inicial: " << list.size() << std::endl;
    // std::cout << "Percentual ocupado: " << list.percent_occupied() * 100 << "%" << std::endl;
    list.push_back(2);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_back(3);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_back(4);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_front(1);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    std::cout << "Capacidade atual: " << list.capacity() << std::endl;
    std::cout << "Ultimo elemento: " << list.back() << std::endl;
    list.insert_at(3, 99);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    

    return 0; // Ao final, o destrutor será chamado automaticamente
}
