#include <iostream> // why? shouldn't it be included in the ones below?
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n##### CORRECT #####" << std::endl;
    const Animal    *meta = new Animal();
    const Animal    *i = new Dog();
    const Animal    *j = new Cat();

    std::cout << "\n##### INCORRECT #####" << std::endl;
    const WrongAnimal    *wrong_meta = new WrongAnimal();
    const WrongAnimal    *k = new WrongCat();

    std::cout << "\n##### CORRECT #####" << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); // will output the DOG sound!
    j->makeSound(); // will output the CAT sound!
    meta->makeSound(); // will output nothing

    std::cout << "\n##### INCORRECT #####" << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound(); // will output the ANIMAL sound!
    wrong_meta->makeSound(); // will output the ANIMAL sound!
    
    std::cout << "\n##### INCORRECT #####" << std::endl;
    delete (k);
    delete (wrong_meta);

    std::cout << "\n##### CORRECT #####" << std::endl;
    delete (j);
    delete (i);
    delete (meta);
    
    return (0);
}
