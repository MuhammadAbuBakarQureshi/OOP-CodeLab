#include <iostream>

using namespace std;

class Database{

private:

    int data;

public:

    Database(int d): data(d){}

    void set_data(int d){

        data = d;
    }

    int show_data() const {

        cout << "Data : " << data << endl;

        return data;
    }
};

int main()
{

    const Database d1(10);

    // You cannot change the value of data
    // and can only access the members that are constant

    cout << d1.show_data();

    return 0;
}