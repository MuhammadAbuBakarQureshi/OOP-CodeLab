#include <iostream>

using namespace std;

class database{

private:

    int data;

public:

    database(){}

    database(int d): data(d){}

    ~database(){
        
        

        cout << "Object is  deleted" << endl;
    }

};

int main()
{

    database* n1 = new database(10);

    // It is not going delete (even program is ended) untill we are going to delete

    delete n1;

    return 0;
}