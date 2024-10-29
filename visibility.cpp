#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// derived class syntax
/*
class {{derived-class-name}}:{{visibility-mode}}{{base-class-name}}
{
    class members/methods/etc....
}

Note:
1.Default visibility mode is private
2.Public visibily mode:Public members of the base class

3.Private visibily mode:Public members of the base class
4.private members are never inherited
*/
// creating a programmer class derived from employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }

    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee harry(1), rohan(1);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}


//base class ke public members ko hee inherit kr skte hai..
