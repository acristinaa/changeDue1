#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int temp[5] = {92, 88, 78, 88, 84};

cout << "Berkeley, California forecast high temperatures:" << endl;
cout << "Monday, September 5th: " << temp[0] << endl;
cout << "Tuesday, September 6th: " << temp[1] << endl;
cout << "Wednesday, September 7th: " << temp[2] << endl;
cout << "Thursday, September 8th: " << temp[3] << endl;
cout << "Friday, September 9th: " << temp[4] << endl;

sort(temp, temp + 5);
cout << "The lowest temperature is: " << temp[0] << endl;
cout << "The highest temperature is: " << temp[5-1] << endl;

cout << "Source: The Weather Channel";
    return 0;
}
