#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    string coin[2] = {"Heads", "Tails"};
    srand(time(0));
    int tosses, counter;

    cout << "How many coin tosses would you like to perform? ";
    cin >> tosses;

    for(counter = 0; counter < tosses; counter++){
        int num = rand() % 2;
        if(tosses == 0){
            break;
        }
        else if(num == 0){
        cout << coin[0] << "\n";
    }else if(num == 1){
        cout << coin[1] << "\n";
        }
    }

    return 0;
}
 