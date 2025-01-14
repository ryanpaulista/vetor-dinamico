#include <iostream>
#include "linked_list.hpp"

int main() {
    linked_list list;

    // Teste: push_back
    std::cout << "Testando push_back\n";
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);
    std::cout << "Esperado: 10 20 30\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: push_front
    std::cout << "Testando push_front\n";
    list.push_front(5);
    std::cout << "Esperado: 5 10 20 30\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: insert_at
    std::cout << "Testando insert_at\n";
    list.insert_at(2, 15); // Insere 15 no índice 2
    std::cout << "Esperado: 5 10 15 20 30\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: remove_at
    std::cout << "Testando remove_at\n";
    list.remove_at(3); // Remove o valor no índice 3
    std::cout << "Esperado: 5 10 15 30\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: pop_back
    std::cout << "Testando pop_back\n";
    list.pop_back();
    std::cout << "Esperado: 5 10 15\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: pop_front
    std::cout << "Testando pop_front\n";
    list.pop_front();
    std::cout << "Esperado: 10 15\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: find
    std::cout << "Testando find\n";
    int index = list.find(15);
    std::cout << "Esperado: Índice de 15 = 1\n";
    std::cout << "Obtido: Índice de 15 = " << index << "\n\n";

    // Teste: count
    std::cout << "Testando count\n";
    list.push_back(10);
    int count = list.count(10);
    std::cout << "Esperado: 2\n";
    std::cout << "Obtido: " << count << "\n\n";

    // Teste: remove
    std::cout << "Testando remove\n";
    list.remove(15);
    std::cout << "Esperado: 10 10\n";
    std::cout << "Obtido: ";
    for (unsigned int i = 0; i < list.size(); i++)
        std::cout << list.get_at(i) << " ";
    std::cout << "\n\n";

    // Teste: back
    std::cout << "Testando back\n";
    std::cout << "Esperado: 10\n";
    std::cout << "Obtido: " << list.back() << "\n\n";

    // Teste: front
    std::cout << "Testando front\n";
    std::cout << "Esperado: 10\n";
    std::cout << "Obtido: " << list.front() << "\n\n";

    // Teste: sum
    std::cout << "Testando sum\n";
    int soma = list.sum();
    std::cout << "Esperado: 20\n";
    std::cout << "Obtido: " << soma << "\n\n";

    // Teste: clear
    std::cout << "Testando clear\n";
    list.clear();
    std::cout << "Esperado: Tamanho = 0\n";
    std::cout << "Obtido: Tamanho = " << list.size() << "\n\n";

    return 0;
}
