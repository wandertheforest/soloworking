#include <iostream>
#include <cstring>   // strlen, strcpy, strcmp

class Team {
private:
    char name[32];     
    int  scores[3];    

public:
    Team(const char* n, int a, int b, int c) {
        std::strcpy(name, n);   // копируем строку в поле
        scores[0] = a;
        scores[1] = b;
        scores[2] = c;
    }

    void show() const {
        std::cout << name << ": "
                  << scores[0] << " " << scores[1] << " " << scores[2] << "\n";
    }

    int total() const {
        return scores[0] + scores[1] + scores[2];
    }


};

int main() {
    Team a("Alpha", 3, 1, 4);
    Team b("Bravo", 1, 5, 9);

    a.show();
    b.show();

    std::cout << "Alpha total: " << a.total() << "\n";
    std::cout << "Bravo total: " << b.total() << "\n";
    return 0;
}