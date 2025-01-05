#include <iostream>
#include <fstream>
#include <ostream>

using namespace std;

class DataBase
{

private:
    int data;

public:
    void setData(int data)
    {

        this->data = data;
    }

    int getData()
    {

        return data;
    }

    void writeData()
    {

        ofstream file("Data.txt", ios::out);

        if (file.is_open())
        {

            file << data;

            file.close();
        }
    }

    void readData()
    {

        ifstream file("Data.txt", ios::in);

        if (file.is_open())
        {

            file >> data;

            file.close();
        }
    }
};

int main()
{

    DataBase d1;

    d1.setData(10);

    cout << d1.getData() << endl;

    cout << "Data Stored in file = 10" << endl;

    d1.writeData();

    d1.setData(20);

    cout << d1.getData() << endl;
    
    d1.readData();
    
    cout << "Read data from file = " << d1.getData() << endl;

    return 0;
}