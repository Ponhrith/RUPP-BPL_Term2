
#include  <iostream>
#include <string.h>
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

void all_inform(imployee imp[], int n){
    for( int j = 0; j < n; j++){
            cout << "_______________________________"<< endl;
            cout << "\nID: " << imp[j].id << endl;
            cout << "name: " << imp[j].name << endl;
            cout << "salary: "<< imp[j].salary <<  endl;
            cout << "department: "<< imp[j].department << endl;
            cout << "day: "<< imp[j].date.month << endl;
            cout << "month: " << imp[j].date.month << endl;
            cout << "year: "<< imp[j].date.year <<  endl;
        }
    
}

void base_salary(imployee imp[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 1 + i; j < n; j++){
            if(imp[i].salary < imp[j].salary){
                temp = imp[i];
                imp[i] = imp[j];
                imp[j] = temp;
            }
            

        }
    }
    all_inform(imp, n);
}

void join_date(imployee imp[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 1 + i; j < n; j++){
         if (imp[i].date.year > imp[j].date.year){
                temp = imp[i];
                imp[i] = imp[j];
                imp[j] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 1 + i; j < n; j++){
            if(imp[i].date.year > imp[j].date.year){
                if (imp[i].date.month > imp[j].date.month){
                    temp = imp[i];
                    imp[i] = imp[j];
                    imp[j] = temp;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        for (int j = 1 + i; j < n; j++){
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
        all_inform(imp, n);
}

void department(imployee imp[], int n){

    string depart;

    cout << "Please input department: ";
    cin >> depart;

    for (int j = 0; j < n; j++){
         int cmp = depart.compare(imp[j].department);
        
        if(cmp == 0){
            cout << "_______________________________"<< endl;
            cout << "\nID: " << imp[j].id << endl;
            cout << "name: " << imp[j].name << endl;
            cout << "salary: "<< imp[j].salary <<  endl;
            cout << "department: "<< imp[j].department << endl;
            cout << "day: "<< imp[j].date.month << endl;
            cout << "month: " << imp[j].date.month << endl;
            cout << "year: "<< imp[j].date.year <<  endl;
            
    }
}
}

int main() {

    int n, opt;

    cout << "Input numbers of imployee: ";
    cin >> n;

    
    imployee imp[n];

    for (int i =0; i < n; i++){
        cout << "input id: ";
        cin >> imp[i].id;

        cout <<  "input name: ";
        cin >> imp[i].name;

        cout << "input salary: ";
        cin >> imp[i].salary;

        cout << "input department: ";
        cin >> imp[i].department;

        cout << "Enter day: ";
        cin >> imp[i].date.day;

        cout << "Enter month: ";
        cin >> imp[i].date.month;

        cout << "Enter year: ";
        cin >> imp[i].date.year;

        cout << endl;

    }

    cout << "\n\noption 1  = all information about all employees.\n";
    cout << "option 2  = information of all employees in ascending order according to their salary\n";
    cout << "option 3  = information in ascending order according to their date of joining.\n";
    cout << "option 4  = information of employees by department given by the user.\n";

    cout << "\n\nplease select one options: ";
    cin >> opt;


if (opt == 1)
    {
        all_inform(imp, n);
    }
    if(opt == 2)
    {
        base_salary(imp, n);
    }
    if(opt == 3){
        join_date(imp, n);
    }
    if(opt == 4){
        department(imp, n);
    }

    return 0;
}