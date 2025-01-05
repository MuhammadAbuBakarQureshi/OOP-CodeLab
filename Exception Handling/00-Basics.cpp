#include <iostream>

using namespace std;

int main()
{

    int num1, num2, result;

    cout << "Enter numerator : ";

    cin >> num1;

    cout << "Enter denominator : ";

    cin >> num2;

    try{

        if (num2 == 0){

            throw num2;
        }else{

            result = num1 / num2;

            cout << "Division result = " << result << endl;
        }
    }

    catch(int x){

        cout << "Denominator  is equal to zero" << endl;
    }

    return 0;
}