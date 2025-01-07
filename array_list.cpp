#include "array_list.hpp" 
#include <iostream>       

// Construtor
array_list::array_list(unsigned int initial_capacity)
    : size_(0), capacity_(initial_capacity) {
    data = new int[capacity_]; // Aloca memória para o array dinâmico
}

// Destrutor
array_list::~array_list() {
    delete[] data; // Libera a memória alocada
}

// Caso o size_ seja igual ao capacity_ será chamada e irá aumentar o tamanho do array
void array_list::increase_capacity(){
    int * new_data = new int[this->capacity_+10];
    for (unsigned int i=0; i<this->size_; ++i)
        new_data[i] = data[i];
    delete [] this->data;
    this->data = new_data;
    this->capacity_ = this->capacity_+10;
}

// Retorna o número de elementos armazenados
unsigned int array_list::size() const {
    return this->size_;
}

// Retorna a capacidade total do array
unsigned int array_list::capacity() const {
    return this->capacity_;
}

// Retorna o percentual de ocupação (0.0 a 1.0)
double array_list::percent_occupied() const {
    if (this->capacity_ == 0) return 0.0; // Evita divisão por zero
    return static_cast<double>(this->size_) / this->capacity_;
}

int array_list::get_at(unsigned int index){
    return data[index];
}

// Irá adicionar no final do array um valor
void array_list::push_back(int value){
    if (this->size_==this->capacity_)
        increase_capacity();
    
    this->data[this->size_] = value;
    this->size_ = this->size_ + 1;
}

void array_list::push_front(int value){
    if (this->size_==this->capacity_)
        increase_capacity();
    
    for (unsigned int i = this->size_; i>0; --i)
        data[i] = data[i-1];
    
    data[0] = value;

    this->size_ = this->size_ + 1;
}