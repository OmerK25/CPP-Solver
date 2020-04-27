#include "solver.hpp"
using namespace std;
using namespace solver;

//Operator(+)

const RealVariable RealVariable::operator+(const RealVariable &other) const
{
    return RealVariable(this->a + other.a, this->b + other.b, this->c + other.c);
}

const RealVariable RealVariable::operator+(const double &other) const
{
    return RealVariable(this->a, this->b, this->c + other);
}

const RealVariable operator+(const double &d, const RealVariable &r)
{
    return RealVariable(r.a(), r.b(), r.c() + d);
}

//Operator(-)

const RealVariable RealVariable::operator-(const RealVariable &other) const
{
    return RealVariable(this->a - other.a, this->b - other.b, this->c - other.c);
}

const RealVariable RealVariable::operator-(const double &other) const
{
    return RealVariable(this->a, this->b, this->c - other);
}

const RealVariable operator-(const double &d, const RealVariable &r)
{
    return RealVariable(r.a(), r.b(), r.c() - d);
}

//Operator(*)

const RealVariable RealVariable::operator*(const RealVariable &other) const
{
    return RealVariable(this->a * other.a, this->b * other.b, this->c * other.c);
}
const RealVariable RealVariable::operator*(const double &other) const
{
    return RealVariable(this->a, this->b, this->c * other);
}

const RealVariable operator*(const double &d, const RealVariable &r)
{
    return RealVariable(r.a(), r.b(), r.c() * d);
}

//Operator(/)

const RealVariable RealVariable::operator/(const double &other) const
{
    if (other == 0)
        throw runtime_error("can't divide by 0, \n Ya Melon");

    return RealVariable(this->a / other, this->b / other, this->c / other);
}

//operator(^)
const RealVariable RealVariable::operator^(const double &other) const
{
    if (other > 2)
        throw runtime_error("Al mi ata ba");

    if (other == 1)
        return *this;

    if (other == 0)
    {
        return RealVariable(0, 0, 1);
    }

    return RealVariable(1, 0, 0);
}

complex<double> solve(ComplexVariable &bi)
{
    complex<double> res;
    return res;
}
double solve(RealVariable &x)
{
    return 0;
}
