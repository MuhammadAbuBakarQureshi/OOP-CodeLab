#include <iostream>

using namespace std;

class base{

public:

    void base_memeber(){

        cout << "I am in the base class " << endl;
    }
};

class derived: public base{

public:

    void derived_member(){

        cout << "I am in the derived class " << endl;
    }
    
};

int main()
{

    derived d;

    d.derived_member();
    d.base_memeber();

    return 0;
}