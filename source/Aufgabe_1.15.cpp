#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <string>
#include <iostream>

using namespace std;

double mile_to_kilometer(double eingabe)
{
 std::cout << "Bitte geben Sie einen Wert in Meilen ein :\n" ;
 double mile_wert ;
 std::cin >> mile_wert;

 double km_wert = (mile_wert * 1.60934);

 std::cout << km_wert << std::endl;

 return km_wert;
}

TEST_CASE("Produkt berechnet")
{
   REQUIRE(mile_to_kilometer(3) == 4.82803);
   REQUIRE(mile_to_kilometer(12) == 19.3121);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}