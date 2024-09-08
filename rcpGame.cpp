#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    srand(time(0)); 
    int human = 0, computer = 0;
    int computerNumber;;
    string RPS[3] = {"R", "P", "S"};
    string humanChoice, computerChoice;
    while(true){
        computerNumber = rand() % 3;
        computerChoice = RPS[computerNumber];
        cout << "Choose [Rock, Paper, Scissors, Quit]: ";
        cin >> humanChoice;
        if(humanChoice == "q" || humanChoice == "Q"){
            break;
        }
        if((humanChoice == "R" || humanChoice == "r") && computerChoice == "R"){
            cout << "Computer:R, Human:R, Tie" << endl;
        }
        else if((humanChoice == "R" || humanChoice == "r") && computerChoice == "P"){
            cout << "Computer:P, Human:R, computer wins" << endl;
            computer++;
        }
        else if((humanChoice == "R" || humanChoice == "r") && computerChoice == "S"){
            cout << "Computer:S, Human:R, human wins" << endl;
            human++;
        }
        else if((humanChoice == "P" || humanChoice == "p") && computerChoice == "R"){
            cout << "Computer:R, Human:P, computer wins" << endl;
            computer++;

        }
        else if((humanChoice == "P" || humanChoice == "p") && computerChoice == "P"){
            cout << "Computer:P, Human:P, Tie" << endl;
        }
        else if((humanChoice == "P" || humanChoice == "p") && computerChoice == "S"){
            cout << "Computer:S, Human:P, computer wins" << endl;
            computer++;
        }
        else if((humanChoice == "S" || humanChoice == "s") && computerChoice == "R"){
            cout << "Computer:R, Human:S, computer wins" << endl;
            computer++;
        }
        else if((humanChoice == "S" || humanChoice == "s") && computerChoice == "P"){
            cout << "Computer:P, Human:S, human wins" << endl;
            human++;
        }
        else if((humanChoice == "S" || humanChoice == "s") && computerChoice == "S"){
            cout << "Computer:S, Human:S, Tie" << endl;
        }
    }
    cout << "Computer wins: " << computer << endl;
    cout << "Human wins: " << human << endl;
    return 0;
}