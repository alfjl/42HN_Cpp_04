#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
private:
    Brain   *_brain;

public:
    Cat(void);
    Cat(const Cat &other);
    ~Cat(void);

    Cat     &operator=(const Cat &src);
    Animal  &operator=(const Animal &src);
    void    makeSound(void) const;
    Brain   *getBrain(void) const;
    void    setIdea(const std::string idea);
};
