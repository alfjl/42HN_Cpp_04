#include "Floor.hpp"

Floor::Floor()
{
    std::cout << "Copy constructor for Floor called" << std::endl;
    for (int i = 0; i < 1000; i++)
        stuffLyingAround[i] = nullptr;
}

Floor::Floor(const Floor &other)
{
    std::cout << "Copy constructor for Floor called" << std::endl;
    *this = other;
}

Floor::~Floor()
{
    for (int i = 0; i < 1000; i++)
    {
        if (stuffLyingAround[i] != nullptr)
            delete (stuffLyingAround[i]); // one could add an "else return", to save time, but then some Materia might be forgotten to be deleted.
    }
    std::cout << " ####### Destructor for Floor called #######" << std::endl;
}


Floor   &Floor::operator=(const Floor &src)
{
}

void    Floor::drop_on_floor(AMateria *m)
{

}
