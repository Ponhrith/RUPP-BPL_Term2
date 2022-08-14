#include <iostream>
using namespace std;

int main(){ 
    int user_input;
    cout << "Enter the bank asset: " ;
    cin >> user_input;


   struct {
    string Bank;
    int Balance;
    float Loan1;
    float Loan2;
    float Asset;
   }Bank0, Bank1, Bank2, Bank3, Bank4;

   Bank0.Bank = "0";
   Bank0.Balance = 25;
   Bank0.Loan1 = 100.5;
   Bank0.Loan2 = 320.5;
   Bank0.Asset = Bank0.Balance + Bank0.Loan1 +Bank0.Loan2;
   cout << Bank0.Asset;


}
