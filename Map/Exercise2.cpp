/*Write a simple ATM program. First, stores the account_no (001, 002, …005), name,
and balance and password of five customers. When the program starts, 
it asks the user to enter the account_no and
password to login. If login succeeded, 
it displays the following menus:
a. Balance
b. Withdraw
c. Deposit
d. Exit the program*/
#include <iostream>
#include <map>
using namespace std;
//function that check id if it match or not

bool check_id(map<int, map<string, string>> &customers, int id, bool check)
{ 
    if( (id == 001) || (id == 002) || (id == 003) || (id == 004) || (id == 005))
    {
        return true;
    } 
    else
    {
        return false;
    }
   
} 



bool checkP(map<int, map<string, string>> &customers, string password, int id){
    if((password == customers[id]["password"]))
    {
        return true;
    }
    else
    {
        return false;
    }
}



void show_balance(map<int, map<string, string>> &customers,int id)
{
    cout << "Your balance: " << customers[id]["balance"];
}



void withdraw_balance(map<int, map<string, string>> &customers,int id)
{
    cout << "\nYour balance:  " << customers[id]["balance"];
    float old_balance = stof(customers[id]["balance"]);
    cout << "\nHow much you want to get?  ";
    float get_balance, new_balance;
    cin >> get_balance;
    new_balance = old_balance - get_balance;
    string string_new_balance = to_string(new_balance);
    customers[id]["balance"] = string_new_balance;
    cout << "\nYour balance: " << customers[id]["balance"];
}



void Deposit_balance(map<int, map<string, string>> &customers,int id)
{
    cout << "\nYour balance:  " << customers[id]["balance"];
    float old_balance = stof(customers[id]["balance"]);
    cout << "\nHow much you want to add?  ";
    float get_balance, new_balance;
    cin >> get_balance;
    new_balance = old_balance + get_balance;
    string string_new_balance = to_string(new_balance);
    customers[id]["balance"] = string_new_balance;
    cout << "\nYour balance:  " << customers[id]["balance"];
}


//int main that show options
int main() {
    int id; 
    string password;
    char option;
    bool check = false, check1 = false;

    map<int, map<string, string>> customers = {
                                        {001, {{"Name", "Mengseu"}, {"balance", "500"}, {"password", "010101"}}},
                                        {002, {{"Name", "Ponrith"}, {"balance", "600"}, {"password", "020202"}}},
                                        {003, {{"Name", "Visal"}, {"balance", "700"}, {"password", "030303"}}},
                                        {004, {{"Name", "Lymeng"}, {"balance", "800"}, {"password", "040404"}}},
                                        {005, {{"Name", "Lyheng"}, {"balance", "900"}, {"password", "040404"}}}};

    cout << "This is ATM program\n\n ";
    cout << "Please input you account_no: ";
    cin >> id;
    check_id(customers, id ,check);
    check = check_id(customers, id ,check);
    if ( check == 1)
    {
        cout << "Please input your passwords: ";
        cin >> password;
        checkP(customers, password, id);
        check1 = checkP(customers, password, id);

        while(check1 == 1)
        {
            cout << "\nmenu: \n";
            cout << "\na. Balance";
            cout << "\nb. Withdraw";
            cout << "\nc. Deposit";
            cout << "\nd. Exit the program";
            cout << "\n\nPlease choose a option: ";
            cin >> option;

            if (option == 'a')
            {
                show_balance(customers, id);
            }
            else if(option == 'b')
            {
                withdraw_balance(customers, id);
            }
            else if (option == 'c')
            {
                Deposit_balance(customers, id);
            }
            else if (option == 'd')
            {
                cout << "\nThank you for choosing us. ";
                break;
            }
            else
            {
                cout << "\nOut of option please select again";
            }

        };

        if (check1 == 0)
        {
            cout << "\ncannot be loged in";
        }
    }
    else
    {
        cout << "\nError";
    }
   

}