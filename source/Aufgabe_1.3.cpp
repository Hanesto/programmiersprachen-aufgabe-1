#include <iostream>

using namespace std;

int teiler = 1;

int main()
{            
    for( int i = 1; i <= 20; i++) 
    { 
        if((i == 20) && (teiler % i == 0))
        {
            std::cout << teiler << std::endl;
            break;
        }
             
        if(teiler % i != 0)
        {
            teiler++;
            i = 0;
        }                
    }                      
    return 0;
}



