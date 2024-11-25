#include <iostream>

using namespace std;

class Database{

private:

    int data;

private:

    friend int get_data(Database obj);

    int get(Database d);
};

int Database::get(Database d){

    return d.data;
}

int get_data(Database obj){
    
    return obj.data;
}

int main()
{

    Database d1;

    get_data(d1);

    return 0;
}