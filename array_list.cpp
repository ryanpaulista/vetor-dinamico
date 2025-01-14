#include "array_list.hpp" 
#include <iostream>       

// Construtor
array_list::array_list(){
    size_ = 0; 
    capacity_ = 8; 
    data = new int[8]; // Aloca memória para o array dinâmico
}

// Destrutor
array_list::~array_list() {
    delete[] data; // Libera a memória alocada
}

// Caso o size_ seja igual ao capacity_ será chamada e irá aumentar o tamanho do array
void array_list::increase_capacity(){
    int * new_data = new int[this->capacity_+1000];
    for (unsigned int i=0; i<this->size_; ++i)      // O(n)
        new_data[i] = data[i];
    delete [] this->data;
    this->data = new_data;
    this->capacity_ = this->capacity_+1000;
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

// Insere o value no indice index
bool array_list::insert_at(unsigned int index, int value){
    if (index>this->size_){
        return false;
    }

    if (this->size_==this->capacity_)
        increase_capacity();


    for (unsigned int i = this->size_; i>index ; i--)
        data[i]=data[i-1];

    data[index]=value;

    this->size_++;
    return true;
}

// Remove o elemento do indice index
bool array_list::remove_at(unsigned int index){
    if(this->size_==0 || index>=this->size_){
        return false;
    }
    for (unsigned int i = index + 1; i < this->size_; ++i) 
        this->data[i - 1] = this->data[i];
    
    this->data[this->size_-1]=0;
    this->size_--;
    return true;
}

// Irá retornar o elemento do indíce escolhido
int array_list::get_at(unsigned int index){
    return data[index];
}

// Remove todos os elementos, deixando o vetor no estado inicial
void array_list::clear(){
    delete[] data;
    size_ = 0; 
    capacity_ = 100; 
    data = new int[100];
}

// Irá adicionar no final do array um valor
void array_list::push_back(int value){
    if (this->size_==this->capacity_)
        increase_capacity();
    
    this->data[this->size_] = value;
    this->size_++;
}

// Irá adicionar no inicio do array um elemento
void array_list::push_front(int value){
    if (this->size_==this->capacity_)
        increase_capacity();
    
    for (unsigned int i = this->size_; i>0; --i)    // O(n)
        data[i] = data[i-1];                    
    
    data[0] = value;

    this->size_ = this->size_ + 1;
}

// Remove o último elemento
bool array_list::pop_back(){
    if (this->size_==0){
        return false;
    } 
    this->size_--;
    return true;
}

// Remove o primeiro elemento
bool array_list::pop_front(){
    if (this->size_==0){
        return false;
    }
    for (unsigned int i = 1; i<this->size_; i++)    //O(nn)
        data[i-1] = data[i];

    this->size_--;
    return true;
}

// Irá retornar o último elemento do array
int array_list::back(){
    return data[this->size_-1];
}

// Irá retornar o primeiro elemento do array
int array_list::front(){
    return data[0];
}

//Remove todas as ocorrencias do valor caso esteja presente no vetor 
bool array_list::remove(int value){
    if(this->size_==0)
        return false;

    bool removed = false; 

    for(unsigned int i=0; i<this->size_;){
        if (data[i]==value){                                //O(n²)
            for(unsigned int j=i; j<this->size_; j++)
                data[i] = data[i+1];
            this->size_--;
            removed = true;
        } else{
            ++i;
        }
    }

    return removed;

}

// Retorna a quantidade de ocorrencias de um valor
int array_list::count(int value){
    int ocorrencias = 0;

    for (unsigned int i = 0; i<this->size_; i++){   //O(n)
        if (value==data[i])
            ocorrencias++;
    }

    return ocorrencias;
}

int array_list::find(int value){
    for (unsigned int i = 0; i<this->size_; i++){   //O(n)
        if (value==data[i]){
            return i;
            break;
        }
    }
    return -1;
}

int array_list::sum(){
    int soma = 0;
    for(unsigned int i = 0; i<this->size_; i++)     //O(n)
        soma = soma + data[i];
    
    return soma;
}