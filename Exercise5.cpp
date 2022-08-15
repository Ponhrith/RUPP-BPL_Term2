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
    float loanReceived; 
   } Bank0, Bank1, Bank2, Bank3, Bank4;

   Bank0.Bank = "0";
   Bank0.Balance = 25;
   Bank0.Loan1 = 100.5; //1
   Bank0.Loan2 = 320.5; //4
   Bank0.Asset = Bank0.Balance + Bank0.Loan1 +Bank0.Loan2;
   Bank0.loanReceived = Bank2.Loan1 + Bank3.Loan1;
   //cout << Bank0.Asset;

   Bank1.Bank = "1";
   Bank1.Balance = 125;
   Bank1.Loan1 = 85; //2
   Bank1.Loan2 = 40; //3
   Bank1.Asset = Bank1.Balance + Bank1.Loan1 +Bank1.Loan2;
   Bank1.loanReceived = Bank0.Loan1; 

   Bank2.Bank = "2";
   Bank2.Balance = 175;
   Bank2.Loan1 = 125; //0
   Bank2.Loan2 = 75; //3
   Bank2.Asset = Bank2.Balance + Bank2.Loan1 +Bank2.Loan2;
   Bank2.loanReceived = Bank1.Loan1 + Bank4.Loan1; 

   Bank3.Bank = "3";
   Bank3.Balance = 75;
   Bank3.Loan1 = 125; //0
   Bank3.Loan2 = 0;
   Bank3.Asset = Bank3.Balance + Bank3.Loan1 +Bank3.Loan2;
   Bank3.loanReceived = Bank1.Loan2 + Bank2.Loan2;
  
   Bank4.Bank = "4";
   Bank4.Balance = 181;
   Bank4.Loan1 = 125; //2
   Bank4.Loan2 = 0;
   Bank4.Asset = Bank4.Balance + Bank4.Loan1 +Bank4.Loan2;
   Bank4.loanReceived = Bank0.Loan2;

   if (user_input<Bank0.Asset){
    cout << "Bank 0 is safe." << "\n";
   }else{
    cout << "Bank 0 is unsafe."<< "\n";
   }

   if (user_input<Bank1.Asset){
    cout << "Bank 1 is safe."<< "\n";
   }else{
    cout << "Bank 1 is unsafe."<< "\n";
   }

   if (user_input<Bank2.Asset){
    cout << "Bank 2 is safe."<< "\n";
   }else{
    cout << "Bank 2 is unsafe."<< "\n";
   }

   if (user_input<Bank3.Asset){
    cout << "Bank 3 is safe."<< "\n";
   }else{
    cout << "Bank 3 is unsafe."<< "\n";
   }

   if (user_input<Bank4.Asset){
    cout << "Bank 4 is safe."<< "\n";
   }else{
    cout << "Bank 4 is unsafe."<< "\n";
   }



}
