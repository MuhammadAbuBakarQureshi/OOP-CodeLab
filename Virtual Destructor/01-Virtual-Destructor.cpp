#include <iostream>

using namespace std;

class Base{ public: virtual ~Base(){cout << "Base class Destructor" << endl;} };

class Derived: public Base{ public : ~Derived(){cout << "Derived class Destructor" << endl;} };

int main()
{

    Base* obj = new Derived();

    // Now, both destructor invoke because of the virtual key word

    delete obj;

    return 0;
}