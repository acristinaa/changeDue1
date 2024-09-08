#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    string coin[2] = {"Heads", "Tails"};
    srand(time(0));
    int num = rand() % 2;

    if(num == 0){
        cout << coin[0];
    }else if(num == 1){
        cout << coin[1];
        }

    return 0;
}
