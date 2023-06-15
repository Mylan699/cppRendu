#include "Combat.h"
#include <iostream>

namespace Combat {

    Combat::Combat(const std::string& _niveau) : niveau(_niveau) {
        std::cout << "Liste des combat: " <<  std::endl;
    }

    Combat::~Combat() {
        std::cout << "Fin du combat des " << niveau << "\n" << std::endl;
    }

    std::string Combat::getNiveau() const {
        return niveau;
    }

} 