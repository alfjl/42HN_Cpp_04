#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "\n########### MateriaSource #############" << std::endl;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
//    std::cout << "[0] = " << dynamic_cast<MateriaSource*>(src)->_templates[0]->getType() << std::endl; // use for check: first set '_templates' in 'MateriaSource' to 'public'
//    std::cout << "[1] = " << dynamic_cast<MateriaSource*>(src)->_templates[1]->getType() << std::endl; // use for check: first set '_templates' in 'MateriaSource' to 'public

    std::cout << "\n########### ME #############" << std::endl;
    ICharacter* me = new Character("me");

    std::cout << "\n########### AMateria *tmp #############" << std::endl;
    AMateria*   tmp;
    std::cout << "########### 1 #############" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "########### 2 #############" << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "########### 3 UNEQUIP #############" << std::endl;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->unequip(2);

    std::cout << "\n########### BOB #############" << std::endl;
    ICharacter* bob = new Character("bob");
    std::cout << "########### BOB 1 #############" << std::endl;
    tmp = src->createMateria("ice");
    bob->equip(tmp);

    me->use(0, *bob);
    me->use(1, *bob);
    
    bob->unequip(5);
    bob->unequip(1);
    bob->unequip(0);
    
    std::cout << "\n########### DESTRUCTORS #############" << std::endl;
    std::cout << "\n########### DESTRUCTORS BOB #############" << std::endl;
    delete bob;
    std::cout << "\n########### DESTRUCTORS ME #############" << std::endl;
    delete me;
    std::cout << "\n########### DESTRUCTORS SRC #############" << std::endl;
    delete src;

    return (0);
}
