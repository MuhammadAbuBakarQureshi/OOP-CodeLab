#include <iostream>

using namespace std;

class number{

public:

    int data;

    number(int d): data(d){}

    void display_info(){

        cout << "Data : " << data << endl;
    }
};

void modify_value(number& exapmle){

    exapmle.data += 100;
}

int main()
{

    number n1(10);

    n1.display_info();

    // This function is going to increment data by 100
    // because it is pass by refrence

    modify_value(n1);

    n1.display_info();

    return 0;
}