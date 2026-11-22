#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif

class tollBooth {
    private:
        unsigned int cars = 0;
        double revenue;
    public: 
        tollBooth() : cars(0), revenue(0.0) {}

        void payingCar() { ++cars; revenue += 0.50;}
        void noPayingCar() { ++cars; }
        
        void display() {
            std::cout << "Машин проехало: " << cars;
            std::cout << "\nВыручка: " << revenue << "\n";
        }
};

int main(){
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    tollBooth booth;
    char key;

    std::cout << "1 - заплатил, 2 - проехал бесплатно, q - выход\n";

    while ( std::cin >> key ) {
        if ( key == '1' ){
            booth.payingCar();
        } else if (key == '2') {
            booth.noPayingCar();
        } else if (key == 'q' || key == 'Q') {
            break;
        }
    }

    booth.display();

    return 0;
}
