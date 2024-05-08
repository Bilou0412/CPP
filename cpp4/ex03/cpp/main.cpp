#include "include.hpp"

//void ft_tests()
//{
//  // Constructors
//  std::cout << std::endl;
//  std::cout << "CONSTRUCTORS:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  IMateriaSource *src = new MateriaSource();
//  src->learnMateria(new Ice());
//  src->learnMateria(new Cure());
//  ICharacter *me = new Character("me");
//  std::cout << std::endl;
//
//  // Create Materia
//  std::cout << "CREATE MATERIA:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  AMateria *tmp;
//
//  AMateria *tmp1;
//  AMateria *tmp2;
//  AMateria *tmp3;
//  AMateria *tmp4;
//
//  tmp = src->createMateria("ice");
//  me->equip(tmp);
//  tmp1 = src->createMateria("cure");
//  me->equip(tmp1);
//  tmp = src->createMateria("fire"); // null
//  me->equip(tmp);
//  std::cout << std::endl;
//
//  // Use on a new character
//  std::cout << "USE ON A NEW CHARACTER:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  ICharacter *bob = new Character("bob");
//  me->use(0, *bob);
//  me->use(1, *bob);
//  std::cout << std::endl;
//  me->use(2, *bob); // Use an empty / non existing slot in inventory
//  me->use(-4, *bob);
//  me->use(18, *bob);
//  std::cout << std::endl;
//
//  // Deep copy character
//  std::cout << "DEEP COPY CHARACTER:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  Character *charles = new Character("Charles");
//  tmp2 = src->createMateria("cure");
//  charles->equip(tmp2);
//  tmp3 = src->createMateria("ice");
//  charles->equip(tmp3);
//  tmp = src->createMateria("earth");
//  charles->equip(tmp);
//  Character *charles_copy = new Character(*charles);
//  std::cout << std::endl;
//  charles->use(0, *bob);
//  charles->use(1, *bob);
//
//  // Deep copy vs its source character
//  std::cout << "DEEP COPY VS SOURCE:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  charles->unequip(0); // this shows that they have different materia pointers equipped
//  tmp4 = charles_copy->getMateriaFromInventory(1);
//  charles_copy->unequip(1); // this will produce a leak if we don't store the address somewhere else before
//  delete tmp4;
//  tmp = src->createMateria("cure");
//  charles_copy->equip(tmp);
//  tmp = src->createMateria("ice");
//  charles_copy->equip(tmp);
//  std::cout << std::endl;
//
//  charles->use(0, *bob);
//  charles->use(1, *bob);
//  charles->use(2, *bob);
//  charles->use(3, *bob);
//  std::cout << std::endl;
//  charles_copy->use(0, *bob);
//  charles_copy->use(1, *bob);
//  charles_copy->use(2, *bob);
//  charles_copy->use(3, *bob);
//  std::cout << std::endl;
//
//  // Unequip tests:
//  std::cout << "UNEQUIP:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  me->unequip(-1); // unequip an empty / non existing slot in inventory
//  me->unequip(18);
//  me->unequip(3);
//  std::cout << std::endl;
//  me->use(1, *charles);
//  me->unequip(1);       // Unequip a valid slot in inventory (cure unequipped)
//  me->use(1, *charles); // try to use it
//  std::cout << std::endl;
//
//  // Destructors
//  std::cout << "DESTRUCTORS:" << std::endl;
//  std::cout << "-----------------------" << std::endl;
//  delete bob;
//  delete me;
//  delete src;
//  delete charles;
//  delete charles_copy;
//  delete tmp1;
//  delete tmp2;
//  std::cout << std::endl;
//  // system("leaks ex03");
//}

