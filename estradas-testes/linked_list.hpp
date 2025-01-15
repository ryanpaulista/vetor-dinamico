#ifndef __ARRAY_LIST_IFRN__
#define __ARRAY_LIST_IFRN__

class linked_list {

private:
    struct int_node{
        int value;
        int_node *next, *prev;
    };
    int_node *head, *tail;
    unsigned int size_;
public:
    linked_list();                                              //Construtor
    ~linked_list();                                             //Destrutor

    unsigned int size() const;                                  // Retorna o tamanho do array

    bool insert_at(unsigned int index, int value);              // Adiciona value no index
    bool remove_at(unsigned int index);                         // Remove o elemento do index
    int get_at(unsigned int index);                             // Retorna elemento no índice index, −1 se índice inválido

    void clear();                                               // Limpa o array
    void push_front(int value);                                 // Adiciona value no inicio do vetor
    void push_back(int value);                                  // Adiciona value no final do vetor
    void pop_back();                                            // Remove o último elemento do vator
    void pop_front();                                           // Remove o primeiro elemento do vetor
    int back();                                                 // Retorna o elemento do final do vetor
    int front();                                                // Retorna o elemento do início do vetor
    bool remove(int value);                                     // Remove o value do vetor
    int find(int value);                                        // Retorna o índice de value, −1 caso value não esteja presente
    int count(int value);                                       // Retorna a quantidade de aparições de value no vetor
    int sum();                                                  // Retorna a soma de todos os elementos do vetor 
};

#endif // __ARRAY_LIST_IFRN__