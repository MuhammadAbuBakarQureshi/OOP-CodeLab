#include <iostream>

using namespace std;

class animal{

public:

    void eat(){

        cout << "Animal is eating" << endl;
    }
};

class cat: public animal{

public:

    void eat(){

        cout << "cat is eating" << endl;
    }
};

int main()
{

    animal a1;
    cat c1;

    // If we invoke eat function like this, it work properly

    a1.eat();
    c1.eat();

    // Now, we create animal pointer and store cat object in it;

    animal* a2 = new cat();

    // If we  invoke function like this, it is going to call animal eat function, wether animal has stored cat object

    a2->eat();

    return 0;
}