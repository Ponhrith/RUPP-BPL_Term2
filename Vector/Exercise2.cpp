/* 2. Write a program that keeps reading the name of a country until the user enters “Done”. Then, it
alphabetically sorts the names of the countries that have been read, and displays those countries. */

#include <iostream>
#include <vector>
using namespace std;
int main() {

    string str;
    vector<string> vector = {};

    // input
    do{

        cout << "Enter a country: ";
        getline(cin, str);
        
        if(str != "done"){
            vector.push_back(str);
        }
        
    
    }while(str != "done");

    // sort alphabetically
    for(int i = 0; i < vector.size(); i++){
        for(int j =  i + 1; j < vector.size(); j++){
            if(vector.at(i) > vector.at(j)){
                string temp = vector.at(i);
                vector.at(i) = vector.at(j);
                vector.at(j) = temp;
            }
        }
    }

    // output
    for(int i = 0; i < vector.size(); i++){
        cout << vector.at(i) << " ";
    }


    return 0;
}