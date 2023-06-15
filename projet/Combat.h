#ifndef COMBAT_H
#define COMBAT_H

#include <string>
#include "Boxeur.h"

namespace Combat {

    class Combat {
    private:
        const std::string niveau;
        Boxeur::Boxeur* coinBleu;
        Boxeur::Boxeur* coinRouge;
        Boxeur::Boxeur* vainqueur;

    public:
        Combat(const std::string& _niveau);
        ~Combat();

        std::string getNiveau() const;
        void setCoinBleu(Boxeur::Boxeur* boxeur);
        void setCoinRouge(Boxeur::Boxeur* boxeur);
        Boxeur::Boxeur* getCoinBleu() const;
        Boxeur::Boxeur* getCoinRouge() const;
        Boxeur::Boxeur* getVainqueur() const;
        Boxeur::Boxeur* DesignerVainqueur(const std::string& couleurCoin);
    };

}

#endif