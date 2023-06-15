#include "Combat.h"
#include <iostream>

namespace Combat {

    Combat::Combat(const std::string& _niveau) : niveau(_niveau), coinBleu(nullptr), coinRouge(nullptr), vainqueur(nullptr) {
        std::cout << "Niveau du combat : " << niveau << std::endl;
    }

    Combat::~Combat() {
        std::cout << "Fin du combat de niveau : " << niveau << std::endl;
    }

    std::string Combat::getNiveau() const {
        return niveau;
    }

    void Combat::setCoinBleu(Boxeur::Boxeur* boxeur) {
        if (boxeur != coinRouge) {
            coinBleu = boxeur;
        }
        else {
            std::cout << "Erreur : Le même boxeur est déjà dans le coin rouge." << std::endl;
        }
    }

    void Combat::setCoinRouge(Boxeur::Boxeur* boxeur) {
        if (boxeur != coinBleu) {
            coinRouge = boxeur;
        }
        else {
            std::cout << "Erreur : Le même boxeur est déjà dans le coin bleu." << std::endl;
        }
    }

    Boxeur::Boxeur* Combat::getCoinBleu() const {
        return coinBleu;
    }

    Boxeur::Boxeur* Combat::getCoinRouge() const {
        return coinRouge;
    }

    Boxeur::Boxeur* Combat::getVainqueur() const {
        return vainqueur;
    }

    Boxeur::Boxeur* Combat::DesignerVainqueur(const std::string& couleurCoin) {
        if (couleurCoin == "bleu") {
            vainqueur = coinBleu;
        }
        else if (couleurCoin == "rouge") {
            vainqueur = coinRouge;
        }
        else {
            vainqueur = nullptr;
        }
        return vainqueur;
    }

}