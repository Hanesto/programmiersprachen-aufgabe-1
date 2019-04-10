#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <string>

using namespace std;

int quersum(int eingabe)
{
    int quersumme = 0;

    while (eingabe > 0) 
    {
        quersumme += eingabe % 10;
        eingabe /= 10;
    }

    return quersumme;
}

TEST_CASE("Quersumme berechnet", "[quersum]")
{
    REQUIRE(quersum(10) == 1);
    REQUIRE(quersum(12345) == 15);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}