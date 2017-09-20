#include<iostream>
#include "temperature.hpp"
using namespace std;





void temperature::setTempKelvin(double temperature)
{


    kelvin = celsius + 273.15;

    return kelvin;

}

void temperature::setTempFahrenheit(double temperature)
{
    fahrenheit = celsius * (9.0/5) + 32;

    return fahrenheit;

}


void temperature::setTempCelsius(double temperature)
{

    celsius = (5.0/9) * (fahrenheit - 32);

    return celsius;




}


