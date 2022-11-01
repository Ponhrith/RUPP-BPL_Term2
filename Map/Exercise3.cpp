/* 3. (Compute the weekly hours for each employee) A table below shows the seven-day work hours of eight
employees. Write a program that displays employees in decreasing order of the total hours. */

#include <iostream>
#include <map>
using namespace std;
int main(){

    map <string, int> emp = {{"Employee 0", 0}, {"Employee 1", 0}, {"Employee 2", 0}, {"Employee 3", 0}, 
                             {"Employee 4", 0}, {"Employee 5", 0}, {"Employee 6", 0}, {"Employee 7", 0}};
    multimap <int, string> time;

    int sum,num;
    
    //input
    for(auto e: emp){
       
        cout << "Enter seven-day work hours for "<< e.first <<": ";
        for(int j = 0; j < 7; j++){
            cin >> num;
            sum += num;
        }
        emp[e.first] = sum;
        sum = 0;
        
    }

    // muiltimap
    for(auto e: emp){
        time.insert({e.second, e.first});
    }

    // output
    cout << "\nEmployees in decreasing order of the total hours: ";
    cout << endl;
    for(auto e: time){
        cout << e.second << ": " << e.first << endl;
    }
        
    

    return 0;
}