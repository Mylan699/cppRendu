#include <iostream>
#include <string>

class Boxeur {
private:
    std::string nom;
    double poids;

public:

    Boxeur(const std::string& _nom, double _poids) : nom(_nom), poids(_poids) {
        std::cout << "Info sur le boxeur : " << nom << std::endl;
    }

    ~Boxeur() {
        std::cout << "Le prochain boxeur ... " << nom << std::endl;
    }

    std::string getNom() const {
        return nom;
    }

    double getPoids() const {
        return poids;
    }

    void setPoids(double _poids) {
        poids = _poids;
    }
};

int main() {
    std::string nom;
    double poids;

    std::cout << "Entrez le nom du boxeur : ";
    std::cin >> nom;

    std::cout << "Entrez le poids du boxeur : ";
    std::cin >> poids;

    Boxeur boxeur(nom, poids);

    std::cout << "Nom du boxeur : " << boxeur.getNom() << std::endl;
    std::cout << "Poids du boxeur : " << boxeur.getPoids() << std::endl;

    return 0;
}