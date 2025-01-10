#include "linked_list.hpp"
#include <iostream>

//Construtor

linked_list::linked_list(){
    this->head = nullptr;
    this->tail = nullptr;
    this->size_= 0;
}

linked_list::~linked_list(){
    int_node *current = this->head;
    while(current!=nullptr){
        int_node *proximo = current->next;
        delete current;
        current = proximo;
    }
    this->head = nullptr;
    this->tail = nullptr;
}

unsigned int linked_list::size() const{
    return this->size_;
}

int linked_list::get_at(unsigned int index){
    if (index>size_ || index<0)
        return -1;
    
    int_node *current = this->head;
    for (unsigned int i = 0; i<index; i++)
        current = current->next;
    return current->value;
}

void linked_list::push_front(int value){
    int_node *new_node = new int_node;
    new_node->value = value;
    new_node->next = this->head;
    new_node->prev = nullptr;
    if(this->head==nullptr)
        this->tail = new_node;
    else   
        this->head->prev = new_node;
    this->head = new_node;
    this->size_++;
}

void linked_list::push_back(int value){
    int_node *new_node = new int_node;
    new_node->value = value;
    new_node->next = nullptr;
    new_node->prev = this->tail;
    if (this->head==nullptr)
        this->head = new_node;
    else
        this->tail->next = new_node;
    this->tail = new_node;
    this->size_++;
}

void linked_list::pop_back(){
    if(this->tail==nullptr)
        return;
    if(this->head==this->tail){
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
    } else {
        int_node *to_delete = this->tail;
        this->tail = this->tail->prev;
        this->tail->next = nullptr;
        delete to_delete;
    }
    this->size_--;
}

void linked_list::pop_front(){
    if(this->head==nullptr)
        return;
    if(this->head==this->tail){
        delete this->head;
        this->head = nullptr;
        this->tail = nullptr;
    } else{
        int_node *to_delete = this->head;
        this->head = this->head->next;
        this->head->prev = nullptr;
        delete to_delete;
    }

    this->size_--;
}

int linked_list::back(){
    return this->tail->value;
}

int linked_list::front(){
    return this->head->value;
}