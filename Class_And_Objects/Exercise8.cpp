/* 8. Define two classes called Employee and EmployeeList.
    - The Employee class contains:
        o Data fields: id, name, and department.
        o A method named read_employee() that will ask the user to enter id, name and
          department of an employee.
    - The EmployeeList class contains:
        o A map data field called list that stores employee objects.
        o An add() method that adds an employee to the list.
        o A remove() method that removes an employee from the list by a given employee id.
        o A display_sort_by_name() method that displays all employees in the list in an 
          ascending order according to their name. */

#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

class Employee{

    public:
        int id;
        string name;
        string department;

        void read_employee(){

            cout << "Enter ID: ";
            cin >> id;

            cout << "Enter Name: ";
            cin >> name;

            cout << "Enter Department: ";
            cin >> department;

        }  
};

class EmployeeList{
    private:
        map<int, vector<string>> employee_list;
    
    public:
        
        void Add(){

            Employee employee;
            vector<string> info;
            
            employee.read_employee();

            info.push_back(employee.name);
            info.push_back(employee.department);

            employee_list[employee.id] = info;

        }

        void Delete(){

            int ID, count = 0;

            cout << "\nEnter ID you want to delete: ";
            cin >> ID;

            for(auto id : employee_list){
                if(id.first == ID){
                    employee_list.erase(ID);
                    break;
                }
                else{
                    count++;
                }
            }

            if(count == employee_list.size()){
                cout << "\nError, Invalid ID.\n";
            }
        }

        void display_all(){
            cout << "\n----------------------------------" << endl;
            cout << "ID" << "\t  Name" << "\t\tDepartment"<< endl;
            cout << "----------------------------------" << endl;
            for(auto id : employee_list){
                cout << id.first << "         ";
                for(string info: id.second){
                    cout << setw(14) << left << info;
                } 
                cout << endl;
            }
            cout << "----------------------------------" << endl;
        }

        void display_sort_by_name(){
            
            multimap<vector<string>, int> name;

            for(auto id : employee_list){
                name.insert({id.second,id.first});
            }

            cout << "\n----------------------------------" << endl;
            cout << "ID" << "\t  Name" << "\t\tDepartment"<< endl;
            cout << "----------------------------------" << endl;
            for(auto id: name){
                cout << id.second << "         ";
                for(string info: id.first){
                    cout << setw(14) << left << info;
                } 
                cout << endl;
            }
            cout << "----------------------------------" << endl;
            
        }
};

int main(){

    EmployeeList emp;
    while(true){

        cout << "\nMenu\n";
        cout << "a. Add a new employee\n";
        cout << "b. Delete employee by id\n";
        cout << "c. Display all employees\n";
        cout << "d. Display all employees sorted by names\n";
        cout << "e. Exit the program\n";

        char menu;
        cout << "\nSelection: ";
        cin >> menu;

        switch(tolower(menu)){

            case 'a':
                emp.Add();
                break;
            case 'b':
                emp.Delete();
                break;
            case 'c':
                emp.display_all();
                break;
            case 'd':
                emp.display_sort_by_name();
                break;
            case 'e':
                exit(0);
            default:
                cout << "\nError, please selection one of the opinion.\n";
        }
    }
    
    return 0;
}