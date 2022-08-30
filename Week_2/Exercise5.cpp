/* 5. Write a function called display_longest_word that will accept a string, then displays the longest
word within the string. */
#include <iostream>
#include <string>

using namespace std;
void display_longest_word(){
    
    string str, longest;
    int count = 0, big_word = 0;

    cout << "Enter string: ";
    getline(cin , str) ;

    int size = str.size();

    for (int i = 0; i < size; i++){
        if(str[i] != ' '){
            count++;
        }

        if(str[i] == ' ' ||  i == size - 1){
            if(count > big_word){
                big_word = count;
                            
                if(i == size - 1){
                    longest = str.substr(i + 1 - big_word, big_word);
                }
                else{
                    longest = str.substr(i - big_word, big_word);
                }
                    
            }
            count = 0;
        }
    }
cout << "Longest word in the string is: " << longest;

}

int main(){

    display_longest_word();

    return 0;
}  