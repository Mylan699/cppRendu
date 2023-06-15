#ifndef COMBAT_H
#define COMBAT_H

#include <string>

namespace Combat {

    class Combat {
    private:
        const std::string niveau;

    public:
        Combat(const std::string& _niveau);
        ~Combat();

        std::string getNiveau() const;
    };

} // namespace CombatNamespace

#endif // COMBAT_H