//void ft_tests()
//{
//  ICharacter *bob = new Character("bob");
//
//  ICharacter *bullied = new Character("bullied");
//  AMateria *ice = new Ice;
//  IMateriaSource *repertoire = new MateriaSource;
//  repertoire->learnMateria(ice);
//  AMateria *tmp = repertoire->createMateria("ice");
//  bob->equip(tmp);
//  bob->use(0, *bullied);
//  bob->unequip(0);
//  delete tmp;
//  delete repertoire;
//  delete ice;
//  delete bullied;
//  delete bob;
//}
//int	main(void)
//{
//	// Test des construction et destruction des Materias et Materia Source
//	std::cout << "Test des construction et destruction des Materias et Materia Source"
//	<< std::endl << std::endl;
//	IMateriaSource* src = new MateriaSource();
//
//	AMateria *ice_1 = new Ice();
//	AMateria *ice_2 = new Ice(*((Ice *)ice_1));
//	AMateria *cure_1 = new Cure();
//	AMateria *cure_2 = cure_1->clone();
//
//	src->learnMateria(ice_1);
//	src->learnMateria(cure_1);
//
//	AMateria *ice_3 = src->createMateria("ice");
//	std::cout << "type de ice_3: "<< ice_3->getType() << std::endl;
//
//	AMateria *cure_3 = src->createMateria("cure");
//	std::cout << "type de cure_2: "<< cure_2->getType() << std::endl;
//
//	delete ice_2;
//	delete ice_3;
//	delete cure_2;
//	delete cure_3;
//
//	// Test de la partie Character
//	std::cout << std::endl << std::endl;
//	std::cout << "Test de la partie Character" << std::endl << std::endl;
//	Character character_1("Juv");
//	Character character_2("Tiff");
//	Character character_3("Nico");
//
//	character_1.equip(src->createMateria("ice"));
//	character_1.equip(src->createMateria("cure"));
//
//	character_1.use(0, character_2);
//	character_1.use(1, character_2);
//	character_1.use(2, character_2);
//
//	std::cout << "		character_3 = character_1; --> Test de la copie profonde" << std::endl;
//	character_3 = character_1;
//	character_3.use(0, character_2);
//	character_3.use(1, character_2);
//	character_3.use(2, character_2);
//
//	std::cout << "		character_3 = character_2; -->ca va supprimer tous les equip" << std::endl;
//	character_3 = character_2;
//	character_3.use(0, character_2);
//	character_3.use(1, character_2);
//	character_3.use(2, character_2);
//
//
//	AMateria* follen_materia;
//	std::cout << "		Juv (character 1) fait tomber son ice (possition 1)" << std::endl;
//	follen_materia = character_1.getMateriaFromInventory(0);
//	if (follen_materia)
//		character_1.unequip(0);
//
//	std::cout << "		Tiff rammasse l'ice tombe et la prend" << std::endl;
//	character_2.equip(follen_materia);
//	character_2.use(0, character_1);
//	character_2.use(1, character_1);
//
//	std::cout << "		Test de la creation par recopie" << std::endl;
//	Character character_4(character_1);
//	character_4.use(0, character_2);
//	character_4.use(1, character_2);
//	character_4.use(2, character_2);
//	character_4.use(3, character_2);
//
//	delete src;
//	return (0);
//}
//int main()
//{
//  ft_tests();
//  return (0);
//}
int main() {
{
	std::cout << "-----------TEST POOL 1-----------" << std::endl;

	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\nCreating 2 Characters : Bill and Boule" << std::endl;
 	Character* bill = new Character("Bill");
 	Character* boule = new Character("Boule");

 	std::cout << "\nTrying to create Materia 'lava' and to add it to Bill materias." << std::endl;
 	AMateria* tmp;
 	tmp = src->createMateria("lava");
 	bill->equip(tmp);
 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill materias." << std::endl;
 	tmp = src->createMateria("ice");
 	bill->equip(tmp);
 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill materias." << std::endl;
 	tmp = src->createMateria("cure");
 	bill->equip(tmp);
 	std::cout << "\nBill using his 2 Materias from his materias array [0], then [1], then [8]" << std::endl;
 	bill->use(0, *boule);
 	bill->use(1, *boule);
 	bill->use(8, *boule);
 	std::cout << "\nCreating new Character Bill2" << std::endl;
 	Character* bill2 = new Character("Nico");
 	std::cout << "\nTrying to create Materia 'cure' and to add it to Bill2 materias." << std::endl;
 	tmp = src->createMateria("cure");
 	bill2->equip(tmp);
 	std::cout << "\nTrying to create Materia 'ice' and to add it to Bill2 materias." << std::endl;
 	tmp = src->createMateria("ice");
 	bill2->equip(tmp);
 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
 	bill2->use(0, *boule);
 	bill2->use(1, *boule);
 	std::cout << "\nCopying Bill2 from Bill" << std::endl;
 	*bill2 = *bill;
 	std::cout << "\nDeleting Bill" << std::endl;
 	delete bill;
 	std::cout << "\nBill2 using his 2 Materias from his materias array [0], then [1]" << std::endl;
 	bill2->use(0, *boule);
 	bill2->use(1, *boule);
 	std::cout << "\nDeleting Bill2 & Boule\n" << std::endl;
 	delete src;
 	delete bill2;
 	delete boule;
 	return (0);
 }
 {
 	std::cout << "\n-----------TEST POOL 2-----------" << std::endl;
 	std::cout << "\nCreating a MateriaSource src and learning Materia Ice and Materia Cure" << std::endl;
 	IMateriaSource* src = new MateriaSource();
 	src->learnMateria(new Ice());
 	src->learnMateria(new Cure());
 	std::cout << "\nCreating Characters : 'me'" << std::endl;
 	ICharacter* me = new Character("me");
 	std::cout << "\nTrying to create Materia 'lava' and to add it to me materias." << std::endl;
 	AMateria* tmp;
 	tmp = src->createMateria("lava");
 	me->equip(tmp);
 	std::cout << "\nTrying to create Materia 'ice' and to add it to me materias." << std::endl;
 	tmp = src->createMateria("ice");
 	me->equip(tmp);
 	std::cout << "\nTrying to create Materia 'cure' and to add it to me materias." << std::endl;
 	tmp = src->createMateria("cure");
 	me->equip(tmp);
 	std::cout << "\nCreating Characters : 'bob'" << std::endl;
 	ICharacter* bob = new Character("bob");
 	std::cout << "\nMe using materias[0] and [1] on bob" << std::endl;
 	me->use(0, *bob);
 	me->use(1, *bob);
 	std::cout << "\nDeleting bob, me and src" << std::endl;
 	delete bob;
 	delete me;
 	delete src;
 	return 0;
 }
}
 