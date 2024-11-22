#include <iostream>

using namespace std;

class Database{

private:

    int data;

public:

    Database(){}

    Database(int d): data(d){}

    void set_data(int d){

        data = d;
    }

    void get_data(){

        cout << "Data : " << data << endl;
    }
};

int main()
{

    Database d1(10);

    Database *const ptr = &d1;

    ptr->get_data();

    // I can modifie the data

    ptr->set_data(20);

    ptr->get_data();

    // But, I cannot change the pointer to another object

    Database d2(30);

    // ptr = d2; This line will give an error

    return 0;
}