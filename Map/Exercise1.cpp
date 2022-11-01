/* 1. Store id, name, salary and department of three employees. Then, write a program that includes a menu
that will allow user to select any of the following features:
a. Display all employees.
b. Add a new employee.
c. Delete an employee by id.
d. Update an employee given an id.
e. Exit the program */

#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

void display_all(map<int, map<string, string>> emp);
void add_emp(map<int, map<string, string>> &emp);
void del_emp(map<int, map<string, string>> &emp);
void upd_emp(map<int, map<string, string>> &emp);

int main(){

    map<int, map<string, string>> emp = {{1, {{"Name", "Mengseu"}, {"Salary", "123"}, {"Department", "ITE"}}},
                                         {2, {{"Name", "Ponrith"}, {"Salary", "345"}, {"Department", "IT"}}},
                                         {3, {{"Name", "Visal"}, {"Salary", "567"}, {"Department", "Nurse"}}}};
    char menu;
    bool run = true;

    while(run == true){
        cout << "\nMenu:\n";
        cout << "a. Display all employees.\n";
        cout << "b. Add a new employee.\n";
        cout << "c. Delete an employee by id.\n";  
        cout << "d. Update an employee given an id.\n";
        cout << "e. Exit the program.\n\n";
        cout << "Opinion: ";
        cin >> menu;

        switch(tolower(menu)){
            case 'a':
                display_all(emp);
                break;
            case 'b':
                add_emp(emp);
                break;
            case 'c':
                del_emp(emp);
                break;
            case 'd':
                upd_emp(emp);
                break;
            case 'e':
                cout << "Exit the program.";
                run = false;
                break;
            default:
                cout << "\nError '"<< menu <<"' is not one of the opinion.\n";
        }
    }

    return 0;
}

void display_all(map<int, map<string, string>> emp){
    cout << endl;
    cout << "ID  Department  Name        Salary" << endl;
    for(auto id: emp){
        cout << id.first;
        cout << "   ";
        for(auto info : id.second){
            cout  << setw(8) << left << info.second;
            cout << "    ";
            
        }
        cout << endl;
    }
}

void add_emp(map<int, map<string, string>> &emp){

    int id, count = 0;
    string name, salary, department;

    cout << "ID: ";
    cin >> id;
    
    for(auto e: emp){
        if(id != e.first){
            count++;
        }
    }

    if(count == emp.size()){

        cout << "Name: ";
        cin >> name;
        emp[id]["Name"] = name;

        cout << "salary: ";
        cin >> salary;
        emp[id]["Salary"] = salary;

        cout << "Department: ";
        cin >> department;
        emp[id]["Department"] = department;
            
        display_all(emp);
    }
    else{
        cout << "Error "<< id <<" is one of the ID\n";
    }
}

void del_emp(map<int, map<string, string>> &emp){

    int id;

    cout << "ID: ";
    cin >> id;

    emp.erase(id);

    display_all(emp);
}

void upd_emp(map<int, map<string, string>> &emp){

    int id, count = 0;
    string name, salary, department;
    
    cout << "ID: ";
    cin >> id;

    for(auto e: emp){
        
        if(id == e.first){

            cout << "Name: ";
            cin >> name;
            emp[id]["Name"] = name;

            cout << "salary: ";
            cin >> salary;
            emp[id]["Salary"] = salary;

            cout << "Department: ";
            cin >> department;
            emp[id]["Department"] = department;
            
            display_all(emp);
        }
    }

    cout << "Error "<< id <<" is not one of the ID\n";
}