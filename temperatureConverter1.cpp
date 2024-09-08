#include<iostream>
#include<string>
using namespace std;

int main(){
double temperature = 0, F = 0;



cout << "Please type the temperature in Celsius: " << endl;
cin >> temperature;

F = 9.0/5*temperature+32.0;

cout << "The temperature in Celsius " << temperature << " equals to: " << F << " Fahrenheit." << endl;

return 0;

}