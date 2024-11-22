#include <iostream>

using namespace std;

class Database
{

private:
    int data;

public:

    Database(){}

    Database(int d): data(d){}

    void set_data(int d){

        data = d;
    }

    void show_data() const {

        cout << "Data : " << data << endl;
    }
};

int main()
{

    Database d1(10);

    const Database* ptr = &d1;

    // I cannot modify the value of this object

    ptr->show_data();

    Database d2(20);

    // But, I can change the address of object

    ptr = &d2;

    ptr->show_data();

    return 0;
}