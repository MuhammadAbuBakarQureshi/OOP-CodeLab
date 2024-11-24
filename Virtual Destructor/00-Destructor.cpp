#include <iostream>

using namespace std;

class base{

    public:

        base(){

            cout << "Base Class Constructor" << endl;
        }

        ~base(){

            cout << "Base Class Destructor" << endl;
        }
};

class derived: public base{

    public:

        derived(){

            cout << "Derived class Constructor" << endl;
        }

        ~derived(){

            cout << "Derived class Destructor" << endl;
        }
};

int main()
{

    // Now, I have created the base class pointer and stored derived class object

    base*  obj = new derived();

    // When, I delete object it is going to call base class destructor and
    // it is not going to cal the derived class constructor

    delete obj;

    return 0;
}