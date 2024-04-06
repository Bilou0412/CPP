#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include"Contact.class.hpp"

class PhoneBook {
public:
    PhoneBook(void);
    ~PhoneBook(void);    
    void add(void);
    void search(void);
private:
    Contact Contact_list[8];
    int index;
};

#endif