#include <iostream>

using namespace std;

class animal
{

public:
    virtual void eat()
    {

        cout << "Animal is eating" << endl;
    }
};

class cat : public animal
{

public:
    void eat() override
    {

        cout << "Cat is eating" << endl;
    }
};

int main()
{
    
    animal a1;
    cat c1;

    // If I invoke function withot creating pointer it is going to work properly

    a1.eat();
    c1.eat();

    // Now, if I create the pointer of animal and store cat object init

    animal* a2 = new cat();
    
    // Now this is going to call eat function from cat because virtual key word it decide in runtime,
    // without virtual key word it decide in compile time

    a2->eat();

    return 0;
}