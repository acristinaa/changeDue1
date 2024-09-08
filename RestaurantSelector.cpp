#include<iostream>
#include<string>
using namespace std;

int main(){
    string isVegetarian, isVegan, isGF;

    
    cout << "Is your party Vegetarian? ";
    cin >> isVegetarian;

    cout << "Is your party Vegan? ";
    cin >> isVegan;

    cout << "Is your party Gluten Free? ";
    cin >> isGF;

    if(isVegetarian == "yes" && isVegan == "yes" && isGF == "yes"){
        cout << "Your Restaurant options are: " << endl;
        cout << " 1. Skina Cafe " << endl;
        cout << " 2. The Chef's House " << endl;
    } 
    else if(isVegetarian == "yes" && isVegan == "yes" && isGF == "no"){
        cout << "Your Restaurant options are: "<< endl;
        cout << " 1. Skina Cafe " << endl;
        cout << " 2. The Chef's House " << endl;
    }
    else if(isVegetarian == "no" && isVegan == "no" && isGF == "yes"){
        cout << "Your restuarant options are: " << endl;
        cout << " 1. Mamma Mia Pizza " << endl;
        cout << " 2. Skina Cafe " << endl;
        cout << " 3. The Chef's House " << endl;
    }
    else if(isVegetarian == "yes" && isVegan == "no" && isGF == "yes"){
        cout << "Your restuarant options are: " << endl;
        cout << " 1. Mamma Mia Pizza " << endl;
        cout << " 2. Skina Cafe " << endl;
        cout << " 4. The Chef's House " << endl;

    }
    else if(isVegetarian == "no" && isVegan == "no" && isGF == "no"){
        cout <<"Your Restaurant options are: " << endl;
        cout << " 1. Big Boy Burgers." << endl;
        cout << " 2. Mamma Mia Pizza " << endl;
        cout << " 3. Skina Cafe " << endl;
        cout << " 4. Elegante Italiano " << endl;
        cout << " 5. The Chef's House " << endl;
    }
    else if(isVegetarian == "no" && isVegan == "yes" && isGF == "yes"){
        cout <<"Your Restaurant options are: " << endl;
        cout << " 1. Skina Cafe " << endl;
        cout << " 2. The Chef's House " << endl;

    }
    else if(isVegetarian == "yes" && isVegan == "no" && isGF == "no"){
        cout <<"Your Restaurant options are: " << endl;
        cout << " 1. Mamma Mia Pizza " << endl;
        cout << " 2. Skina Cafe " << endl;
        cout << " 3. Elegante Italiano " << endl;
        cout << " 4. The Chef's House " << endl;

    }
    else if(isVegetarian == "no" && isVegan == "yes" && isGF == "no"){
        cout <<"Your Restaurant options are: " << endl;
        cout << " 1. Skina Cafe " << endl;
        cout << " 2. The Chef's House " << endl;
    }
    

    return 0;
}