#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

#include <string>

using namespace std;

float nachkommastellen(float eingabe)
{
    std::string zahl = to_string(eingabe);
    float ausgabe;
    int punkt = zahl.find(".");
        
    for(int i = 0; i < punkt; i++)
    {
            zahl.erase(zahl.begin() + i);
    }
        
    ausgabe = stof(zahl);

    if(eingabe < 0)
    {
      return -ausgabe;
    }
    else
    {
      return ausgabe;
    }
}

TEST_CASE("Nachkommastellen berechnet", "[nachkommastellen]")
{
   REQUIRE(nachkommastellen(1.5) == Approx(0.5));
   REQUIRE(nachkommastellen(114.134) == Approx(0.134));
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}