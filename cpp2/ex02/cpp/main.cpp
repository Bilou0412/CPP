#include "Fixed.class.hpp"

#include <iostream>
#include <iostream>

//int main(void)
//{
//  Fixed a;
//  Fixed const b(Fixed(5.05f) * Fixed(2));
//  std::cout << a << std::endl;
//  std::cout << ++a << std::endl;
//  std::cout << a << std::endl;
//  std::cout << a++ << std::endl;
//  std::cout << a << std::endl;
//  std::cout << b << std::endl;
//  std::cout << Fixed::max(a, b) << std::endl;
//  return 0;
//}

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << "5.05 / 2: " << Fixed( 5.05f ) / Fixed( 2 ) << std::endl;
    std::cout << "5.05 * 2: " << Fixed( 5.05f ) * Fixed( 2 ) << std::endl;
    std::cout << "5.05 + 2: " << Fixed( 5.05f ) + Fixed( 2 ) << std::endl;
    std::cout << "5.05 - 2: " << Fixed( 5.05f ) - Fixed( 2 ) << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "++a: " <<  ++a << std::endl;
    std::cout << "a: " <<  a << std::endl;
    std::cout << "a++: " <<  a++ << std::endl;
    std::cout << "a: " <<  a << std::endl;
    std::cout << "b: " <<  b << std::endl;
    std::cout << "max: " <<  Fixed::max( a, b ) << std::endl;
    std::cout << "min: " <<  Fixed::min( a, b ) << std::endl;
    return 0;
}