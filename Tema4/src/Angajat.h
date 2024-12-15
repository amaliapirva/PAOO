#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <iostream>
#include <string>
#include <memory> // Pentru std::unique_ptr

class Angajat {
private:
    std::string nume;
    double salariu;
    int ani_munca;
    std::unique_ptr<std::string> proiect; // Gestionare resursă

public:
    // Constructor cu inițializare
    Angajat(const std::string& nume, double salariu, int ani_munca);

    // Destructor
    ~Angajat();

    // Copy constructor
    Angajat(const Angajat& other);

    // Move constructor
    Angajat(Angajat&& other) noexcept;

    // Copy assignment operator
    Angajat& operator=(const Angajat& other);

    // Move assignment operator
    Angajat& operator=(Angajat&& other) noexcept;

    // Metodă pentru afișarea informațiilor angajatului
    void AfisareInformatii() const;
};

#endif // ANGAJAT_H