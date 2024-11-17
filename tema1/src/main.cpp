#include "Angajat.h"

int main() {

  Angajat angajat1("Andrei Ionescu", 5000.60, 3);
  angajat1.AfisareInformatii();

  Angajat angajat2=angajat1;
  angajat2.AfisareInformatii();

  Angajat angajat3= std::move(angajat1);
  angajat3.AfisareInformatii();

  angajat1.AfisareInformatii();

  return 0;
}
