#include <iostream>

using namespace std;

class number{

public:

    int data;

    number(int d): data(d){}

    void display_info(){

        cout << "Data = " << data << endl;
    }
};

void modify_value(number example){

    example.data += 100;
}

int main()
{

    number n1(10);

    n1.display_info();

    // This function is not going to change the value of the
    // original object, because it is pass by value

    modify_value(n1); 

    n1.display_info();

    return 0;
}