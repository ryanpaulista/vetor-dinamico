# vetor-dinamico
Neste trabalho foram desenvolvidas 2 classes: array_list e linked_list\
array_list é uma classe que cria um vetor utilizando alocação dinâmica e métodos para manipular o array\
linked_list é uma classe que cria um vetor utilizando lista duplamente ligada e métodos para manipulação

Para ver todos os métodos das respectivas classes basta apenas ver os arquivos de cabeçalho "array_list.hpp" e "linked_list.hpp"
# Como realizar os testes?
Para realizar testes basta apenas compilar o arquivo de teste juntamente com o arquivo da classe, por exemplo:\
"g++ -Wall arquivo-teste.cpp -o arquivo-teste array_list.cpp"\
"g++ -Wall arquivo-teste.cpp -o arquivo-teste linked_list.cpp"\

Para usar os arquivos de testes já existentes, é necessário somente executar o comando:\
    "./test-pushback-linked-list03 < ./tests/push/e1.txt"

- test-pushback-array-list-01 -> Fator de crescimento 10\
- test-pushback-array-list-02 -> Fator de crescimento 100\
- test-pushback-array-list-03 -> Fator de crescimento 1000\
- test-pushback-array-list-04 -> Fator de crescimento *2\


Caso queira testar o array_list com diferentes fatores de crescimento é necessário alterar a capacidade inicial e o fator de crescimento dentro do arquivo array_list.cpp no método increase_capacity() e compilar como explicado no início desta seção.\

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
Os arquivos "teste-geral-array-list.cpp" e "teste-geral-linked-list.cpp" são arquivos gerados por IA os quais usam vetores criados pelas tais classes e testam se todos os métodos estão funcionando corretamente.

Para executá-los execute os seguintes comandos:
- "./teste-geral-array-list"
- "./teste-geral-linked-list"

# Resultados:
Para visualizar os testes acesse a planilha a baixo, nela possui gráficos que comparam as duas classes juntamente com as variações do array_list.\
https://docs.google.com/spreadsheets/d/1BJjnfkrFIyEx7gVfpW6MUXNBikkg4jE6wdLermugVds/edit?usp=sharing \
Com base nesses resultados podemos entender que:
- O linked_list é mais eficiente no método push_front e no push_back a diferença é pouca para o array_list com a sua capacidade se duplicando(para altos valores é o mais eficiente da classe array_list) quando necessário. Sendo assim, para métodos que adicionam valores podemos considerar a linked_list a mais viável.
- No método pop_back o array_list é o mais eficiente, pois não é necessário percorrer todo o vetor para adicionarmos um novo elemento no final. Porém no pop_front o linked_list é o mais eficiente, pois não é necessário percorrer todo o vetor para variarmos as suas posições.
