#include <iostream>
#include "Boxeur.h"

int main() {
    Boxeur::Boxeur boxeur_1("Rolando Romero", 75);
    std::cout << "Adresse de boxeur_1 : " << &boxeur_1 << std::endl;
    std::cout << "Nom de boxeur_1 : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids de boxeur_1 : " << boxeur_1.getPoids() << " kg \n" << std::endl;

    Boxeur::Boxeur* boxeur_2 = new Boxeur::Boxeur("Alberto Puello", 78);
    std::cout << "Adresse du boxeur rouge : " << boxeur_2 << std::endl;
    std::cout << "Nom du boxeur rouge : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids du boxeur rouge : " << boxeur_2->getPoids() << " kg\n" << std::endl;

    delete boxeur_2;  

    return 0;
}