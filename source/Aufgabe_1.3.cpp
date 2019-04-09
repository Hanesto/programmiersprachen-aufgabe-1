#include <iostream>

using namespace std;

int smlInt = 1;

int main()
<<<<<<< HEAD:source/Aufgabe_1.3.cpp
{            
    for( int i = 1; i <= 20; i++) 
    { 
        if((i == 20) && (smlInt % i == 0))
        {
            std::cout << smlInt << std::endl;
=======
{
            
    for( int i = 1; i <= 20; i++) 
    {
        if((i == 20) && (smlInt % i == 0))
        {
            std::cout << smlInt;
>>>>>>> fbfc11dd50936169b467d9835b473928046916c0:source/Aufgabe_1.3.cpp
            break;
        }
             
        if(smlInt % i != 0)
        {
            smlInt++;
            i = 0;
        }                
    }                      
    return 0;
}



