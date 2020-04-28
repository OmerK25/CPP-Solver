#include "solver.hpp"
#include <iostream>
#include "doctest.h"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("REALVAR FUNCTIONS ")
{
    RealVariable x;
    double sol = solve(x ^ 2 == 1);
    CHECK((sol == 1) || (sol == -1));
    double sol = solve(2 * x ^ 2 - 10 == 3);

    CHECK((sol == -sqrt(13 / 2)) || (sol == sqrt(13 / 2)));

    sol = solve((x^2)+x-100==0);
    CHECK((sol == (-1/2 - sqrt(401)/2)) || (sol == (-1/2 + sqrt(401)/2)));

    sol = solve(x+17 == 10);
    CHECK((sol == 7));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));

    sol = solve((x ^ 2) + 5 * x + 6 == 0);
    CHECK((sol == -3) || (sol == -2));
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