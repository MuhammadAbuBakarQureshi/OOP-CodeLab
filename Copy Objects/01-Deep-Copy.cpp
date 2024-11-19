#include <iostream>

using namespace std;

class database{

public:

    int number;
    int* numptr;

    database(){}

    database(int n, int num){

        number = n;
        numptr = new int();
        *numptr = num;
    }

    // Deep copy constructor

    database(const database& original){ // I have used constant, so original value remain same

        number = original.number;
        numptr = new int();
        *numptr = *original.numptr;
    }

    void display_info(){

        cout << "Data : " << number << endl;
        cout << "number : " << *numptr << endl;
    }
};

int main()
{

    database n1(10, 15);
    database n2(n1); // Shallow copy

    cout << "\nBefore changing n2 (shallow copy)" << endl;

    n1.display_info();
    n2.display_info();

    // Now, I change n2 numptr value

    *(n2.numptr) = 100;

    // Now, if I print value for both objects,
    // Both objects numptr has same value (100),
    // because of the shallow copy,
    // n2 numptr copy the same address n1 numptr  pointing to.
    // Now, if I change value from either of these object it is going to change it for other object

    cout << "\nAfter changing n2 (shallow copy)" << endl;

    n1.display_info();
    n2.display_info();

    // Now, if you want to see the effect the deep copy then remove comments from deep copy function
    // in the class

    return 0;
}