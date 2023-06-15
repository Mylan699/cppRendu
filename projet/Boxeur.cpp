#include "Boxeur.h"
#include <iostream>

namespace Boxeur {

    Boxeur::Boxeur(const std::string& _nom, double _poids) : nom(_nom), poids(_poids) {
        std::cout << "********************************** " << std::endl;
        std::cout << "Info sur le boxeur : " << nom << std::endl;
        std::cout << "********************************** " << std::endl;

    }

    Boxeur::~Boxeur() {
        std::cout << "Le boxeur detruit est  " << nom << std::endl;
    }

    std::string Boxeur::getNom() const {
        return nom;
    }

    double Boxeur::getPoids() const {
        return poids;
    }

    void Boxeur::setPoids(double _poids) {
        poids = _poids;
    }

}