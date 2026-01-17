

#include "Fixed.hpp"

Fixed::Fixed() {F_Valu = 0; std::cout << "Default constructor called" << std::endl;}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    F_Valu = other.getRawBits();

}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        F_Valu = other.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const 
{ 
    std::cout << "getRawBits member function called" << std::endl;
    return F_Valu;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "getRawBits member function called" << std::endl;

    F_Valu = raw;
}


