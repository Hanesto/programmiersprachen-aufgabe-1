#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

int quersum(int eingabe)
{
    int sum;
    std::string chars = std::to_string(eingabe);
    int length = chars.length(); 
    char char_array[length + 1]; 

    strcpy(char_array, chars.c_str()); 

    for(int i = 0; i < length; i++)
    {
         sum += i;
    }
    
    return sum;
}

TEST_CASE("Quersumme berechnet", "[quersum]")
{
    REQUIRE(quersum(10) == 1);
    REQUIRE(quersum(12345) == 15);
}