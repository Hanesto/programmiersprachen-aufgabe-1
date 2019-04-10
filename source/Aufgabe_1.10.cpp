#define CATCH_CONFIG_RUNNER
#include "catch.hpp"

using namespace std;

int sum_mutiples()
{
    int sum = 0;

    for(int i = 1; i <= 1000; i++)
    {
        if((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
    }

    return sum;
}

TEST_CASE("aufaddiert", "[sum_multiples]")
{
   REQUIRE(sum_mutiples() == 234168);
}

int main (int argc, char * argv[]) 
{
  return Catch::Session().run(argc , argv);
}