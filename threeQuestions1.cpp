#include<iostream>
using namespace std;


int main(){
int number1, number2, number3;


cout << " 1. How much is 50 + 50? " << endl;
cin >> number1;

if(number1 == 100){
    cout << " 1. Great job! you got the right answer. " << endl;
}
else{
    cout << " 1. Nice job, but that is not the answer. " << endl;
}

cout << " 2. How much is 7 + 2? " << endl;
cin >> number2;

if(number2 == 9){
    cout << " 2. Great job! you got the right answer. " << endl;
}
else{
    cout << " 2. Nice job, but that is not the answer. " << endl;
}

cout << " 3. How much is 12 + 24? " << endl;
cin >> number3;

if(number3 == 36){
    cout << " 2. Great job! you got the right answer. " << endl;
}
else{
    cout << " 2. Nice job, but that is not the answer. " << endl;
}


return 0;

}