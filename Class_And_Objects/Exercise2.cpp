/* 2. Design a class named Account that contains:
    • A private int data field named id for the account.
    • A private float data field named balance for the account.
    • A private float data field named annual_interest_rate that stores the current interest rate.
    • A constructor that creates an account with the specified id (default 0), initial balance (default 100), 
      and annual interest rate (default 0).
    • The accessor and mutator (get and set) methods for id, balance, and annual_interest_rate.
    • A method named get_monthly_interestRate() that returns the monthly interest rate.
    • A method named get_monthly_interest() that returns the monthly interest.
    • A method named withdraw that withdraws a specified amount from the account.
    • A method named deposit that deposits a specified amount to the account.

    Hint: The method get_monthly_interest() is to return the monthly interest amount, not the
    interest rate. Use this formula to calculate the monthly interest:

    monthly_interest = balance * monthly_interest_rate

    Where monthly_interest_rate is annual_interest_rate / 12. Note that annual_interest_rate is a percent
    (like 4.5%). You need to divide it by 100.

    Write a test program that creates an Account object with an account id of 1122, a balance of
    $20,000, and an annual interest rate of 4.5%. Use the withdraw method to withdraw $2,500, use the
    deposit method to deposit $3,000, and print the id, balance, monthly interest rate, and monthly
    interest. */

#include <iostream>
using namespace std;

class Account{
    private:
        int id;
        float balance;
        float annual_interest_rate ;

    public:
        Account(int id, float balance, float annual_interest_rate){
            this->id = id;
            this->balance = balance;
            this->annual_interest_rate = annual_interest_rate;
        }

        // mutator
        void set_id(int id){
            this->id = id;
        }
        void set_balance(float balance){
            this->balance = balance;
        }
        void set_annual_interest_rate(float annual_interest_rate){
            this->annual_interest_rate = annual_interest_rate;
        }

        // accessor
        int get_id(){
            return id;
        }
        float get_balance(){
            return balance;
        }
        float get_annual_interest_rate(){
            return annual_interest_rate / 100;
        }

        float get_monthly_interestRate(){
            return get_annual_interest_rate() / 12;
        }
        float get_monthly_interest(){
            return get_balance() * get_monthly_interestRate();
        }

        float withdraw(float money){
            return balance = balance - money;
        }
        float deposit(float money){
            return balance = balance + money;
        }


};

int main(){

    Account acc(0, 100, 0);

    acc.set_id(1122);
    acc.set_balance(20000);
    acc.set_annual_interest_rate(4.5);
    
    acc.withdraw(2500);
    acc.deposit(3000);

    cout << "ID: " << acc.get_id() << endl;
    cout << "Balance: " << acc.get_balance() << endl;
    cout << "Monthly Interest Rate: " << acc.get_monthly_interestRate() << endl;
    cout << "Monthly Interest: " << acc.get_monthly_interest() << endl;

}