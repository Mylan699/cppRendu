#include <iostream>
#include "Boxeur.h"
#include "Combat.h"

int main() {
    Boxeur::Boxeur boxeur_1("Rolando Romero", 75);
    std::cout << "Adresse du boxeur bleu : " << &boxeur_1 << std::endl;
    std::cout << "Nom du boxeur bleu : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids du boxeur bleu : " << boxeur_1.getPoids() << " kg" << std::endl;

    Boxeur::Boxeur* boxeur_2 = new Boxeur::Boxeur("Alberto Puello", 78);
    std::cout << "Adresse du boxeur rouge : " << boxeur_2 << std::endl;
    std::cout << "Nom du boxeur rouge : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids du boxeur rouge : " << boxeur_2->getPoids() << " kg" << std::endl;

    Combat::Combat combat_1("Combat n1 : 1/8e");
    std::cout << "Adresse du combat n1 : " << &combat_1 << std::endl;
    std::cout << "Niveau du combat n1 : " << combat_1.getNiveau() << std::endl;

    combat_1.setCoinBleu(&boxeur_1);
    combat_1.setCoinRouge(boxeur_2);

    std::cout << "Boxeur bleu du combat n1 : " << combat_1.getCoinBleu()->getNom() << std::endl;
    std::cout << "Boxeur rouge du combat n1 : " << combat_1.getCoinRouge()->getNom() << std::endl;

    Boxeur::Boxeur* vainqueur = combat_1.DesignerVainqueur("bleu");
    if (vainqueur != nullptr) {
        std::cout << "Vainqueur du combat n1 : " << vainqueur->getNom() << std::endl;
    }
    else {
        std::cout << "Aucun vainqueur désigné." << std::endl;
    }

    delete boxeur_2;

    return 0;
}