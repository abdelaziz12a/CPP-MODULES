#include "ClapTrap.hpp"



int main()
{
    std::cout << "========== Test 1: Basic functionality ==========" << std::endl;
    ClapTrap clap1("Robot1");
    clap1.attack("Target1");
    clap1.takeDamage(3);
    clap1.beRepaired(2);
    
    // std::cout << "\n========== Test 2: Energy depletion ==========" << std::endl;
    // ClapTrap clap2("Robot2");
    // for (int i = 0; i < 11; i++)
    // {
    //     std::cout << "Action " << i + 1 << ": ";
    //     clap2.attack("Enemy");
    // }
    // std::cout << "Trying to repair after energy depleted: ";
    // clap2.beRepaired(5);
    
    // std::cout << "\n========== Test 3: Hit points depletion ==========" << std::endl;
    // ClapTrap clap3("Robot3");
    // clap3.takeDamage(5);
    // clap3.takeDamage(5);
    // std::cout << "Trying to attack when dead: ";
    // clap3.attack("Enemy");
    // std::cout << "Taking more damage when dead: ";
    // clap3.takeDamage(10);
    // std::cout << "Trying to repair when dead: ";
    // clap3.beRepaired(5);
    
    // std::cout << "\n========== Test 4: Multiple repairs ==========" << std::endl;
    // ClapTrap clap4("Robot4");
    // clap4.takeDamage(7);
    // clap4.beRepaired(3);
    // clap4.beRepaired(2);
    // clap4.attack("Enemy");
    
    // std::cout << "\n========== Test 5: Default constructor ==========" << std::endl;
    // ClapTrap clap5;
    // clap5.attack("Target");
    
    // std::cout << "\n========== Test 6: Overkill damage ==========" << std::endl;
    // ClapTrap clap6("Robot6");
    // clap6.takeDamage(100);
    
    // std::cout << "\n========== Test 7: Energy management ==========" << std::endl;
    // ClapTrap clap7("Robot7");
    // for (int i = 0; i < 5; i++)
    //     clap7.attack("Enemy");
    // for (int i = 0; i < 5; i++)
    //     clap7.beRepaired(1);
    // std::cout << "Last action (should fail - no energy): ";
    // clap7.attack("Enemy");
    
    std::cout << "\n========== End of tests (destructors will be called) ==========" << std::endl;
    return 0;
}
