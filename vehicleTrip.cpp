#include<iostream>
using namespace std;

int main(){
    int distance, rate, time;

    cout << "Please type the speed of your vehicle in miles per hour: ";
    cin >> rate;

    cout << "Please type how many hours your vehicle has traveled: ";
    cin >> time;

    if(rate >= 0 && time >= 1){
        cout << "Hours     Distance Traveled" << endl;
        cout << "==============================" << endl;
        for(int i = 1; i <= time; i++){
            distance = rate*i;
            cout << i << "\t\t" << distance << endl;
        }
    }
    else{
        cout << "Your information is not valid, please try again.";
    }

    return 0;
}