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
    
    bool insert_at(unsigned int index, int value); // Insere o value no indice index
    bool remove_at(unsigned int index);// Remove o elemento do indice index
    int get_at(unsigned int index);    // Retorna o elemento do indice escolhido
    
    void push_back(int value);         // Adiciona um elemento no final do array
    void push_front(int value);        // Adiciona um elemento no inicio do array
    bool pop_back();                   // Remove o último elemento
    bool pop_front();                  // Remove o primeiro elemento
    int back();                        // Retorna o último elemento
    int front();                       // Retorna o primeiro elemento 
    int find(int value);               // Retorna o indice do elemento e caso não esteja presente retorna -1
    int count(int value);              // Retorna a quantidade de ocorrencias de um valor 
    int sum();                         // Retorna a soma dos elementos do array
};

#endif // __ARRAY_LIST_IFRN__