
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"


int main()
{
    std::cout << "========== Test 1: Construction/Destruction chaining ==========" << std::endl;
    {
        std::cout << "\n--- Creating ClapTrap ---" << std::endl;
        ClapTrap clap("CL4P-TP");
        
        std::cout << "\n--- Creating ScavTrap ---" << std::endl;
        ScavTrap scav("SC4V-TP");
        
        std::cout << "\n--- End of scope (destructors will be called in reverse) ---" << std::endl;
    }
    
    // std::cout << "\n========== Test 2: ScavTrap vs ClapTrap attacks ==========" << std::endl;
    // ClapTrap clap1("Clappy");
    // ScavTrap scav1("Scavvy");
    
    // std::cout << "\nClapTrap attack (0 damage):" << std::endl;
    // clap1.attack("Bandit");
    
    // std::cout << "\nScavTrap attack (20 damage):" << std::endl;
    // scav1.attack("Bandit");
    
    // std::cout << "\n========== Test 3: ScavTrap special ability ==========" << std::endl;
    // ScavTrap scav2("Guardian");
    // scav2.guardGate();
    // scav2.attack("Intruder");
    // scav2.guardGate();
    
    // std::cout << "\n========== Test 4: ScavTrap damage resistance ==========" << std::endl;
    // ScavTrap scav3("Tank");
    // scav3.takeDamage(30);
    // scav3.takeDamage(30);
    // scav3.beRepaired(20);
    // scav3.takeDamage(30);
    // scav3.attack("Enemy");
    
    // std::cout << "\n========== Test 5: ScavTrap energy depletion ==========" << std::endl;
    // ScavTrap scav4("Energetic");
    // for (int i = 0; i < 51; i++)
    // {
    //     if (i % 10 == 0)
    //         std::cout << "\n--- Action " << i + 1 << " ---" << std::endl;
    //     scav4.attack("Target");
    // }
    // std::cout << "\nTrying to use guardGate (should still work - doesn't require energy):" << std::endl;
    // scav4.guardGate();
    
    // std::cout << "\n========== Test 6: ScavTrap death ==========" << std::endl;
    // ScavTrap scav5("Mortal");
    // scav5.takeDamage(100);
    // std::cout << "Trying to attack when dead:" << std::endl;
    // scav5.attack("Enemy");
    // std::cout << "Trying guardGate when dead (should still work):" << std::endl;
    // scav5.guardGate();
    
    // std::cout << "\n========== Test 7: Default constructors ==========" << std::endl;
    // ClapTrap defaultClap;
    // ScavTrap defaultScav;
    // defaultClap.attack("Target");
    // defaultScav.attack("Target");
    // defaultScav.guardGate();
    
    // std::cout << "\n========== Test 8: Mixed combat scenario ==========" << std::endl;
    // ClapTrap hero("Hero");
    // ScavTrap boss("Boss");
    
    // std::cout << "\n--- Round 1 ---" << std::endl;
    // hero.attack("Boss");
    // boss.takeDamage(0);
    // boss.attack("Hero");
    // hero.takeDamage(20);
    
    // std::cout << "\n--- Round 2 ---" << std::endl;
    // hero.beRepaired(5);
    // hero.attack("Boss");
    // boss.guardGate();
    // boss.attack("Hero");
    // hero.takeDamage(20);
    
    // std::cout << "\n--- Hero status ---" << std::endl;
    // hero.attack("Boss");
    
    std::cout << "\n========== End of tests (destructors) ==========" << std::endl;
    return 0;
}
// ```

// ## Expected Output Pattern for ex01:

// When you run ex01, you should see the construction chaining like:
// ```
// --- Creating ScavTrap ---
// ClapTrap SC4V-TP is ready
// ScavTrap SC4V-TP is ready
// ```

// And destruction in reverse:
// ```
// --- End of scope (destructors will be called in reverse) ---
// ScavTrap destructor called for SC4V-TP
// ClapTrap destructor called for SC4V-TP