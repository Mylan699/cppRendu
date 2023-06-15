#ifndef BOXEUR_H
#define BOXEUR_H

#include <string>

namespace Boxeur {

    class Boxeur {
    private:
        const std::string nom;
        double poids;

    public:
        Boxeur(const std::string& _nom, double _poids);
        ~Boxeur();

        std::string getNom() const;
        double getPoids() const;
        void setPoids(double _poids);
    };

} 

#endif 