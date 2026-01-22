
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << ": High five, guys!" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << Name << std::endl;
}

