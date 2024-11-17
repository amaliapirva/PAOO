#include<string>
#include<iostream>


class Angajat {

 private:
  std::string nume;
  double salariu;
  int ani_munca;

 public:

  Angajat(const std::string& nume, double salariu, int ani_munca); //constructor

  ~Angajat(); //destructor

  Angajat(const Angajat& other); //copy constructor

  Angajat(Angajat&& other) noexcept; //move constructor

  void AfisareInformatii() const; //incapsulare
};
