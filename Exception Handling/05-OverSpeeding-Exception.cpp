#include <iostream>
#include <exception>

using namespace std;

class OverSpeed
{

private:
    int speed;

public:
    const char *what()
    {

        return "overSpeeding";
    }

    void setSpeed(int speed){

        this->speed = speed;
    }

    int getSpeed(){

        return speed;
    }
};

class Car
{

    int speed;

public:
    Car()
    {

        speed = 0;

        cout << "Speed sets to zero" << endl;
    }

    void accelerateCar()
    {

        for (;;)
        {
            
            cout << speed << endl;

            speed += 10;


            if (speed > 250)
            {

                OverSpeed s;
                s.setSpeed(speed);
                throw s;
            }
        }
    }
};

int main()
{

    Car c;

    try{

        c.accelerateCar();
    }
    catch(OverSpeed s){

        cout << s.what() << endl;
        cout << "You cannot speed that much" << endl;
        cout << "Current Speed = " << s.getSpeed() << endl;
    }

    return 0;
}