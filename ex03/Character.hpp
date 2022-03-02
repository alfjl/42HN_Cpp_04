#pragma once

#include "ICharacter.hpp"

class   Character : public ICharacter
{
private:
    std::string _name;
    AMateria    *_inventory[4];
    AMateria    *_mapOfLostStuff[1000];

    Character(void);

public:
    Character(const std::string name);
    Character(const Character &other);
    ~Character(void);

    Character   &operator=(const Character &src);

    std::string const   &getName(void) const;
    void    equip(AMateria *m);
    void    unequip(int idx);
    void    drop_to_floor(AMateria *m);
    void    use(int idx, ICharacter &target);
    void    empty_inventory(void);
    void    empty_mapOfLostStuff(void);
};
