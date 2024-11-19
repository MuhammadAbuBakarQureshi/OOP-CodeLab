#include <iostream>

using namespace std;

class database
{

public:

    int data;

    database(){}

    database(int d): data(d){}

    void set_value(int d){data = d;}

    void display_info(){

        cout << "Data : " << data << endl; 
    }
};

int main()
{
    
    database n1(10);
    database n2 = n1; // That's how we create shallow copy or 
    // n2 = n1; like that


    n1.display_info();
    n2.display_info();
    
    // Now if we change we value of n2, it is only going to change for n2

    n2.set_value(20);

    n1.display_info();
    n2.display_info();

    return 0;
}