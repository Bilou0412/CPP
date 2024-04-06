#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include<string>
#include <iostream>


class Contact{
    public:
        Contact(void);
        ~Contact(void);
        void SetFirstName(std::string FirstName);
        void SetLastName(std::string LastName);
        void SetNickName(std::string NickName);
        void SetPhoneNumber(std::string PhoneNumber);
        void SetDarkestSecret(std::string DarkestSecret);
        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickName(void);
        std::string GetPhoneNumber(void);
        std::string GetDarkestSecret(void);
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
};
#endif