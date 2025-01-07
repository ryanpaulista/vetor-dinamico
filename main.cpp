#include "array_list.hpp"
#include <iostream>

int main() {
    array_list list(3); // Cria o array_list com capacidade inicial de 100

    std::cout << "Capacidade inicial: " << list.capacity() << std::endl;
    std::cout << "Tamanho inicial: " << list.size() << std::endl;
    // std::cout << "Percentual ocupado: " << list.percent_occupied() * 100 << "%" << std::endl;
    list.push_back(5);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_back(5);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_back(5);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    list.push_front(3);
    std::cout << "Tamanho atual: " << list.size() << std::endl;
    std::cout << "Capacidade atual: " << list.capacity() << std::endl;
    std::cout << "Primeiro elemento: " << list.get_at(0) << std::endl;
    std::cout << "Segundo elemento: " << list.get_at(1) << std::endl;

    return 0; // Ao final, o destrutor será chamado automaticamente
}
