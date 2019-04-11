#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

using namespace std;

int Surface(int radius, int hoehe)
{
    return(2* M_PI * radius * (radius + hoehe));
}

int Volume(int radius, int hoehe)
{
    return(M_PI * (pow(radius, 2)) * hoehe);
}

TEST_CASE("Zylinder berechnet")
{
   REQUIRE(Surface(2, 2) == 50);
   REQUIRE(Volume(2, 2) == 25);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}