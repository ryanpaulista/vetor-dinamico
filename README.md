# vetor-dinamico
O trabalho consiste em duas classes: array_list e linked_list\
array_list é uma classe que cria um vetor utilizando alocação dinâmica\
linked_list é uma classe que cria um vetor utilizando lista duplamente ligada                                                                                        

# Como realizar os testes?
Para realizar testes basta apenas compilar o arquivo de teste juntamente com o arquivo da classe, por exemplo:\
"g++ -Wall arquivo-teste.cpp -o arquivo-teste array_list.cpp"\
"g++ -Wall arquivo-teste.cpp -o arquivo-teste linked_list.cpp"\

Para usar os arquivos de testes já existentes, é necessário somente executar o arquvivo:\

"./test-pushback-array-list03 < ./tests/push/e1.txt"

Caso queira testar o array_list com diferentes fatores de crescimento é necessário alterar a capacidade inicial e o fator de crescimento dentro do arquivo array_list.cpp no método increase_capacity()\

Iniciando com tamanho 1000 e crescendo de 1000 em 1000:
```cpp
array_list::array_list(){
    size_ = 0; 
    capacity_ = 1000; // Caso queira testar com outros valores troque o valor 1000
    data = new int[1000]; // Caso queira testar com outros valores troque o valor 1000 
}

[...]

void array_list::increase_capacity(){
    int * new_data = new int[this->capacity_+1000]; // Caso queira testar com outros valores troque o valor 1000
    for (unsigned int i=0; i<this->size_; ++i)      
        new_data[i] = data[i];
    delete [] this->data;
    this->data = new_data;
    this->capacity_ = this->capacity_+1000; // Caso queira testar com outros valores troque o valor 1000
}
```
# Resultados:
Para visualizar os testes acesse a planilha a baixo, nela possui gráficos que comparam as duas classes e as variações do array_list.\
https://docs.google.com/spreadsheets/d/1BJjnfkrFIyEx7gVfpW6MUXNBikkg4jE6wdLermugVds/edit?usp=sharing \
Com base nesses resultados podemos entender que:
- O linked_list é mais eficiente no método push_front e no push_back a diferença é pouca para o array_list com a sua capacidade se duplicando(para altos valores é o mais eficiente da classe array_list) quando necessário. Sendo assim, para métodos que adicionam valores podemos considerar a linked_list a mais viável.
