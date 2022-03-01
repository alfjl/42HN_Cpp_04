#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
private:
    Brain   *_brain;

public:
    Dog(void);
    Dog(const Dog &other);
    ~Dog(void);

    Dog     &operator=(const Dog &src);
    Animal  &operator=(const Animal &src);
    void    makeSound(void) const;
    Brain   *getBrain(void) const;
    void    setIdea(const std::string idea);
};
