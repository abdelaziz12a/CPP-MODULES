#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    WrongAnimal* wa = new WrongCat();
    wa->makeSound(); // غادي يخرج: WrongAnimal makes an unknown sound...
    delete wa;
    // Dog k;
    // std::cout << "type of k is : " << k.getType() << std::endl;
    // k.makeSound();
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    return 0;
}