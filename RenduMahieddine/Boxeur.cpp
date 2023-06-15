#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:
    // Constructeur
    Boxeur(const std::string& nom, double poids) : nom(nom), poids(poids) {
        std::cout << "Constructeur appelé pour le boxeur " << nom << std::endl;
    }

    // Destructeur
    ~Boxeur() {
        std::cout << "Destructeur appelé pour le boxeur " << nom << std::endl;
    }

    // Méthode pour obtenir le nom du boxeur
    std::string getNom() const {
        return nom;
    }

    // Méthode pour obtenir le poids du boxeur
    double getPoids() const {
        return poids;
    }

    // Méthode pour modifier le poids du boxeur
    void setPoids(double nouveauPoids) {
        poids = nouveauPoids;
    }
};