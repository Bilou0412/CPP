#include "Zombie.class.hpp"

int main(void)
{
   Zombie noNameZombie;
   Zombie henryZombie("Henry");

   noNameZombie.annonce();
   henryZombie.annonce();

   Zombie *pierreZombie;
   pierreZombie = newZombie("Pierre");
   pierreZombie->annonce();

   Zombie *cocoHorde;
   cocoHorde = zombieHorde(10,"Coco");
   
   randomChump("Gil");

   delete[] cocoHorde;
   delete pierreZombie;
}