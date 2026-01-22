
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    std::cout << "========== Test 1: FragTrap Construction/Destruction ==========" << std::endl;
    {
        std::cout << "\n--- Creating FragTrap ---" << std::endl;
        FragTrap frag("FR4G-TP");
        
        std::cout << "\n--- End of scope ---" << std::endl;
    }
    
    // std::cout << "\n========== Test 2: FragTrap special ability ==========" << std::endl;
    // FragTrap frag1("Friendly");
    // frag1.highFivesGuys();
    // frag1.attack("Enemy");
    // frag1.highFivesGuys();
    
    // std::cout << "\n========== Test 3: All three types ==========" << std::endl;
    // ClapTrap clap("Clappy");
    // ScavTrap scav("Scavvy");
    // FragTrap frag2("Fraggy");
    
    // std::cout << "\n--- Attacks comparison ---" << std::endl;
    // clap.attack("Target");   // 0 damage
    // scav.attack("Target");   // 20 damage
    // frag2.attack("Target");  // 30 damage
    
    // std::cout << "\n--- Special abilities ---" << std::endl;
    // scav.guardGate();
    // frag2.highFivesGuys();
    
    // std::cout << "\n========== Test 4: FragTrap durability ==========" << std::endl;
    // FragTrap tank("Tank");
    // tank.takeDamage(50);
    // tank.beRepaired(30);
    // tank.takeDamage(50);
    // tank.attack("Enemy");
    
    std::cout << "\n========== End of tests ==========" << std::endl;
    return 0;
}


// ## الـ Output المتوقع:
// ```
// ========== Test 1: FragTrap Construction/Destruction ==========

// --- Creating FragTrap ---
// ClapTrap FR4G-TP is ready
// FragTrap FR4G-TP is ready

// --- End of scope ---
// FragTrap destructor called for FR4G-TP
// ClapTrap destructor called for FR4G-TP

// ========== Test 2: FragTrap special ability ==========
// ClapTrap Friendly is ready
// FragTrap Friendly is ready
// FragTrap Friendly requests a positive high five!
// ClapTrap Friendly attacks Enemy, causing 30 points of damage!
// FragTrap Friendly requests a positive high five!