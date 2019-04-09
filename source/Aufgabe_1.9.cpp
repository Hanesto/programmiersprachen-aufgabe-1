#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include <cmath>

int gcd (int a, int b) {

  int teiler;

  if((a == 0) || (b == 0))
  {
    std::cout << "Eine der eingegebenen Variablen ist 0" << std::endl;
  }

  if(a <= b)
  {
    teiler = a;
  }
  else
  {
    teiler = b;
  }

  for(int i = teiler; i > 0; i++)
  {
    if((i % a == 0) && (i % b == 0))
    {
      teiler = i;
      break;
    }
  }

  return teiler;
}

TEST_CASE ( " describe_gcd " , " [ gcd ] " )
{
  REQUIRE( gcd (2 ,4) == 2);
  REQUIRE( gcd (9 ,6) == 3);
  REQUIRE( gcd (3 ,7) == 1);
}

int main ( int argc , char * argv []) {

  return Catch :: Session (). run ( argc , argv );
}