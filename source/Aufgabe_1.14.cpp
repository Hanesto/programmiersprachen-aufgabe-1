#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

bool is_prim(int eingabe)
{
    bool ausgabe = true;
    for(int i = 2; i < eingabe; i++)
    {
        if(eingabe % i == 0)
        {
            ausgabe = false;
        }
    }
    return ausgabe;    
}

TEST_CASE("Produkt berechnet")
{
   REQUIRE(is_prim(13) == true);
   REQUIRE(is_prim(12) == false);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}