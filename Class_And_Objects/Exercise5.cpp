/*Define a class called String that contains:
- A string data field named value.
- A index_of() method that accept a character, then returns the index of the first occurrence of the
character if found, otherwise, returns -1.
- A count_char() method that accepts a character, then returns the number of the character in the
string.
- A remove_char() method that accepts a character, then removes all the character from the string.
- A upper() method that changes case of the string to upper case.
- A reverse() method that reverses the string*/

#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


char character, letter;
class String
{
    private:
    string value;

    public:
    String (string value)
    {
        this -> value = value;
    }
    
    int count_char()
    {
        int count = 0;
        for (int i = 0; i < value.size(); i++)
        {
            count++;
            if(value[i] == '.')
            {
                break;
            }
            else if (value[i] == ' ')
            {
                count--;
            }
        }
        return count;
    }
    



    void upper()
    {
        string value1;
        cout << "The uppercase of value is ";
        for (int i = 0; i < value.size(); i++)
        {
            value1 = toupper(value[i]);
            cout << value1;
        }        
    }



    void remove_char(char letter)
    {
    cout << "Initial : " << value << endl;
    value.erase(remove(value.begin(), value.end(),letter ), value.end());
    cout << "Final : " << value;
    }


    void reverse()
    {   cout << "\nThe reverse string is: ";
        for (int i = value.length() - 1; i >= 0; i--)
        cout << value[i];
    }


    int index_of(char character)
    {
        int count = -1, i;
        
            for(int i = 0; i < value.size(); i++)
                {
                    if (value[i] == character)
                    {    
                        return i - count;
                    }
                    else if ( value[i] == ' ')
                    {
                        count++ ;
                    }
                    
                }
                    
            return -1;
                    
            
    }

};

int main()
{
    String string1("I love my family.");
    cout << "I love my family." << endl;
    cout << "Please input character to know index: ";
    cin >> character;
    cout << "The index of " << character << " is " << string1.index_of(character);
    cout << "\nThe numbers of string is: " << string1.count_char()<<endl;
    string1.upper();
    cout << "\nEnter the letter to be removed: ";
    cin >> letter;
    string1.remove_char(letter);
    string1.reverse();
}