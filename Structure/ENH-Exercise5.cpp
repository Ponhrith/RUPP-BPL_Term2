#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <stdio.h>

using namespace std;

void Menu();
void display_more_then_600();
void add_300();
void withdraw_100();
void display_all();
void output();

struct aCustomer{
    int account_no;
    string name;
    float balance;

}info[5] = {{1, "Lyheng", 287},{2, "Lymeng", 759},{3, "Visal", 362}, {4, "Mengseu", 327}, {5, "Ponrith", 123}};



int main(){
    Menu();
    
}

void Menu(){
    char userInput;

    string a = "Type (1) to see the account number, name and balance of all customers: \n";
    string b = "Type (2) to see the account number, name and balance of all customers having balance more than $600: \n"; 
    string c = "Type (3) Add $300 to the balance of all the customers having balance less than $500: \n";
    string d = "Type (4) Withdraw $100 in the balance of all the customers having balance more than $200: \n";
    string menu = a + b + c + d;

    cout << menu;
    scanf ("%c", &userInput);
    switch (userInput)
    {

        case '1':
            display_all();
            break;
            Menu();

        case '2':
            display_more_then_600();
            // Menu();
            break;

        case '3':
            add_300();
            // Menu();
            break;

        case '4':
            withdraw_100();
            // Menu();
            break;

    }

    return;
}

void output(int i){
    cout << "Account No: " << info[i].account_no << endl;
    cout << "Name: " << info[i].name << endl;
    cout << "Balance: " << info[i].balance << "\n\n";
}

void display_all(){
    for(int i = 0; i < 5; i++){
        output(i);
    }
}

void display_more_then_600(){
    for(int i = 0; i < 5; i++){
        if(info[i].balance > 600){
            output(i);
        }
    }
}

void add_300(){
    for(int i = 0; i < 5; i++){
        if(info[i].balance < 500){
            info[i].balance += 300;
            output(i);
        }
    }
}

void withdraw_100(){
    for(int i = 0; i < 5; i++){
        if(info[i].balance > 200){
            info[i].balance -= 100;
            output(i);
        }
        
    }
}