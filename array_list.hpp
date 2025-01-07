#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

class array_list {
private:
    int* data;                // Ponteiro para o array dinâmico
    unsigned int size_;       // Quantidade de elementos armazenados
    unsigned int capacity_;   // Capacidade total do array
    void increase_capacity(); // Método privado para aumentar a capacidade do array

public:
    // Construtor e destrutor
    array_list(unsigned int initial_capacity = 100);
    ~array_list();

    // Métodos básicos
    unsigned int size() const;         // Retorna o número de elementos no vetor
    unsigned int capacity() const;     // Retorna a capacidade total do vetor
    double percent_occupied() const;   // Percentual da capacidade ocupada
    int get_at(unsigned int index);
    void push_back(int value);
    void push_front(int value);

};

#endif // __ARRAY_LIST_IFRN__