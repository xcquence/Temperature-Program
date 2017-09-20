#include<iostream>
#include "temperature.cpp"
using namespace std;

int main()
{
    double temperature;
    double fahrenheit = 0, celsius = 0, kelvin = 0;
    char choice;

    cout << "What kind of temperature would you like to enter? " << endl;
    cout << "Fahrenheit = f, Celsius = c, Kelvin = k" << endl;
    cin >> choice;


    if(choice == 'f')
    {
        cout << "Enter the temperature: " << endl;
        cin >> temperature;

        cout << "Your temperature in Fahrenheit is: " << fahrenheit << endl;
        cout << "Your temperature in Celsius is: " << setTempCelsius() << endl;
        cout << "Your temperature in Kelvin is " << setTempKelvin() << endl;

    }

    if(choice == 'c')
    {
        cout << "Enter the temperature: " << endl;
        cin >> temperature;

        cout <<"Your temperature in Celsius is: " << celsius << endl;
        cout <<"Your temperature in Fahrenheit is: " << setTempFahrenheit() << endl;
        cout << "Your temperature in Kelvin is: " << setTempKelvin() << endl;

    }

    if (choice == 'k')
    {
        cout << "Enter the temperature: " << endl;
        cin >> temperature;

        cout << "Your temperature in Kelvin is: " << endl;
        cout << "Your temperature in Fahrenheit is: " << setTempFahrenheit() << endl;
        cout << "Your temperature in Celsius is: " << setTempCelsius() << endl;

    }





}


/* On my honor,
The following program is a result of personal effort. I have not discussed with
anyone other than my instructor or any appropriate person in charge of the
class.
I have not used code or portion of code from another student, or any other
unauthorized source, either modified or unmodified.
If any C++ language code or documentation used in my program was obtained
from another source, such as a text book or course notes, that has been clearly
noted with a proper citation in the comments of my program.
I have not designed this program in such a way as to defeat or interfere with
the normal operation of the eniac system or cslab machines at Hunter College .
< Jeong Yang aka John Yang >
/*

