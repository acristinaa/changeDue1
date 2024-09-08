#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct student{
    string name, address, city, state, gender;
    int zip = 0, studentID = 0;
    float gpa = 0;
};

int getInfo(student& s);
void printInfo(student s);

int main(){
    student students[3];
    for(int i = 0; i < 3; i++){
        getInfo(students[i]);
        cout << "\n";
    }
    cout << " 1st Student: ";
    printInfo(students[0]);
    cout << " 2nd Student: ";
    printInfo(students[1]);
    cout << " 3rd Student: ";
    printInfo(students[2]);
    return 0;
}

int getInfo(student& s){
    cout << "Enter name: ";
    getline(cin,(s.name));
    cout << "Enter address: ";
    getline(cin,(s.address));
    cout << "Enter city: ";
    cin >> s.city;
    cin.ignore();
    cout << "Enter state: ";
    cin >> s.state;
    cin.ignore();
    cout << "Enter zip code: ";
    cin >> s.zip;
    cin.ignore();
    cout << "What is your gender? ";
    cin >> s.gender;
    cin.ignore();
    cout << "Enter student ID: ";
    cin >> s.studentID;
    cin.ignore();
    cout << "Enter GPA: ";
    cout << setprecision(1) << fixed;
    cin >> s.gpa; 
    cin.ignore();
    return 0; 
}

void printInfo(student s){
    cout << "\n\n";
    cout << " - Name: " << s.name << endl;
    cout << "\n";
    cout << " - Address: " << s.address << endl;
    cout << "\n";
    cout << " - City: " << s.city << endl;
    cout << "\n";
    cout << " - State: " << s.state << endl;
    cout << "\n";
    cout << " - Zip Code: " << s.zip << endl;
    cout << "\n";
    cout << " - Gender: " << s.gender << endl;
    cout << "\n";
    cout << " - Student ID: " << s.studentID << endl;
    cout << "\n";
    cout << " - GPA: " << s.gpa << endl;
    cout << "\n\n";
}