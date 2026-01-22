#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    Name = "X";
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap " << name << " is ready" << std::endl;
    Name = name;
    Hit_points = 10;
    Energy_points = 10;
    Attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called for " << Name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (Energy_points > 0 && Hit_points > 0)
    {
        Energy_points--;
        std::cout << "ClapTrap " << Name << " attacks " << target;
        std::cout << ", causing " << Attack_damage << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << Name << " cannot attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points == 0)
    {
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
        return;
    }
    
    if (Hit_points > amount)
        Hit_points -= amount;
    else
        Hit_points = 0;

    std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage";
    std::cout << ", Hit points are now " << Hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points == 0 || Energy_points == 0)
    {
        std::cout << "ClapTrap " << Name << " cannot repair itself!" << std::endl;
        return;
    }

    if ((long long)Hit_points + amount > UINT_MAX)
        Hit_points = UINT_MAX;
    else
        Hit_points += amount;
    
    Energy_points--;

    std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " points";
    std::cout << ", Hit points are now " << Hit_points << std::endl;
}