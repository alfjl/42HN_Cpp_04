#pragma once

#include "AMateria.hpp"

class   Cure : public AMateria
{
public:
    Cure(void);
    Cure(const Cure &other);
    virtual ~Cure(void);

    Cure        &operator=(const Cure &src);
    
    std::string const   &getType() const; // Returns the Materia type

    AMateria    *clone(void) const;
    void        use(ICharacter &target);
};
