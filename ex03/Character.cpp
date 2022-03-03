#include <iostream>
#include "Character.hpp"

Character::Character(void) : _name("DEFAULT")
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    for (int i = 0; i < 1000; i++)
        this->_mapOfLostStuff[i] = nullptr;
    std::cout << "Default constructor for Character class named " << this->_name << " called" << std::endl;
}

Character::Character(const std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
    for (int i = 0; i < 1000; i++)
        this->_mapOfLostStuff[i] = nullptr;
    std::cout << "Argument constructor for Character class named " << this->_name << " called" << std::endl;
}

Character::Character(const Character &other)
{
    *this = other;
    std::cout << "Copy constructor for Character class named " << this->_name << " called" << std::endl;
}

Character::~Character(void)
{
    empty_inventory();
    empty_mapOfLostStuff();
    std::cout << "Destructor for Character class named " << this->_name << " called" << std::endl;
}

Character   &Character::operator=(const Character &src)
{
    this->_name = src._name;
    empty_inventory();
    empty_mapOfLostStuff();
    for (int i = 0; i < 4; i++)
    {
        if (src._inventory[i] != nullptr)
            this->_inventory[i] = src._inventory[i]->clone();
    }
    for (int i = 0; i < 1000; i++)
    {
        if (src._mapOfLostStuff[i] != nullptr)
            this->_mapOfLostStuff[i] = src._mapOfLostStuff[i]->clone();
    }
    return (*this);
}


std::string const   &Character::getName(void) const
{
    return (this->_name);
}

void    Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == nullptr)
        {
            this->_inventory[i] = m;
            std::cout << this->_name << " equiped AMateria '" << m->getType() << "' on index " << i << std::endl;
            return ;
        }
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != nullptr)
    {
        this->drop_to_floor(this->_inventory[idx]);
        this->_inventory[idx] = nullptr;
    }
}

void    Character::drop_to_floor(AMateria *m) // Future: should be full dynamic, and all Characters use the same 'Floor' to drop their stuff!
{
    int i;

    i = 0;
    for ( ; i < 1000; i++)
    {
        if (this->_mapOfLostStuff[i] == nullptr)
        {
            this->_mapOfLostStuff[i] = m;
            std::cout << this->_name << " dropped AMateria '" << m->getType() << "' to the floor" << std::endl;
            break ;
        }
    }
    if (i == 1000)
    {
        std::cout << "Map of lost stuff is full of X's. " << this->_name << " can't remember any more dropped items." << std::endl;
        delete (m);
    }
}

void    Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && this->_inventory[idx] != nullptr)
        this->_inventory[idx]->use(target);        
}

void    Character::empty_inventory(void)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != nullptr)
        {
            std::cout << "empty_inventory" << std::endl;
            delete (this->_inventory[i]);
            this->_inventory[i] = nullptr;
        }
    }
}
    

void    Character::empty_mapOfLostStuff(void)
{
    for (int i = 0; i < 1000; i++)
    {
        if (this->_mapOfLostStuff[i] != nullptr)
        {
            std::cout << "empty_mapOfLostStuff" << std::endl;
            delete (this->_mapOfLostStuff[i]);
            this->_mapOfLostStuff[i] = nullptr;
        }
    }
}
