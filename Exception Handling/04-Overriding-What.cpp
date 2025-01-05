#include <iostream>
#include <exception>

using namespace std;

struct MyException: public exception{

    const char* what() const throw () {

        return "Exception occured";
    }

};

int main()
{

    try{

        throw MyException();

    }  catch(MyException a){

        cout << a.what() << endl;
    }

    return 0;
}