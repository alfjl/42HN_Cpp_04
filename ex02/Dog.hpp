#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Dog : public AAnimal
{
private:
    Brain   *_brain;

public:
    Dog(void);
    Dog(const Dog &other);
    ~Dog(void);

    Dog     &operator=(const Dog &src);
    AAnimal  &operator=(const AAnimal &src);
    void    makeSound(void) const;
    Brain   *getBrain(void) const;
    void    setIdea(const std::string idea);
};
