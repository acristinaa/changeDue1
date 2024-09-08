#include<iostream>
#include<fstream>
using namespace std;

float CelsiusToFarenheit(float celsius){
    return 9.0/5*celsius+32.0;
}

int main(){
    ifstream inputFile;
    string line;
    float celsius;

    inputFile.open("Celsius.txt");

    while(getline(inputFile, line)){
        celsius = stof(line);
        if(celsius == -999){
            break;
        }
        cout << line << "Celsius equals: ";
        printf("%.1f Farenheit\n", CelsiusToFarenheit(celsius));
    }
    return 0;
}