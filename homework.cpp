/**
* listhelpers.hpp has been provided by the instructor as starter code
* contains the following procedures to work with lists:
* display, append, insert, remove, length
*/
#include "listhelpers.hpp"

#include <cstdlib>   // srand, rand
#include <ctime>     // time
#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector



bool isPrime(int n)
{
    if (num <= 1) 
    { 
        std::cout << "false" << std::endl; 
    }
    
    int i = 2; 
    while (i<=n std::sqrt(n))
    {
        if (n % mod 1 ==0)
        {
            return false;=
        }
    }
    
}


int main()
{
    // Complete your homework here

isPrime(1);
isPrime(2);
isPrime(27);
isPrime(11);

    std::vector<int> the_primes = {};
    int i = 0;
    while (i < 100)
    {
        if (isPrime(i) == true)
        {
            the_primes.push_back(i);    // append the number i to the list
        }
        i = i + 1;
    }
    
    return 0;
}
