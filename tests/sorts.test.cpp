#include "catch2/catch.hpp"

TEST_CASE( "Should be true", "[nonsense]") {
  REQUIRE( 1 == 1);
}

TEST_CASE( "Failer test", "[idiotic]") {
  REQUIRE( 1 == 2 );
}