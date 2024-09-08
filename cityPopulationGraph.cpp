#include<iostream>
#include<string>
using namespace std;

int main(){
    int years[7] = {1922, 1942, 1962, 1982, 2002, 2012, 2022};
    int population[7] = {2000, 5000, 6000, 9000, 14000, 15000, 17000};
    int quantity = 0;
    char k = '#';

    cout << "Prairieville, Louisiana Population Growth (each # represents 1000 people)" << endl;
    cout << "==============================================================" << endl;

    for(int i = 0; i < 7; i++){
        quantity = population[i]/1000;
        cout << years[i] << " " << string(quantity,k) << endl;
    }

    return 0;
}