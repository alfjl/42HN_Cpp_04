#pragma once

#include "AMateria.hpp"

class   Ice : public AMateria
{
public:
    Ice(void);
    Ice(const Ice &other);
    virtual ~Ice(void);

    Ice         &operator=(const Ice &src);
    
    std::string const   &getType() const; // Returns the Materia type

    AMateria    *clone(void) const;
    void        use(ICharacter &target);
};
