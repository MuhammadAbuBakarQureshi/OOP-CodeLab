#include <iostream>

using namespace std;

class database{

private:

    int data;

public:

    void set_data(int d){

        data = d;
    }

    void get_data(){

        cout << "Data : " << data << endl;
    }

};

int main()
{

    database obj;

    cout << sizeof(obj) << endl; // It is going to print 4 bytes becuase int require  4 bytes
    // Functions are same for every object

    return 0;
}