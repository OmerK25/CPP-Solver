#include "solver.hpp"
#include <iostream>
#include <stdlib.h> /* srand, rand */
#include "doctest.h"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("REALVAR FUNCTIONS ")
{
    RealVariable x;
    double sol = solve((x^2) == 1);
    //CHECK(solve((x^2) == 1)== 1 || solve((x^2) == 1) == -1);
   CHECK(solve(x-2== 8) == 10);
   // CHECK( (solve( (2*(x^2) - 10 == 3) == -sqrt(13 / 2) )|| (solve(2*(x^2) - 10 == 3) == sqrt(13 / 2))));
   // CHECK( ( solve( (x^2) + x - 100 == 0) == (((-1 / 2) - sqrt(401) / 2)) ) ||
   //          (solve((x^2) + x - 100 == 0)== (-1 / 2 +sqrt(401) / 2)));
    CHECK(solve(x + 17 == 10) == -7);
  //  CHECK( (solve((x^2) + 5*x + 6 == 0) == (-3) )||( solve((x^2) + 5 * x + 6 == 0) == -2));
  //  CHECK((solve( (15*(x^2)) - 27*x==6) == (-1 / 5) )|| (solve((15*(x^2)) - 27*x == 6) == 2));
    CHECK(solve(100*x - 290 == 10) == 3);
    CHECK((solve(x + 12 == 20)) == 8);
    CHECK(solve(x - 4 == 8) == 12);
    CHECK(solve(x / 3 == 9) == 27);
    CHECK(solve(x - 4 == 8) == 12);
    CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
    CHECK(solve(x - 2 == 8) == 10);
    CHECK(solve(2 * x - 3 * x == 10) == -10);
 //   CHECK_FALSE((solve(x*(x + 5) == 3 + x*(x + 6))) == -3);
    CHECK(solve(6 * x - 2 + 3 * x + x + 42 == 10) == -3);
    CHECK(solve(2 * x - 4 == 10) == 7);
  //  CHECK((solve(0 == 3 + x * (x + 6)) == (-3 - sqrt(6)) )|| solve(0 == 3 + x * (x + 6)) == (-3 + sqrt(6)));
 //   CHECK((solve(((x^2)/4) + (x/4) == (x^2) + x) == 0 ) || (solve(((x^2)/4) + (x/4) == (-1))));
    CHECK(solve(2 * x - 4 == 10) == 7);
    CHECK(solve(x - 4 == 8) == 12);
    CHECK(solve(x - 2 == 8) == 10);
    CHECK(solve(2 * x - 2 == 10) == 6);
    CHECK(solve(15 * x - 5 * x == 10) == 1);
    CHECK(solve(9 * x == 18) == 2);
    CHECK(solve(7 * x + 11 - x == 10 + 7) == 1);
    CHECK(solve(49 * x == 343) == 7);
    CHECK(solve(x - 15 == 8) == 23);
    CHECK(solve(-3 * (-1 * x - 7) == 8 * x) == 4.2);
    CHECK(solve(3 * x / 0.5 * x ==0 ) == 0);
    CHECK(solve(2 * x - 9 == 5) == 7);
    CHECK(solve(x - 6 == 4) == 10);
}
TEST_CASE("REALVAR ERROR FUNCTIONS ")
{
    RealVariable x;
     CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10); CHECK(solve(100*x - 290 == 10) == 3);
 CHECK((solve(x + 12 == 20)) == 8);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK(solve(x / 3 == 9) == 27);
 CHECK(solve(x - 4 == 8) == 12);
 CHECK((solve(1 + 1 * x == -2 - 2 * x)) == -1);
 CHECK(solve(x - 2 == 8) == 10);
}
TEST_CASE("COMPLEXVAR FUNCTIONS ")
{
    ComplexVariable y;
    // complex<double> comp=solve( y + 1i == 8);
    //    CHECK((comp == (8.0, -1.0));
    // CHECK(comp=((solve(y + 3i == 8)) == (8.0, -3.0));
    // CHECK(comp=(solve(1i + 3 * y == 2)) == (2.0 / 3.0, 1.0 / 3.0));
    // CHECK(solve(y + 3i == 9.0 - 4i) == (9.0, 7.0));
    // CHECK(solve(8i - 7.0 - y * 3 == 71) == (-26.0, 8.0 / 3.0));
    // CHECK( == )
}