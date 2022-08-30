/* 8. Write a function called swap_case that returns a new string in which the uppercase letters are
changed to lowercase and lowercase to uppercase. */
#include <iostream>
using namespace std;

void swap_case(string str){
    
    // intput and get size
    getline(cin,str);
    int size = str.size();

    // loop to change swap case
    for(int i = 0; i < size; i++){

        // change to lower case if the letter is upper case
        if(isupper(str[i])){
           str[i] = tolower(str[i]);
        }

        // change to upper case if the letter is lower case
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
    }

    //output
    for(int i = 0; i < size; i++){
        cout << str[i];
    }
}

int main(){

    //input
    string str;
    cout << "Enter string: ";

    swap_case(str);

    return 0;
}