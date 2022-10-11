/* 1. Write a structure to store the id (starts from 1), name, age (between 11 to 18) and address of five
students. Include a menu that will allow the user to select any of the following features:
a. Display the names of all the students having age entered by the user.
b. Display the names of all the students having even id.
c. Display the information of the student whose id is entered by the user. */

#include<iostream>
using namespace std;

struct student{
        int id;
        string name;
        int age;
        string city;
    }info[5];

void age(){

    int age;
    cout << "\n\nEnter age: ";
    cin >> age;

    if(age == info[0].age){
        cout << "___________________" << endl;
        cout << "Id: " << info[0].id << endl;
        cout << "Name: " << info[0].name << endl;
        cout << "Age: " << info[0].age << endl;
        cout << "City: " << info[0].city << endl;
    }

    if(age == info[1].age){
        cout << "___________________" << endl;
        cout << "Id: " << info[1].id << endl;
        cout << "Name: " << info[1].name << endl;
        cout << "Age: " << info[1].age << endl;
        cout << "City: " << info[1].city << endl;
    }

    if(age == info[2].age){
        cout << "___________________" << endl;
        cout << "Id: " << info[2].id << endl;
        cout << "Name: " << info[2].name << endl;
        cout << "Age: " << info[2].age << endl;
        cout << "City: " << info[2].city << endl;
    }

    if(age == info[3].age){
        cout << "___________________" << endl;
        cout << "Id: " << info[3].id << endl;
        cout << "Name: " << info[3].name << endl;
        cout << "Age: " << info[3].age << endl;
        cout << "City: " << info[3].city << endl;
    }

    if(age == info[4].age){
        cout << "___________________" << endl;
        cout << "Id: " << info[4].id << endl;
        cout << "Name: " << info[4].name << endl;
        cout << "Age: " << info[4].age << endl;
        cout << "City: " << info[4].city << endl;
    }
}

void even_id(){
    for(int i = 0; i < 5; i++){
        if(info[i].id % 2 == 0){
            cout << "___________________" << endl;
            cout << "Id: " << info[i].id << endl;
            cout << "Name: " << info[i].name << endl;
            cout << "Age: " << info[i].age << endl;
            cout << "City: " << info[i].city << endl;
        }
    }
}

void id_input(){

    int ID;
    cout << "\n\nPlease input student's id: ";
    cin >> ID;  

    if (ID == info[0].id){
        cout << "Id: " << info[0].id << endl;
        cout << "Name: " << info[0].name << endl;
        cout << "Age: " << info[0].age << endl;
        cout << "City: " << info[0].city << endl;
        
    }
    if (ID == info[1].id){
        cout << "Id: " << info[1].id << endl;
        cout << "Name: " << info[1].name << endl;
        cout << "Age: " << info[1].age << endl;
        cout << "City: " << info[1].city << endl;

    }
    if (ID == info[2].id){
        cout << "Id: " << info[2].id << endl;
        cout << "Name: " << info[2].name << endl;
        cout << "Age: " << info[2].age << endl;
        cout << "City: " << info[2].city << endl;

    }
    if(ID == info[3].id){
        cout << "Id: " << info[3].id << endl;
        cout << "Name: " << info[3].name << endl;
        cout << "Age: " << info[3].age << endl;
        cout << "City: " << info[3].city << endl;
        }


    if(ID == info[4].id){
        cout << "Id: " << info[4].id << endl;
        cout << "Name: " << info[4].name << endl;
        cout << "Age: " << info[4].age << endl;
        cout << "City: " << info[4].city << endl;
    
}
}

int main(){
    char choice;

    for(int i = 0; i < 5; i++){
        cout << "Enter id: ";
        cin >> info[i].id;

        cout << "Enter name: ";
        cin >> info[i].name;


        cout << "Enter age: ";
        cin >> info[i].age;

        cout << "Enter city: ";
        cin >> info[i].city;

        cout << endl;

    }
do{
cout << "Menu:" << endl;
cout << "a. Display the names of all the students having age entered by the user." << endl;
cout << "b. Display the names of all the students having even id." << endl;
cout << "c. Display the information of the student whose id is entered by the user." << endl;
cout << "d. Exit Program." << endl;
cout << "Select an option:";
cin >> choice;

if(choice == 'a'){
    age();
}

else if(choice == 'b'){
    even_id();
}

else if(choice == 'c'){
    id_input();
}

else if(choice == 'd'){
    cout << "Exit program";
}

else{
    cout << "Error";
}

}while(choice != 'd');

    return 0;
}