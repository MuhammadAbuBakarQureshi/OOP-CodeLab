#include <iostream>

using namespace std;

class Database{

private:

    int data;

public:

    Database(int d): data(d) {}

    friend int get_data(Database obj);
};

int get_data(Database obj){
    
    return obj.data;
}

int main()
{

    Database d1(10);

    cout << get_data(d1) << endl;

    return 0;
}