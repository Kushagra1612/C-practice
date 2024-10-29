#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"How are you"<<endl;
    }
};
    class base2{
    public:
    void greet(){
        cout<<"Kaise ho"<<endl;
    }

};
class derived: public base1,public base2{
    int a;
    public:
    void greet(){
        base2::greet();
    }
};

class B{
    public:
    int a;
    void say(){
        cout<<"Helllo world"<<endl;
    }
};

class D:public B{
    int a;
    //D's new say() method will override base class's say() method
    public:
    void say(){
        cout<<"Helllo my beautiful world"<<endl;
    }
};
int main(){
    //Ambiguity 1
    //base1 base1obj;
    //base2 base2obj;
    //base1obj.greet();
    //base2obj.greet();
    //derived d;
    //d.greet();

    B b;
    b.say();

    D d;
    d.say();
    
    return 0;
}