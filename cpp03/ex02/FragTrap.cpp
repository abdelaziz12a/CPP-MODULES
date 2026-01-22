
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    Name = "X";
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " is ready" << std::endl;
    Hit_points = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    Name = other.Name;
    Hit_points = other.Hit_points;
    Energy_points = other.Energy_points;
    Attack_damage = other.Attack_damage;
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;

    
    ClapTrap::operator=(other);
    
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << ": High five, guys!" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << Name << std::endl;
}

