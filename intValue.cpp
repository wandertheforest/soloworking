#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

class Int {
    private:
        int value;
    public:
        Int() : value (0) {}
        Int (int v) : value(v) {}

        void zeroValue() {value = 0; }
        void setValue(int v) { value = v; }


        void showValue() const { std::cout << value; }
        int getValue() const { return value;}

        Int add(const Int& other) const {
            return Int(value + other.value);
        }

};


int main(){
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif


    
    int firstNum = 0;
    int secondNum = 0;
    std::cout << "Введите первое слагаемое: "; std::cin >> firstNum;
    std::cout << "\nВведите второе слагаемое: "; std::cin >> secondNum;
    Int a(firstNum);
    Int b(secondNum);
    Int c;

    c = a.add(b);

    std::cout << "a = "; a.showValue(); std::cout << "\n";
    std::cout << "b = "; b.showValue(); std::cout << "\n";
    std::cout << "a + b = "; c.showValue(); std::cout << "\n";

    return 0;
}