#include<iostream>
#include<string>
using namespace std;

int main(){
int age = 0;
double temperature = 0;
string name, city;

cout << "Please enter your age: " << endl;
cin >> age;
cin.ignore();

cout << "Please enter your full name: " << endl;
getline(cin,name);

cout << "Please enter the temperature outside right now in Farenheit: " << endl;
cin >> temperature;
cin.ignore();

cout << "What city are you located right now? " << endl;
getline(cin,city);

cout << name << " is " << age << endl;
cout << "It is " << temperature << " degrees F at " << city << endl;


return 0;

}