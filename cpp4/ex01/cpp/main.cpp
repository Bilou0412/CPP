#include "Animal.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "Brain.class.hpp"

int main()
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j; // should not create a leak
    delete i;
    std::cout << "-------------------------------------" << std::endl;

    Animal *animals[10];
    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    for (int i = 0; i < 100; i++)
        static_cast<Dog *>(animals[0])->getBrain()->setIdea("something", i);
    std::cout << "1st Dog after filling" << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << (static_cast<Dog *>(animals[0])->getBrain()->getIdea(i)) << " ";
    std::cout << std::endl;
    *static_cast<Dog *>(animals[1]) = *static_cast<Dog *>(animals[0]);
    std::cout << "2nd Dog after copy" << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << (static_cast<Dog *>(animals[1])->getBrain()->getIdea(i)) << " ";
    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
    {
        delete animals[i];
    }
    return 0;
}