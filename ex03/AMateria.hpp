#pragma once

#include "ICharacter.hpp"

class   ICharacter;

class   AMateria
{
protected:
    std::string _type;

public:
    AMateria(void);
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    virtual ~AMateria(void);

    AMateria            &operator=(const AMateria &src);
    
    std::string const   &getType() const; // Returns the Materia type

    virtual AMateria    *clone(void) const = 0;
    virtual void        use(ICharacter &target);
};
