#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

int factorial(int eingabe)
{
    int ausgabe = 1;
    for(int i = 1; i <= eingabe; i++)
    {
        ausgabe *= i;
    }
    return ausgabe;
}

TEST_CASE("Produkt berechnet")
{
   REQUIRE(factorial(5) == 120);
   REQUIRE(factorial(2) == 2);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}