#include "Angajat.h"

int main() {
    // Creăm un obiect Angajat folosind constructorul
    Angajat ang1("Ion Popescu", 5000.0, 10);
    ang1.AfisareInformatii();

    // Testăm copy constructor
    Angajat ang2 = ang1;
    ang2.AfisareInformatii();

    // Testăm move constructor
    Angajat ang3 = std::move(ang1);
    ang3.AfisareInformatii();

    // Testăm copy assignment operator
    Angajat ang4("Ana Ionescu", 4000.0, 5);
    ang4 = ang2;
    ang4.AfisareInformatii();

    // Testăm move assignment operator
    Angajat ang5("Maria Vasile", 4500.0, 8);
    ang5 = std::move(ang3);
    ang5.AfisareInformatii();

    // Verificăm dacă obiectele mutate sunt resetate
    std::cout << "După mutare: \n";
    ang1.AfisareInformatii(); // Ar trebui să fie gol/resetat
    ang3.AfisareInformatii(); // Ar trebui să fie gol/resetat

    return 0;
}
