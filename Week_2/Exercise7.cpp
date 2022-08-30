/* 7. Write a function called is_substring that checks whether string s1 is a substring of string s2.
The function returns true if there is a match. Otherwise, return false. */

#include <iostream>
using namespace std;

int is_substring(string str1, string str2){

    int size1 = str1.size();
    int size2 = str2.size();

    // loop to check from i
    for (int i = 0; i <= size2 - size1; i++) {
        int j;

        // check for pattern match
        for (j = 0; j < size1; j++){
            if (str2[i + j] != str1[j]){
                break;
            }
        }

        // return true if string 1 contain in string 2
        if (j == size1)
            return true;
    }

    // return false if string 1 doesn't contain in string 2 
    return false;
}

int main(){

    string str1, str2;

    // input of string 1
    cout << "Enter string 1: ";
    getline(cin, str1);
    
    // input of string 2
    cout << "Enter string 2: ";
    getline(cin, str2); 
    
    int result = is_substring(str1, str2);

    // print the result
    if(result == true){
        cout << "string 1 is a substring of string 2";
    }
    else{
        cout << "string 1 is not a substring of string 2";
    }

    return 0;
}