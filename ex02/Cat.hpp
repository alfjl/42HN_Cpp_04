#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class   Cat : public AAnimal
{
private:
    Brain   *_brain;

public:
    Cat(void);
    Cat(const Cat &other);
    ~Cat(void);

    Cat     &operator=(const Cat &src);
    AAnimal  &operator=(const AAnimal &src);
    void    makeSound(void) const;
    Brain   *getBrain(void) const;
    void    setIdea(const std::string idea);
};
