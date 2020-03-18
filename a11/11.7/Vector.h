
#include <string>
using namespace std;
class Vector
{
private:
    int size;
    double *arr;

public:
    Vector();
    ~Vector();
    Vector(int);
    Vector(const Vector &);
    double norm();
    Vector subtraction(const Vector) const;
    Vector addition(const Vector) const;
    double product(const Vector) const;
    void setVector();
    double getsize();
    double Vectorelements();
};
