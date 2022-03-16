#include <iostream> // why? shouldn't it be included in the ones below?
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n##### SINGLES #####" << std::endl;
    const Animal    *meta = new Animal();
    const Animal    *i = new Dog();
    const Animal    *j = new Cat();
    const Cat       *k = new Cat();
    const Animal    *l = new Cat(*k);

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout << l->getType() << " " << std::endl;
    i->makeSound(); // will output the DOG sound!
    j->makeSound(); // will output the CAT sound!
    k->makeSound(); // will output the CAT sound!
    l->makeSound(); // will output the CAT sound!
    meta->makeSound(); // will output nothing

    delete (j);
    delete (i);
    delete (k);
    delete (l);
    delete (meta);
    
    std::cout << "\n##### ARRAY #####" << std::endl;
    Animal    *arrayAnimals[100];
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << ".) ";
        if (i % 2 == 0)
            arrayAnimals[i] = new Dog();
        else
            arrayAnimals[i] = new Cat();
    }
    std::cout << "\n##### DEEP COPY PROOF ANIMAL #####" << std::endl;
    arrayAnimals[4]->setIdea("my idea #4");
    std::cout << "before copy = arrayAnimals[4] '" << arrayAnimals[4]->getType() << "' ideas: " << arrayAnimals[4]->getBrain()->_ideas[0] << std::endl;
    std::cout << "before copy = arrayAnimals[2] '" << arrayAnimals[2]->getType() << "' ideas: " << arrayAnimals[2]->getBrain()->_ideas[0] << std::endl;
   
    (*arrayAnimals[2]) = (*arrayAnimals[4]);

    std::cout << "after copy = arrayAnimals[4] '" << arrayAnimals[4]->getType() << "' ideas: " << arrayAnimals[4]->getBrain()->_ideas[0] << std::endl;
    std::cout << "after copy = arrayAnimals[2] '" << arrayAnimals[2]->getType() << "' ideas: " << arrayAnimals[2]->getBrain()->_ideas[0] << std::endl;
    
    std::cout << "\n##### DESTRUCTOR #####" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << ".) ";
        delete (arrayAnimals[i]);
    }

    std::cout << "\n##### DEEP COPY PROOF CAT #####" << std::endl;
    Cat    *arrayCats[4];
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << ".) ";
        arrayCats[i] = new Cat();
	}
	arrayCats[3]->setIdea("my idea #3");
    std::cout << "before copy = arrayCats[3] '" << arrayCats[3]->getType() << "' ideas: " << arrayCats[3]->getBrain()->_ideas[0] << std::endl;
    std::cout << "before copy = arrayAnimals[1] '" << arrayCats[1]->getType() << "' ideas: " << arrayCats[1]->getBrain()->_ideas[0] << std::endl;
    
    (*arrayCats[1]) = (*arrayCats[3]);

    std::cout << "after copy = arrayCats[3] '" << arrayCats[3]->getType() << "' ideas: " << arrayCats[3]->getBrain()->_ideas[0] << std::endl;
    std::cout << "after copy = arrayCats[1] '" << arrayCats[1]->getType() << "' ideas: " << arrayCats[1]->getBrain()->_ideas[0] << std::endl;
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << ".) ";
        delete (arrayCats[i]);
    }

    return (0);
}
