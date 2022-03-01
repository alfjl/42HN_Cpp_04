#pragma once

#include <string>

class   Brain
{
//protected:
public:
    std::string _ideas[100];

public:
    Brain(void);
    Brain(const Brain &other);
    ~Brain(void);

    Brain       &operator=(const Brain &src);
    std::string operator[](const int i) const;
};
