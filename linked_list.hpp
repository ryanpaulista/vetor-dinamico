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
    linked_list();
    ~linked_list();

    unsigned int size() const;
    // unsigned int capacity();
    // double percent_occupied(); 

    bool insert_at(unsigned int index, int value);
    bool remove_at(unsigned int index);
    int get_at(unsigned int index);

    //void clear();
    void push_front(int value);
    void push_back(int value);
    void pop_back();
    void pop_front();
    int back();
    int front();
    bool remove(int value);
    int find(int value);
    int count(int value);
    int sum();
};

#endif // __ARRAY_LIST_IFRN__