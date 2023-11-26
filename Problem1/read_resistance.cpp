/* Created by Jasmine Franklin
 *Uses Ain0 to read analog value, and measures the resistance.
 */

#include<iostream>
#include<cmath>
#include "AnalogIn.h"

using namespace std;

int main(int argc, char* argv[])
{
AnalogIn analog(0);
int value = analog.readAdcSample();

// written ADC value based on voltage divider
//solved for resistor value
float resistance = round(-(((10000*4096)/((float)value-4096))+10000));

cout << "Using AIN0" << endl;
cout << "ADC Value: " << value << endl;

if(resistance < 100)
{
cout << "Resistance too late. Resistor must be minimum of 100 Ohms" << endl;
}else if(resistance < 1000 && resistance >= 100)
{
cout << "Resistance: " << resistance << " Ohms" << endl;
}else if(resistance >= 1000 && resistance < 100000)
{
resistance = resistance/1000;
cout << "Resistance: " << resistance << " Kohms" << endl;
}else if(resistance >= 100000)
{
cout << "Resistance too high/pin floating. Resistor must be less than 100 KOhms" << endl;
}

}
