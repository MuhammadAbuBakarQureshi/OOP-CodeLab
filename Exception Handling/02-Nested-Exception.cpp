#include <iostream>

using namespace std;

int main()
{

    int x = 10;

    cout << "Enter number between 0 and 100 : ";

    cin >> x;

    try
    {

        if (x < 0)
        {

            throw x;
        }
        else
        {

            if (x > 100)
            {

                throw x;
            }else{

                cout << "Correct Input" << endl;
            }
        }
    }

    catch (int x)
    {

        cout << "Invalid input" << endl;
    }

    return 0;
}