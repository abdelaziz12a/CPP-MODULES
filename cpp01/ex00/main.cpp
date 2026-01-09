
#include "Zombie.hpp"


int main()
{
    
    Zombie *z1 = newZombie("gon");
    z1->announce();
    delete z1;
    
    randomChump("gin");
}

