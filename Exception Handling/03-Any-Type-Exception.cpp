#include <iostream>

using namespace std;

class Printer{

private:

    string name;
    int available_papers;

public:

    Printer(string name, int papers){

        this->name = name;
        this->available_papers = papers;
    }

    void printDocument(string text_doc){

        int papers_required = text_doc.length() / 10; // one page can print only 10 letters

        if(papers_required > this->available_papers){

            throw 101;
        }

        cout << "Printing.... \n" <<  text_doc << endl;

        this->available_papers -= papers_required;
    }
};

int main()
{

    Printer dell("dell 123", 5);

    try{

        dell.printDocument("Hello, my name is Muhammad Abu Bakar Qureshi");
        dell.printDocument("Hello, my name is Muhammad Abu Bakar Qureshi");
    }
    catch(...){ //

        cout << "Exception occur" << endl;
    }


    return 0;
}