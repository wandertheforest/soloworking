#include <iostream>


int main(){
    const int SIZE = 6;
    double sales[SIZE];
    std::cout << "Введите объем продаж на каждый из шести дней\n";
    for ( int i = 0; i < SIZE; i++ ){
        std::cin >> sales[i];
    }
    double total = 0;
    for ( int j = 0; j < SIZE; j++ ){
        total += sales[j];
    }

    double average = total / SIZE;
    
    std::cout << "Средний объем: " << average << std::endl;
}