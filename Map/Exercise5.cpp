/* 5. (Guess the capitals) Write a program that repeatedly asks the user to enter a capital city for a country.
Upon receiving the user input, the program reports whether the answer is correct. Assume that 10
countries and their capital cities are stored in a map. The program asks the user to answer all the
countries’ capital cities and displays the total correct count. The user’s answer is not case sensitive. */

#include<iostream>
#include<map>
#include<cstring>
using namespace std;

bool check(map<string, string> cap, string ans, string coun);

int main(){

    map<string, string> cap = {{"Cambodia", "Phnom Penh"}, {"Thailand", "Bangkok"},
                               {"China", "Beijing"}, {"Japan", "Tokyo"},
                               {"India", "Delhi"}, {"Malaysia", "Kuala Lumpur"}};

    int count = 0, win = 0;
    string ans;

    for(auto e: cap){
        cout << "What is the capital of "<< e.first <<": ";
        getline(cin, ans);
        count = check(cap, ans, e.second);
        win += count;
    }

    cout << "The correct count is "<< win <<"";

    return 0;
}

bool check(map<string, string> cap, string ans, string country){
    
    bool check = false;
    if(strcmpi(ans.c_str(), country.c_str()) == 0){
        check = true;
    }

    if(check == true){
        cout << "\nYour answer is correct\n\n";
        return true;
    }
    else{
        cout << "\nThe correct answer should be "<< country <<"\n\n";
        return false;
    }
   
}