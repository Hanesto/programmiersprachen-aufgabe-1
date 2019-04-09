#define CATCH_CONFIG_RUNNER

#include <iostream>
#include <catch2/catch.hpp>
#include <cmath>

int gcd ( int a , int b )
{
  int teiler;

  if((a == 0) ||(b == 0))
  {
    std::cout << "Eine der eingegeben Variablen ist 0";
  }

  if(a > b)
  {
    teiler = b - 1;
  }
  else
  {
    teiler = a - 1;
  }

  for(int i = teiler; i > 0; i++)
  {
    if((teiler % a == 0) || (teiler % b == 0) )
    {
      teiler = i; 
      break;
    }
  }
  return teiler;
}

TEST_CASE ( " describe_gcd " , " [ gcd ] " )
{
REQUIRE ( gcd (2 ,4) == 2);
REQUIRE ( gcd (9 ,6) == 3);
REQUIRE ( gcd (3 ,7) == 1);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
