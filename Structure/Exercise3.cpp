/* 3. Write a program to store and display the id, name and age, address and marks 
(which is itself a structure consisting of chem_mark, maths_mark and phy_mark) 
of five students using a structure.
Ask the user to enter the marks of those five students in Chemistry, Mathematics and Physics.
Display the student information by including a menu that will allow user to select any of the
following different sorting features:
a. Sort by id
b. Sort by names
c. Sort by total scores */

#include <iostream>
using namespace std;

int total_score[5];

struct student{
        int id;
        string name;
        int age;

        struct address{
            string city;
        } address;

        struct marks{
                int chem_mark;
                int math_mark;
                int phy_mark;
        } mark;
        
    };

    student temp, info[5] = { {3, "Nhep Ponhrith", 16, "Phnom Penh"},
                        {1, "Nay Nadalyvann", 17, "Phnom Penh"},
                        {5, "Tai Mengseu", 18, "Phnom Penh"},
                        {4, "Tek LyHeng", 19, "Phnom Penh"},
                        {2, "Deap Visal", 20, "Phnom Penh"}};

void output(){

    for(int i = 0; i < 5; i++){
        cout << "________________________________" << endl;
        cout << "ID: " << info[i].id << endl;
        cout << "Name: " << info[i].name << endl;
        cout << "Age: " << info[i].age << endl;
        cout << "City: " << info[i].address.city << endl;
        cout << "Chemistry mark: " << info[i].mark.chem_mark << endl;
        cout <<"Mathematic mark: "<< info[i].mark.math_mark << endl;
        cout << "Physic mark: " << info[i].mark.phy_mark << endl << endl;
    }
}
    
void Sort_by_ID(){
    
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(info[i].id > info[j].id){
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;

                int temp2 = total_score[i];
                total_score[i] = total_score[j];
                total_score[j] = temp2;
            }
        }
        
    }

    output();
}

void Sort_by_Names(){
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(info[i].name > info[j].name){
                temp = info[i];
                info[i] = info[j];
                info[j] = temp;

                int temp2 = total_score[i];
                total_score[i] = total_score[j];
                total_score[j] = temp2;
            }
        }
        
    }

     output();
}

void Sort_by_Total_Scores(){
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(total_score[i] > total_score[j]){

                temp = info[i];
                info[i] = info[j];
                info[j] = temp;

                int temp2 = total_score[i];
                total_score[i] = total_score[j];
                total_score[j] = temp2;
            }
        }
        
    }

    output();
}

int main() {
    
    for(int i = 0; i < 5; i++){
        cout << "ID: " << info[i].id << endl;
      
        cout << "Chemistry mark: ";
        cin >> info[i].mark.chem_mark;
        

        cout << "Math mark: ";
        cin >> info[i].mark.math_mark;
        

        cout << "Physic mark: ";
        cin >> info[i].mark.phy_mark;
        

        total_score[i] = info[i].mark.chem_mark + info[i].mark.math_mark + info[i].mark.phy_mark;

        cout << endl;
    }

    output();

    char choice;
    
    do{
    cout << "Menu:\na. Sort by ID\nb. Sort by Names\nc. Sort by Total Scores\nd. Exit Program" << endl;

    cout << "Choose: ";
    cin >> choice;
    cout << endl;
    choice = tolower(choice);
    
    if(choice == 'a'){
        Sort_by_ID();
    }
    
    else if(choice == 'b'){
        Sort_by_Names();
    }

    else if(choice == 'c'){
        Sort_by_Total_Scores();
    }

    else if(choice == 'd'){
        cout << "Exit Program";
    }

    else{
        cout << "Error " << choice << " is one of the opinion" << endl;
    }

    }while(choice != 'd');

    return 0;
}