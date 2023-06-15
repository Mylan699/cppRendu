#include "Combat.h"
#include <iostream>

namespace Combat {

    Combat::Combat(const std::string& _niveau) : niveau(_niveau) {
        std::cout << "Niveau du combat : " << niveau << std::endl;
    }

    Combat::~Combat() {
        std::cout << "Fin du combat de niveau : " << niveau << std::endl;
    }

    std::string Combat::getNiveau() const {
        return niveau;
    }

} 