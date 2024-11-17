#ifndef ANGAJAT_H
#define ANGAJAT_H

#include <iostream>
#include <string>

class Angajat {
private:
    std::string nume;
    double salariu;
    int ani_munca;

public:
    // Constructor cu inițializare
    Angajat(const std::string& nume, double salariu, int ani_munca);

    // Destructor
    ~Angajat();

    // Copy constructor
    Angajat(const Angajat& other);

    // Move constructor
    Angajat(Angajat&& other) noexcept;

    // Copy assignment operator dezactivat
    Angajat& operator=(const Angajat& other) = delete;

    // Move assignment operator dezactivat
    Angajat& operator=(Angajat&& other) = delete;

    // Metodă pentru afișarea informațiilor angajatului
    void AfisareInformatii() const;
};

#endif // ANGAJAT_H