/* 4. Define a class called Decimal that contains:
    - An int data field named value
    - A is_palindrome() method that returns true if the number is a palindrome, otherwise, returns
      false.
    - A is_prime() method that returns true if the number is a prime, otherwise, returns false.
      Primes are integers greater than one with no positive divisors besides 1 and itself
    - A to_binary() method that returns a corresponding number in binary.
    - A to_words() method that returns the name of the number in English. Example:
      to_words(123456) should return one hundred twenty-three thousand, four hundred fifty-six.

    In the test program, ask the user to enter a value between 0 and 999. */

#include <iostream>
#include <vector>

using namespace std;

class Decimal{

    private:
        int value;
        
    public:

        Decimal(int value){
            this-> value = value;
        }
        
        string reverse(){

            string reverse;

            for(int i = to_string(value).size() - 1; i >= 0; i--){
                reverse += to_string(value).at(i);
            }
            
            return reverse;
        }

        bool is_palindrome(){

            if(reverse() == to_string(value)){
                return true;
            }
            else{
                return false;
            }

        }

        bool is_prime(){

            int count = 0;

            for(int i = 1; i <= value; i++){
                if(value % i == 0){
                    count++;
                }
            }

            if(count == 2){
                return true;
            }
            else{
                return false;
            }
        }

        string to_binary(){

            string bin, rev;
            int temp = value;

            while(temp > 0){
                
                int rem = temp % 2;
                temp /= 2;
                bin += to_string(rem);
            }

            for(int i = bin.size() - 1; i >= 0; i--){
                rev += bin.at(i);
            }
            
            return rev;
        }

        string to_words(int value){
            
            vector<string> ones = {"zero", "one", "two", "three", "four", 
                                   "five", "six", "seven", "eight", "nine"};

            vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", 
                                    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

            vector<string> tens = {"", "", "twenty", "thirty", "forty", 
                                   "fifty", "sixty", "seventy", "eighty", "ninety"};

            if(value < 10){
                return ones[value];
            }
            else if(value < 20){
                return teens[value - 10];
            }
            else if(value < 100){
                return tens[value / 10] + ((value % 10 != 0) ? " " + to_words(value % 10) : " ");
            }
            else if(value < 1000){
                return to_words(value / 100) + " hundred" + ((value % 100 != 0) ? " " + to_words(value % 100) : " ");
            }

        }
};

int main(){

    int num;

    while(true){
        
        cout << "\nEnter a number(between 0 and 999): ";
        cin >> num;

        if(num < 1000 && num > -1){

            Decimal decimal(num);

            cout << endl;

            if(decimal.is_palindrome() == true){
                cout << ""<< num <<" is a palindrome" << endl;
            }  
            else{
                cout << ""<< num <<" is not a palindrome" << endl;
            }

            if(decimal.is_prime() == true){
                cout << ""<< num <<" is a prime number" << endl;
            }  
            else{
                cout << ""<< num <<" is not a prime number" << endl;
            }

            cout << "Binary: " << decimal.to_binary() << endl;

            cout << "English: " << decimal.to_words(num) << endl;
        }
        else{

            cout << "\nError, number must be between 0 and 999.\n";
        }

    }

    return 0;
}