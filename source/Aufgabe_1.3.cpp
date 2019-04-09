#include <iostream>

using namespace std;

int smlInt = 1;

int main()
{            
    for( int i = 1; i <= 20; i++) 
    { 
        if((i == 20) && (smlInt % i == 0))
        {
            std::cout << smlInt << std::endl;
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



