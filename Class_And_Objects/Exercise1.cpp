/* 1. Design a class named Stock to represent a company’s stock that contains:
    • A private string data field named symbol for the stock’s symbol.
    • A private string data field named name for the stock’s name.
    • A private float data field named previous_closing_price that stores the stock price for the previous day.
    • A private float data field named current_price that stores the stock price for the current time.
    • A constructor that creates a stock with the specified symbol, name, previous price, and current price.
    • A get method for returning the stock name.
    • A get method for returning the stock symbol.
    • Get and set methods for getting/setting the stock’s previous price.
    • Get and set methods for getting/setting the stock’s current price.
    • A method named getChangePercent() that returns the percentage changed from 
    previous_closing_price e to current_price.

    Write a test program that creates a Stock object with the stock symbol INTC, the name Intel
    Corporation, the previous closing price of 20.5, and the new current price of 20.35, and display the
    price-change percentage. */
    

#include <iostream>
using namespace std;

class stock
{
    private:
    string symbol, name;
    float previous_closing_price, curren_price;

    public:
    stock(string symbol, string name, float previous_closing_price, float curren_price)
    {
        this->symbol = symbol;
        this->name = name;
        this->previous_closing_price = previous_closing_price;
        this->curren_price = curren_price;
    }


    string return_name()
    {
        return name;
    }
    string stock_symbol()
    {
        return symbol;
    }
    float previous_price()
    {
        return previous_closing_price;
    }
    float currenprice()
    {
        return curren_price;
    } 
    void set__previous(int previous_closing_price)
    {
        this -> previous_closing_price = previous_closing_price;
    }
    float get_previous()
    {
        return previous_closing_price;
    }
    void set_current(int curren_price)
    {
        this -> curren_price = curren_price;
    }
    float get_current()
    {
        return curren_price;
    }    
    float getChangePercent(float curren_price,float previous_closing_price)
    {
        return ((get_current() - get_previous()) * 100)/ get_previous(); 
    }

};



int main()
{

    stock stock1("INTC", "Intel Corporation", 20.5, 20.35);
    cout << stock1.stock_symbol() << endl << stock1.return_name()<< endl;
    cout << "\n\nprevious closing price is " << stock1.previous_price() << endl;
    cout <<  "new current price is " << stock1.currenprice()<< endl;
    cout << "\nThe percentage of price exchange is: " << stock1.getChangePercent(20.35,20.5);
    return 0;

}