#include <iostream>
#include <string>

class Boxeur {
private:
    const std::string nom;
    double poids;

public:
    Boxeur(const std::string& _nom, double _poids) : nom(_nom), poids(_poids) {
        std::cout << "Info sur le boxeur : " << nom << std::endl;
    }

    ~Boxeur() {
        std::cout << "Le prochain boxeur a faire son entree sur le ring, un maximum de bruit pour " << nom << std::endl;
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
    Boxeur boxeur_1("Rolando Romero", 75);
    std::cout << "Adresse du  boxeur bleu : " << &boxeur_1 << std::endl;
    std::cout << "Nom du boxeur bleu : " << boxeur_1.getNom() << std::endl;
    std::cout << "Poids de boxeur blru : " << boxeur_1.getPoids() << " kg\n" << std::endl;

    Boxeur* boxeur_2 = new Boxeur("Alberto Puello", 78);
    std::cout << "Adresse du boxeur rouge : " << boxeur_2 << std::endl;
    std::cout << "Nom du boxeur rouge : " << boxeur_2->getNom() << std::endl;
    std::cout << "Poids du boxeur rouge: " << boxeur_2->getPoids() << " kg\n" << std::endl;

    delete boxeur_2;  

    return 0;
}