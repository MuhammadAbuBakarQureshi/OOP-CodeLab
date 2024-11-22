#include <iostream>

using namespace std;

class  Database{

private:

    const int data;

public:

    Database(int d): data(d) {}

    void set_data(int d){

        // data = d; This cannot be modified because it is constant
    }

    void get_data(){

        cout << "Data : " <<  data << endl;
    }

};

int main()
{

    Database d1(10);

    d1.get_data();

    return 0;
}