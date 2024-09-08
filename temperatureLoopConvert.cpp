#include<iostream>
using namespace std;


int main(){
    int temperatures[3] = {-40,0,100};
    float temperature;
    cout << "Temperatures From Celsius To Fahrenheit" << endl;
    cout << "=======================================" << endl;
    for (int i = 0; i < 3; i++){
        temperature = 9.0/5*temperatures[i]+32.0;
        cout << temperatures[i] << "\t\t" << temperature << endl;
    }
    return 0;
}                           