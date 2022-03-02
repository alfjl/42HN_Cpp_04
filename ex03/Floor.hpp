#pragma once

#include "AMateria.hpp"

class   Floor
{
public:
    AMateria    *stuffLyingAround[1000];

    Floor();
    Floor(const Floor &other);
    ~Floor();

    Floor   &operator=(const Floor &src);

    void    drop_on_floor(AMateria *m);
};
