#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class PersonalData{

private:

    string name;
    int age;
    string from;

public:

    void setData(string name, int age, string from){

        this->name = name;
        this->age = age;
        this->from = from;
    }

    void getData(){

        cout << "Name = " << name << endl
        << "Age = " << age << endl
        << "From = " << from << endl;
    }

    void writeData(){

        ofstream file("Information.txt", ios::out);
        
        if(file.is_open()){

            file << name << "\n" << age << "\n" << from;
            file.close();
        }
    }

    void readData(){

        ifstream file("Information.txt", ios::in);

        if(file.is_open()){

            while(getline(file, name)){

            }

            getline(file, name);
        
            file.close();
        }
    }
};

int main()
{

    PersonalData person;

    person.setData("Muhammad Abu Bakar", 19, "Islamabad");

    person.writeData();

    person.setData("Asad", 20, "Bari Imam");

    person.readData();

    person.getData();


    system("pause");

    return 0;
}