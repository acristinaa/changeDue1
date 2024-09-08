#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void getScore(int &number){
    cin >> number;
   if (number < 0){
    cout << "The program stopped because a test score is negative" << endl;
    exit(0);
   } else if(number > 100){
    cout << "The program stopped because a test score is greater than 100" << endl;
    exit(0);
   }
}

int findLowest(int scores[5]){
    sort(scores, scores + 5);
    return scores[0];
}

void calcAverage(int scores[5]){
    int min = findLowest(scores), sum =0;
    bool dropped = false;
    for(int i = 0; i < 5; i++){
        if(!dropped && scores[i] == min){
            dropped = true;
            continue;
        }
        sum += scores[i];
    }
    int avg = sum / 4;
    cout << "The average of the five test scores is: " << avg << endl;
}

int main(){
    int n = 5;
    int scores[n];
    for(int i = 0; i < n; i++){
        cout << "Enter the " << i+1 << " test score: ";
        getScore(scores[i]);
    }
    calcAverage(scores);
    return 0;
}

