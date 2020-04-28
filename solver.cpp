#include "solver.hpp"
using namespace std;
namespace solver
{

//Operator(+)

const RealVariable RealVariable::operator+(const RealVariable &other) const
{
    return RealVariable(this->_a() + other._a(), this->_b() + other._b(), this->_c() + other._c());
}

const RealVariable RealVariable::operator+(const double &other) const
{
    return RealVariable(this->_a(), this->_b(), this->_c() + other);
}

const RealVariable operator+(const double &d, const RealVariable &r)
{
    return RealVariable(r._a(), r._b(), r._c() + d);
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
    return RealVariable(r._a(), r._b(), r._c() - d);
}

//Operator(*)

const RealVariable RealVariable::operator*(const RealVariable &other) const
{
    return RealVariable(this->a * other._a(), this->b * other._b(), this->_c() * other._c());
}
const RealVariable RealVariable::operator*(const double &other) const
{
    return RealVariable(this->_a() * other, this->_b() * other, this->_c() * other);
}

const RealVariable operator*(const double &d, const RealVariable &r)
{
    return RealVariable(r._a() * d, r._b() * d, r._c() * d);
}

//Operator(/)

const RealVariable RealVariable::operator/(const double &other) const
{
    if (other == 0)
        throw runtime_error("can't divide by 0, \n Ya Melon");

    return RealVariable(this->_a() / other, this->_b() / other, this->c / other);
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
//Operator(==)

const RealVariable RealVariable::operator==(const RealVariable &other) const
{
    return RealVariable(this->a - other.a, this->b - other.b, this->c - other.c);
}

const RealVariable RealVariable::operator==(const double &other) const
{
    return RealVariable(this->a, this->b, this->c - other);
}

const RealVariable operator==(const double &d, const RealVariable &r)
{
    return RealVariable(r._a(), r._b(), r._c() - d);
}

complex<double> solve(const ComplexVariable &bi)
{
    complex<double> res;
    return res;
}
double solve(const RealVariable &x)
{
    double Desc = (x._b() * x._b()) - (4 * (x._a()) * (x._c()));

    if (Desc < 0)
    {
        throw runtime_error("The answer is not a Real number ");
    }
    if (2 * x._a() == 0)
    {
        throw runtime_error("can't divide by 0 , CHECK your math dude ; ");
    }
    double result = ((-x._b()) + sqrt(Desc)) / (2 * x._a());

    return result;
}

///---------------------complex----------------------------

 const ComplexVariable operator+(const ComplexVariable &other) const
 {
     return;
 }
 const ComplexVariable operator+(const complex<double> &other) const
{
    return;

}
  const ComplexVariable operator+(const complex<double> &d, const ComplexVariable &r)
  {

  }
 //Operator(-)
 const ComplexVariable operator-(const ComplexVariable &other) const
 {

 }
 const ComplexVariable operator-(const complex<double> &other) const
 {

 }
  const ComplexVariable operator-(const complex<double> &d, const ComplexVariable &r)
  {

  }
 //Operator(*)
 const ComplexVariable operator*(const ComplexVariable &other) const
 {

 }
 const ComplexVariable operator*(const complex<double> &other) const
 {

 }
  const ComplexVariable operator*(const complex<double> &d, const ComplexVariable &r)
  {

  }
 //Operator(/)
 const ComplexVariable operator/(const complex<double> &other) const
 {

 }
 //Operator(^)
 const ComplexVariable operator^(const complex<double> &other) const
 {

 }
 //Operator(==)
 const ComplexVariable operator==(const ComplexVariable &other) const{

 }
 const ComplexVariable operator==(const complex<double> &other) const
 {

 }
  const ComplexVariable operator==(const complex<double> &d, const ComplexVariable &r);
} // namespace solver