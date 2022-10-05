#include <iostream>
using namespace std;

void funcA(){
    struct aCustomer{
        int account_no;
        string name;
        float balance;

    };

    aCustomer customer1;
    customer1.account_no = 0001;
    customer1.name = "Tommy";
    customer1.balance = 100;

    aCustomer customer2;
    customer2.account_no = 0002;
    customer2.name = "Arthur";
    customer2.balance = 700;

    aCustomer customer3;
    customer3.account_no = 0003;
    customer3.name = "Ada";
    customer3.balance = 400;

    aCustomer customer4;
    customer4.account_no = 0004;
    customer4.name = "John";
    customer4.balance = 600;

    aCustomer customer5;
    customer5.account_no = 0005;
    customer5.name = "Polly";
    customer5.balance = 300;

    cout << customer1.account_no << " " <<  customer1.name << " " << customer1.balance << "\n";
    cout << customer2.account_no << " " <<  customer2.name << " " << customer2.balance << "\n";  
    cout << customer3.account_no << " " <<  customer3.name << " " << customer3.balance << "\n";  
    cout << customer4.account_no << " " <<  customer4.name << " " << customer4.balance << "\n";  
    cout << customer5.account_no << " " <<  customer5.name << " " << customer5.balance << "\n";  


}

int main(){
    string userInput;

    string a = "Type (1) to see the account number, name and balance of all customers: \n";
    string b =  "Type (2) to see the account number, name and balance of all customers having balance more than $600: \n"; 
    string c = "Type (3) Add $300 to the balance of all the customers having balance less than $500: \n";
    string d = "Type (4) Withdraw $100 in the balance of all the customers having balance more than $200: \n";
    string menu = a + b + c + d;

    cout << menu;
    cin >> userInput;

    if (userInput == "1"){
        funcA();
    }


    return 0;
}

