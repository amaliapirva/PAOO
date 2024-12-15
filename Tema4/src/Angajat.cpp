#include "Angajat.h"
#include <memory> // Pentru std::unique_ptr

// Constructor cu inițializare
Angajat::Angajat(const std::string& nume, double salariu, int ani_munca)
    : nume(nume), salariu(salariu), ani_munca(ani_munca) {
    // Alocăm o resursă folosind un obiect RAII (std::unique_ptr)
    proiect = std::make_unique<std::string>("Proiect initial");
    std::cout << "Constructor apelat pentru angajat: " << this->nume << "\n";
}

// Destructor
Angajat::~Angajat() {
    std::cout << "Destructor apelat pentru angajat: " << nume << "\n";
}

// Copy constructor
Angajat::Angajat(const Angajat& other)
    : nume(other.nume), salariu(other.salariu), ani_munca(other.ani_munca) {
    if (other.proiect) {
        proiect = std::make_unique<std::string>(*other.proiect); // Copiem resursa
    }
    std::cout << "Copy constructor apelat pentru angajat: " << nume << "\n";
}

// Move constructor
Angajat::Angajat(Angajat&& other) noexcept
    : nume(std::move(other.nume)),
      salariu(other.salariu),
      ani_munca(other.ani_munca),
      proiect(std::move(other.proiect)) {
    std::cout << "Move constructor apelat pentru angajat: " << nume << "\n";
    other.salariu = 0.0;
    other.ani_munca = 0;
}

// Copy assignment operator
Angajat& Angajat::operator=(const Angajat& other) {
    if (this == &other) {
        std::cout << "Self-assignment evitat în operator= pentru angajat: " << nume << "\n";
        return *this;
    }

    // Copiem toate părțile obiectului, inclusiv resursa
    nume = other.nume;
    salariu = other.salariu;
    ani_munca = other.ani_munca;

    if (other.proiect) {
        proiect = std::make_unique<std::string>(*other.proiect); // Copiere resursă
    } else {
        proiect.reset();
    }

    std::cout << "Copy assignment operator apelat pentru angajat: " << nume << "\n";
    return *this;
}

// Move assignment operator
Angajat& Angajat::operator=(Angajat&& other) noexcept {
    if (this == &other) {
        std::cout << "Self-assignment evitat în operator= (move) pentru angajat: " << nume << "\n";
        return *this;
    }

    // Mutăm toate părțile obiectului
    nume = std::move(other.nume);
    salariu = other.salariu;
    ani_munca = other.ani_munca;
    proiect = std::move(other.proiect); // Mutăm resursa

    // Resetăm valorile obiectului sursă
    other.salariu = 0.0;
    other.ani_munca = 0;

    std::cout << "Move assignment operator apelat pentru angajat: " << nume << "\n";
    return *this;
}

// Metodă pentru afișarea informațiilor angajatului
void Angajat::AfisareInformatii() const {
    std::cout << "Nume: " << nume << ", Salariu: " << salariu
              << ", Ani de munca: " << ani_munca
              << ", Proiect: " << (proiect ? *proiect : "N/A") << "\n";
}
