#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;

void additionProblem(int a, int b){
    int userAnswer;
    a = 0 + rand() % (11);
    b = 0 + rand() % (11);
    cout << "\n" << a << " + " << b << " = ";
    cin >> userAnswer;
    cin.ignore(1000, 10);

    int theAnswer = a + b;
    if(theAnswer == userAnswer){
        cout << "Correct!" << endl;
    }else{
        cout << "Very good, but a better answer is  " << theAnswer << endl;
    }

}
int main(){
    srand(time(NULL));
    for(int i = 0; i < 5; i++){
        additionProblem(i,i);
    }
    return 0;
}
