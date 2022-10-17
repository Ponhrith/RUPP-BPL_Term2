#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
int correct = 0;

vector <vector<string>> table = {{"Cambodia", "Thailand", "China", "Japan", "India", "Malaysia"},
                                {"Phnom Penh", "Bangkok", "Beijing", "Tokyo", "Delhi", "Kuala Lumpur"}};

void check(string capital, int index);

int main(){


    int index = 0;
    string capital;
    
    do{
        cout << "Enter a capital city for "<< table[0][index] <<": ";
        getline(cin, capital);
        check(capital, index);
        index++;
    }while(index != table[0].size());    
    
    cout << "The correct count is "<< correct <<"";

    return 0;
}

void check(string capital, int index){

    bool check = false;
    
    if(strcmpi(capital.c_str(), table[1][index].c_str()) == 0){
        check = true;
                
    }

    if(check == true){
        cout << "Your answer is correct\n\n";
        correct++;
    }
    else{
        cout << "The correct capital should be "<< table[1][index] <<"\n\n";
    }
    
}