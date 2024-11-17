#include <iostream>

using namespace std;

class animal
{

public:
    virtual void voice()
    {

        cout << "Animal voice" << endl;
    }
};

class cat : public animal
{

public:
    void voice() override
    {

        cout << "Meow Meow Meow" << endl;
    }
};

class dog : public animal
{

public:
    void voice() override
    {

        cout << "Woof Woof Woof" << endl;
    }
};

int main()
{

    animal *a1;

    cout << "1. Cat" << endl
         << "2. Dog" << endl;

    int option;

    cin >> option;

    // Now, If I choose any of these two options it works properly,
    // calling the same voice function as my choosen option because of virtual
    // because virtual functions choose on the runtime without virtual function
    // It will print "animal voice" everytime, which is written in the animal class

    // if you want to see the magic of the virtual function, remove the virtual and override key word from the code
    // and run it, after that run it with putting that reserved keyword back on their places
    // you'll see the logic of the virtual keyword

    if (option == 1)
    {

        a1 = new cat();
    }
    else if (option == 2)
    {

        a1 = new dog();
    }
    else
    {

        cout << "Enter right option" << endl;
    }


    a1->voice();

    delete a1;

    return 0;
}