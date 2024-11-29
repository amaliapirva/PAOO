#include "Angajat.h"

int main() {
    Angajat a1("Ion Popescu", 5000, 10);
    Angajat a2 = a1; // Copy constructor
    Angajat a3("Maria Ionescu", 4000, 5);

    a3 = a1; // Copy assignment operator

    Angajat a4 = std::move(a1); // Move constructor
    Angajat a5("Gheorghe Vasile", 3000, 2);

    a5 = std::move(a4); // Move assignment operator

    a2.AfisareInformatii();
    a3.AfisareInformatii();
    a5.AfisareInformatii();

    return 0;
}
