#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP
#include <string>
#include <iostream>

class Brain
{
public:
  // Constructeur
  Brain(void);
  Brain(const Brain &copy);

  // Destructeur
  ~Brain(void);

  // Surcharge D'operateur
  Brain &operator=(const Brain &src);

  // Fonction publique

  // Getter
  std::string getIdea(int index) const;

  // Setter
  void setIdea(const std::string &idea, int index);

private:
  std::string _ideas[100];
};
#endif