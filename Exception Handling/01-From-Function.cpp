#include <iostream>

using namespace std;

double division(int num1, int num2){

    if (num2 == 0){

        throw "Division by zero error";
    }

    return num1 / num2;
}

int main()
{

    int num1, num2;

    cout << "Enter numerator : ";

    cin >> num1;

    cout << "Enter denominator : ";

    cin >> num2;

    try{

        cout << "Division result : " << division(num1, num2) << endl;
    }

    catch (const char* message)
    {

        cout << "Denominator  is equal to zero" << endl;
    }

    return 0;
}