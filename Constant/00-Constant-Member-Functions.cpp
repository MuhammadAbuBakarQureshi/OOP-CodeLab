#include <iostream>

using namespace std;

class Database{

private:

    int data;

public:

    void set_data(int d){

        data = d;
    }

    void set(int d) const{

        // I cannot use set function to store value in data,
        // because it is constant function.

        // data = d; // this line will give compile time error
    }

    void show() const {

        // I can use const key word here, because
        // I don't want to change the value in this function or store value
        // I  just want to print value in this function

        cout << "Data : " << data << endl;
    }

};

int main()
{

    Database d1;

    d1.set_data(10);

    d1.show();

    return 0;
}