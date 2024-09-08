#include<iostream>
#include <iomanip>
using namespace std;


double calcAverage(int a, int b, int c){
    double result = 0.0;
    result = (a + b + c) / 3.0;
    cout << setprecision(2) << fixed;
    return result;
}
int main(){
    int number[3];
    for(int i = 0; i < 3; i++){
    cout << "Enter the whole number: ";
    cin >> number[i];
}
double a = calcAverage(number[0], number[1], number[2]);
    cout << "The average is: " << a << endl;
return 0;
}


