#include <complex>

using namespace std;

namespace solver
{

class RealVariable
{
    double a;
    double b;
    double c;

public:

    RealVariable(const double &_a=0.0, const double &_b=1.0, const double &_c=0.0) : a(_a), b(_b), c(_c){};

    double a() const
    {
        return a;
    }

    double b() const
    {
        return b;
    }
    double c() const
    {
        return c;
    }

    const RealVariable operator+(const RealVariable &other) const;
    const RealVariable operator+(const double &other) const;
    friend const RealVariable operator+(const double &d, const RealVariable &r);

    const RealVariable operator-(const RealVariable &other) const;
    const RealVariable operator-(const double &other) const;
    friend const RealVariable operator-(const double &d, const RealVariable &r);

    const RealVariable operator*(const RealVariable &other) const;
    const RealVariable operator*(const double &other) const;
    friend const RealVariable operator*(const double &d, const RealVariable &r);


    const RealVariable operator/(const double &other) const;
  

    const RealVariable operator^(const double &other) const;
};

class ComplexVariable
{
    // complex<double> compVar;
    // ComplexVariable(double re, double im)
    // {
    //     compVar.real = re;
    //     compVar.imag = im;
    // }

    // const ComplexVariable operator+(const ComplexVariable &other) const
    // {
    //     return ComplexVariable(other.compVar.real + this->compVar.real, other.compVar.imag + this->compVar.imag);
    // }

    // const ComplexVariable operator+(const double &other) const
    // {
    //     return ComplexVariable(other.compVar.real, other.compVar.imag);
    // }
};

double solve(RealVariable &x);
complex<double> solve(ComplexVariable &bi);

} // namespace solver