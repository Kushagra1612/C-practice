#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                 Public derivation   Private Derivation   Protected Derivation
  1.Private         Not inherited        Not inherited       Mot inherited
  2.Protected        Protected            Private             Protected
  3.Public           Public               Private             Protected
*/
class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    //cout<<d.a;//will not work since a is protected im both base as well as derived class

    return 0;
}