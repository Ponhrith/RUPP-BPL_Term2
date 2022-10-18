/* 1. Write a program that first will read integers from the user into a vector until the user enters 0. Then,
remove all duplicates in the vector, and display the vector. */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    
    int num;
    vector<int> vector;


    // input
    do{
        cout << "Enter a number: ";
        cin >> num;
        if(num != 0){
            vector.push_back(num);
        }
        
    }while(num != 0);


    // sort vector
    for(int i = 0; i < vector.size(); i++){
        for(int j = 1 + i; j < vector.size(); j++){
            if(vector.at(i) > vector.at(j)){
                int temp = vector.at(i);
                vector.at(i) = vector.at(j);
                vector.at(j) = temp;
                
            }
        }
    }

    // output
    for(int i = 0; i < vector.size(); i++){
        if(vector[i] != vector[i + 1]){
            cout << vector.at(i) << " ";
        }
    }
   
    return 0;
}