#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP


class Character : public ICharacter
{

public:
  // Constructeur
  Character(std::string name);
  Character(const Character &copy);

  // Destructeur
  ~Character();

  // Getter
  std::string const &getName() const;

  // Surcharge Operteur
  Character &operator=(const Character &copy);

  // Fonction Publique
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);

private:
  std::string _name;
  AMateria *(inventory[4]);
};

#endif