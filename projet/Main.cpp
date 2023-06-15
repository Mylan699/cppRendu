#include <iostream>
#include "Boxeur.h"
#include "Combat.h"

void printSeparator() {
    std::cout << "----------------------------------------" << std::endl;
}

int main() {
    Boxeur::Boxeur boxeur_1("Rolando Romero", 75);
    Boxeur::Boxeur* boxeur_2 = new Boxeur::Boxeur("Alberto Puello", 78);

    Combat::Combat combat_1("Combat n1 : 1/8e");

    printSeparator();
    std::cout << "          AFFICHE DU COMBAT          " << std::endl;
    printSeparator();

    std::cout << "BOXEUR BLEU" << std::endl;
    std::cout << "Nom    : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids  : " << boxeur_1.getPoids() << " kg" << std::endl;

    printSeparator();

    std::cout << "BOXEUR ROUGE" << std::endl;
    std::cout << "Nom    : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids  : " << boxeur_2->getPoids() << " kg" << std::endl;

    printSeparator();

    std::cout << "COMBAT" << std::endl;
    std::cout << "Niveau : " << combat_1.getNiveau() << std::endl;

    combat_1.setCoinBleu(&boxeur_1);
    combat_1.setCoinRouge(boxeur_2);

    printSeparator();

    std::cout << "AFFICHE DU COMBAT" << std::endl;

    std::cout << "Boxeur bleu  : " << combat_1.getCoinBleu()->getNom() << std::endl;
    std::cout << "VS" << std::endl;
    std::cout << "Boxeur rouge : " << combat_1.getCoinRouge()->getNom() << std::endl;

    printSeparator();

    Boxeur::Boxeur* vainqueur = combat_1.DesignerVainqueur("bleu");
    if (vainqueur != nullptr) {
        std::cout << "VAINQUEUR : " << vainqueur->getNom() << std::endl;
    }
    else {
        std::cout << "Aucun vainqueur désigné." << std::endl;
    }

    delete boxeur_2;

    return 0;
}