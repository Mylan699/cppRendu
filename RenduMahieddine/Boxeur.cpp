#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    // Constructeur
    Boxeur(const std::string& nom, double poids) : nom(nom), poids(poids) {
        std::cout << "Constructeur appel� pour le boxeur " << nom << std::endl;
    }

    // Destructeur
    ~Boxeur() {
        std::cout << "Destructeur appel� pour le boxeur " << nom << std::endl;
    }

    // M�thode pour obtenir le nom du boxeur
    std::string getNom() const {
        return nom;
    }

    // M�thode pour obtenir le poids du boxeur
    double getPoids() const {
        return poids;
    }

    // M�thode pour modifier le poids du boxeur
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};