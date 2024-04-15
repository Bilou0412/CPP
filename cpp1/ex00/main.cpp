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
   
   randomChump("Gil");

   delete pierreZombie;
}