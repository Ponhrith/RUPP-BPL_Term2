/* 9. Write a function called capitalize that will receive a string that is passed as an argument, then
capitalizes all words in the string. */

#include <iostream>
using namespace std;

void capitalize(string str){
    
    // receive string
    getline(cin,str);
    
    // loop to capitalize words in string
    int size = str.size();
    for(int i = 0; i < size; i++){

        // capitalize the first letter in the string
        if(islower(str.at(0))){
            str[i] = toupper(str[i]);
        }

        // capitalize letters after detecting space
        if(str[i] == ' '){
           str[i + 1] = toupper(str[i+1]);
        }

    }

    // output the result
    for(int i = 0; i < size; i++){
        cout << str[i];
    }

}

int main(){
    
    // input
    string str;
    cout << "Enter string: ";

    capitalize(str);
    
    return 0;
}