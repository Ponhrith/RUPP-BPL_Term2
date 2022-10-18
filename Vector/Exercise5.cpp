/* 5. (Compute the weekly hours for each employee) Suppose the weekly hours for all employees are stored
in a table. Each row records an employee’s seven-day work hours with seven columns. For example,
the following table stores the work hours for eight employees. Write a program that displays
employees and their total hours in decreasing order of the total hours. */

#include <iostream>
#include <vector>
using namespace std;

int row = 8, column = 7;
vector<vector<int>> table;

int emp[8] = {0, 1, 2, 3, 4, 5 ,6 ,7};

vector<int> ptr;
vector<int>::iterator iter;

void sum_hour();
void output();
void swap();

int main() {

    // input
    int hours;
    for(int i = 0; i < row; i++){
        vector<int> ro;
        cout << "Enter hours for employee's "<< emp[i] <<" seven-day work hours: ";
        for(int j = 0; j < column; j++){
            cin >> hours;
            ro.push_back(hours);
        }
        table.push_back(ro);
    }
    
    // print table
    cout << endl << "\t    Su M  T  W  Th F  Sa" << endl;
    for(int i = 0; i < row; i++){
        cout << "Employee " << emp[i] << ": ";

        for(int j = 0; j < column; j++){
            
            cout << table[i][j] << "  ";
        }
        cout << endl;
    }

    sum_hour();

    swap();

    output();

    return 0;
}

// sum each employees hours
void sum_hour(){

    for(int i = 0, sum = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            sum += table[i][j];
        }
        ptr.push_back(sum);
        sum = 0;
    }
}

// sort total hours
void swap(){
    iter = ptr.begin();
    for(int i = 0; i < table.size(); i++){
        for(int j = i + 1; j < table.size(); j++){
            if(*(iter + i) < *(iter + j)){
                int temp = *(iter + i);
                *(iter + i) = *(iter + j);
                *(iter + j) = temp;

                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
}

// output
void output(){
    iter = ptr.begin();
    cout << endl << "Employee total hours in decreasing order:" << endl;
    for(int i = 0; i < row; i++){
        cout << "Employee's " << emp[i] << " = " << *(iter + i) << endl;
    }
}