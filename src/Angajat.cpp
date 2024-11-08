#include "Angajat.h"
//constructor
Angajat::Angajat(const std::string& nume, double salariu, int ani_munca)
  : nume(nume), salariu(salariu), ani_munca(ani_munca) {
  std::cout<< "Constructor pentru angajati: " << nume << "apelat\n";
}
//destructor
Angajat::~Angajat() {
  std::cout << "Destructor pentru angajat: " << nume << " apelat\n";
}
//copy constructor
Angajat::Angajat(const Angajat& other)
  : nume(other.nume), salariu(other.salariu), ani_munca(other.ani_munca) {
  std::cout<< "Copy constructor apelat pentru angajat:" << nume <<"\n";
}
//move constructor
Angajat::Angajat(Angajat&& other) noexcept
  :nume(std::move(other.nume)), salariu(other.salariu), ani_munca(other.ani_munca) {
      std::cout <<"Move constructor apelat pt angajat" << nume<<"\n";
      other.salariu=0.0;
      other.ani_munca=0;
    }

    //afisare
    void Angajat::AfisareInformatii() const {
      std::cout << "Nume:" << nume << "; Salariu: " << salariu << "; Ani de munca: " << ani_munca << "\n";
    }
