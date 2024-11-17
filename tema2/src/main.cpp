#include "Angajat.h"

int main() {
    // Inițializare folosind constructor
    Angajat angajat1("Ion Popescu", 50000, 5);
    angajat1.AfisareInformatii();

    // Copy constructor
    Angajat angajat2 = angajat1;
    angajat2.AfisareInformatii();

    // Move constructor
    Angajat angajat3 = std::move(angajat1);
    angajat3.AfisareInformatii();

    // Testare pentru copy assignment și move assignment (dezactivate)
    // angajat2 = angajat3;   // Eroare: Copy assignment este dezactivat
    // angajat3 = std::move(angajat2); // Eroare: Move assignment este dezactivat

    return 0;
}
