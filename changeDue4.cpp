#include<iostream>
using namespace std;
int main(){
  int cashPayment = 0; 
  int amountTendered = 0; 
 
 while(true){
  cout << "\nInsert cash payment Amount: ";
  cin >> cashPayment;
if(cashPayment <= 0){
    break;
}
  cout << "Tendered amount: ";
  cin >> amountTendered;
  if(amountTendered <= 0){
    break;
}
  int changeDue = cashPayment - amountTendered; 
 
  cout << "Change due: " << changeDue << endl; 
 
  int hundredThousands = changeDue / 100000; 
  changeDue = changeDue % 100000; 
 
  int tenThousands = changeDue / 10000; 
  changeDue = changeDue % 10000; 

  int fiveThousands = changeDue / 5000;
  changeDue = changeDue % 5000;

  int oneThousand = changeDue / 10000;
  changeDue = changeDue % 10000;

  int fiveHundred = changeDue / 500;
  changeDue = changeDue % 500;

  int oneHundred = changeDue / 100;
  changeDue = changeDue % 100;

  int fiftyBill = changeDue / 50;
  changeDue = changeDue % 50;

  int twentyBill = changeDue / 20;
  changeDue = changeDue % 20;

  int tenBill = changeDue / 10;
  changeDue = changeDue % 10;

  int fiveBill = changeDue / 5;
  changeDue = changeDue % 5;

  int twoBill = changeDue / 2;
  changeDue = changeDue % 2;

  int oneBill = changeDue / 1;
  changeDue = changeDue % 1;



  cout << "Change paid out in: " << endl;
  if(hundredThousands > 0){
  cout << " this many one hundred thousand dollar bills: " << hundredThousands << endl;
  }
  if(tenThousands > 0){
  cout << " this many ten thousand dollar bills: " << tenThousands << endl;
  }
  if(fiveThousands > 0){
  cout << " this many five thousand dollar bills: " << fiveThousands << endl;
  }
  if(oneThousand > 0){
  cout << " this many one thousand dollar bills: " << oneThousand << endl;
  }
  if(fiveHundred > 0){
  cout << " this many five hundred dollar bills: " << fiveHundred << endl;
  }
  if(oneHundred > 0){
  cout << " this many one hundred dollar bills: " << oneHundred << endl;
  }
  if(fiftyBill > 0){
  cout << " this many fifty dollar bills: " << fiftyBill << endl;
  }
  if(twentyBill > 0){
  cout << " this many twenty dollar bills: " << twentyBill << endl;
  }
  if(tenBill > 0){
  cout << " this many ten dollar bills: " << tenBill << endl;
  }
  if(fiveBill > 0){
  cout << " this many five dollar bills: " << fiveBill << endl;
  }
  if(twoBill > 0){
  cout << " this many two dollar bills: " << twoBill << endl;
  }
  if(oneBill > 0){   
  cout << " this many one dollar bills: " << oneBill << endl;
  }
 }
    return 0;
}