/*Declare a structure to store the following information of an employee: id, name, salary, department, 
JoinedDate (which is itself a structure consisting of day, month, and year) of three employees.
Then, write a program that includes a menu that will allow user to select any of the following features:
a. Use a function to display the information of all employees.
b. Use a function to display the information of all employees in ascending order according to their 
salary.
c. Use a function to insert a new employee.
d. Use a function to delete an employee by id.
e. Use a function to update an employee given an id.
*/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct imployee{
        int id;
        string name;
        int salary;
        string department;

        struct joindate{
            int day;
            int month;
            int year;
        }date;
    }temp;

void all_inform(vector<imployee> &imp){
    
    for (imployee i : imp){
    cout <<"ID: "<< i.id << endl;
    cout <<"Name: "<< i.name << endl;
    cout <<"Salary: "<< i.salary << endl;
    cout <<"Department: "<< i.department << endl;
    cout <<"Day: "<< i.date.day << endl;
    cout <<"Month: "<< i.date.month << endl;
    cout << "year: "<< i.date.year << endl;
    cout << endl;
    }
    
}
void base_salary(vector<imployee> &imp){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(imp[i].salary > imp[j].salary){
                int temp = imp[i].salary;
                imp[i].salary = imp[j].salary;
                imp[j].salary = temp;
            }
        }
    }
all_inform(imp);
}

void ascending_date(vector<imployee> &imp){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(imp[i].date.year > imp[j].date.year){
                temp = imp[i];
                imp[i] = imp[j];
                imp[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(imp[i].date.year > imp[j].date.year){
                if (imp[i].date.month > imp[j].date.month){
                    temp = imp[i];
                    imp[i] = imp[j];
                    imp[j] = temp;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(imp[i].date.year > imp[j].date.year){
                if (imp[i].date.month > imp[j].date.month){
                    if(imp[i].date.day > imp[j].date.day){
                        temp = imp[i];
                        imp[i] = imp[j];
                        imp[j] = temp;
                    }
                    
                }
            }
        }
    }
all_inform(imp);
}

void insert_imployee(vector<imployee> &imp){
    int index = imp.size();
    imp.push_back(imployee());
    cout << "Enter ID: ";
    cin >> imp[index].id;

    cout << "Enter name: ";
    cin >> imp[index].name;

    cout << "Enter salary: ";
    cin >> imp[index].salary;

    cout << "Enter department: ";
    cin >> imp[index].department;

    cout << "Enter day: ";
    cin >> imp[index].date.day;
    
    cout << "Enter month: ";
    cin >> imp[index].date.month;

    cout << "Enter year: ";
    cin >> imp[index].date.year;

    all_inform(imp);
    
}

void delete_id(vector<imployee> &imp){
    int index;
    cout << "Enter ID:";
    cin >> index;
    cout << endl;

    imp.erase(imp.begin() + index - 1);
    all_inform(imp);
}

void update(vector<imployee> &imp){
    int index;
    cout << "Enter ID:";
    cin >> index;
    index--;
    cout << endl;

    cout << "Enter name: ";
    cin >> imp[index].name;

    cout << "Enter salary: ";
    cin >> imp[index].salary;

    cout << "Enter department: ";
    cin >> imp[index].department;

    cout << "Enter day: ";
    cin >> imp[index].date.day;
    
    cout << "Enter month: ";
    cin >> imp[index].date.month;

    cout << "Enter year: ";
    cin >> imp[index].date.year;

    all_inform(imp);
}

int main(){
    vector<imployee> imp {
      {1, "LyMeng", 200, "ITE", 12, 9, 2022},
      {2, "LyHeng", 110, "ITE", 7, 9, 2022},
      {3, "Visal", 300, "IT", 17, 9, 2022}          
    };

    int opt;

    cout << "\n\noption 1  = all information about all employees.\n";
    cout << "option 2  = information of all employees in ascending order according to their salary\n";
    cout << "option 3  = information in ascending order according to their date of joining.\n";
    cout << "option 4  = insert a new employee.\n";
    cout << "option 5  = delete an employee by id.\n";
    cout << "option 6  = update an employee given an id."<< endl;
    cout << "\nPlease choose one of options above: ";
    cin >> opt;
    

    if (opt == 1){
        all_inform(imp);
    }
    else if (opt == 2){
        base_salary(imp);
    }
    else if (opt == 3){
        ascending_date(imp);
    }
    else if (opt == 4){
        insert_imployee(imp);
    }
    else if (opt == 5){
        delete_id(imp);
    }
    else if (opt == 6){
        update(imp);
    }
    else{
        cout << "Error";
    }

    return 0;
}