/* 6. Ask a user for scores of 8 students, named Student1, Student2, …, and Student8, divided into two
groups of four students in each. Each student studies three subjects, so each of them gets three scores.
You must store those scores in a map first, then access the elements of the map to calculate the total
score of each student, the total score of each group of students, and the total score of all students. */

#include<iostream>
#include<map>

using namespace std;

void input(map<string, map<string ,map<string, int>>> &scores);
void total_students_groups(map<string, map<string ,map<string, int>>> scores);
void total_all(map<string, map<string ,map<string, int>>> scores);

int main(){
   map<string, map<string ,map<string, int>>> scores = {{{"Group1", {{"Student1", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student2", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student3", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student4", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}}}},
                                                                     
                                                         {"Group2", {{"Student5", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student6", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student7", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}},
                                                                     {"Student8", {{"Maths", 0}, {"Physics", 0}, {"Chemistry", 0}}}}}}};


    input(scores);
    total_students_groups(scores);
    total_all(scores);


    return 0;
}

void input(map<string, map<string ,map<string, int>>> &scores){

    int mark;

    for(auto group: scores){
        cout << "\n" << group.first << ": ";
        cout << "\n\n";
        for(auto student : group.second){
            cout << "Enter score for "<< student.first <<": ";
            cout << "\n\n";
            for(auto score : student.second){
                cout << score.first << ": ";
                cin >> mark;
                scores[group.first][student.first][score.first] = mark;
            }
        cout << endl;
        }
        cout << endl;
    }
}

void total_students_groups(map<string, map<string ,map<string, int>>> scores){

    int sum = 0;

    cout << endl;
    for(auto group: scores){
        cout << group.first << ":\n";
        cout << "-------------------------------------------------------------------------------------\n";
        cout << "Name             Maths                   Physics                 Chemistry      Total\n";
        cout << "-------------------------------------------------------------------------------------\n";
        for(auto student : group.second){
            cout << student.first;
            for(auto score : student.second){
                cout << "\t " << score.second << "\t\t";
                sum += score.second;
            }
            cout << sum << endl;
        }
        cout << "-------------------------------------------------------------------------------------\n";
        cout << "\t\t\t\t\t\t\t\t Total score: " << "\t" << sum << endl;
        sum = 0;
    }
}

void total_all(map<string, map<string ,map<string, int>>> scores){

    int sum = 0;

    cout << endl;
    cout << "Total score of all student: ";
    for(auto group: scores){
        for(auto student : group.second){
            for(auto score : student.second){
                sum += score.second;
            }
        } 
    }
    cout << sum << endl;
    cout << endl;
}