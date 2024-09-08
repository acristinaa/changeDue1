#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int n = 5;
    int temp[n];
    int count1 = 0 , count2 = 0;

    for(int i = 0; i < 5; i++){
        cout << "Please input the temperatures for the 5 days of the week: ";
        cin>>temp[i]; 
    }

cout << "Berkeley, California forecast high temperatures:" << endl;
cout << "Monday, September 5th: " << temp[0] << endl;
cout << "Tuesday, September 6th: " << temp[1] << endl;
cout << "Wednesday, September 7th: " << temp[2] << endl;
cout << "Thursday, September 8th: " << temp[3] << endl;
cout << "Friday, September 9th: " << temp[4] << endl;

sort(temp, temp + 5);
for(int x = 0; x < 5; x++){
    if(temp[x] == temp[0])
    count1++;
}
if(count1 <= 1){
    cout << "The lowest temperature is: " << temp[0] << ", ocurring: " << count1 << " time." << endl;
}else{
    cout << "The lowest temperature is: " << temp[0] << ", ocurring: " << count1 << " times." << endl;
}
for(int y = 0; y < 5; y++){
    if(temp[y] == temp[5-1])
    count2++;
}
if(count2 >=2){ 
    cout << "The highest temperature is: " << temp[5-1] << ", ocurring: " << count2 << " times." << endl;
}else{
    cout << "The highest temperature is: " << temp[5-1] << ", ocurring: " << count2 << " time." << endl;
}
cout << "Source: The Weather Channel";
    return 0;
} 