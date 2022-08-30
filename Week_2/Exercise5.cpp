/* 5. Write a function called display_longest_word that will accept a string, then displays the longest
word within the string. */
#include <iostream>
#include <string>

using namespace std;
void display_longest_word(string str){
    
    string longest;
    int count = 0, big_word = 0;

    int size = str.size();

    // loop until encounter space
    for (int i = 0; i < size; i++){

        // if character is not space count
        if(str[i] != ' '){
            count++;
        }

        if(str[i] == ' ' ||  i == size - 1){

            // compare words
            if(count > big_word){
                big_word = count;

                // extract substring from the string          
                if(i == size - 1){
                    longest = str.substr(i + 1 - big_word, big_word);
                }
                else{
                    longest = str.substr(i - big_word, big_word);
                }
                    
            }

            // reset count
            count = 0;
        }
    }

    // output
    cout << "Longest word in the string is: " << longest;
}

int main(){

    // input
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    display_longest_word(str);

    return 0;
}  