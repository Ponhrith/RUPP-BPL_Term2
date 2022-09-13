/* 2.Reverse a string using pointers. */

#include <iostream>
using namespace std;
int main(){

    // input string
    string str;
    cout << "Enter string: ";
    getline(cin, str);

    
    char *p = &str[0];
    int size = str.size();
    
    // revert string
    for(int i = size; i >= 0; i--){
        cout << p[i];
    }

    return 0;
}