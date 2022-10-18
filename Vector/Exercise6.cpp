/* 6. Write a program to ask a user for scores of 4 students (Student0, Student1, Student3 and Student4) to
store them in a 2D vector. Note that each student studies 3 subjects, so each of them gets 3 scores.
Display the students and their total scores in decreasing order of their total score. */



#include <iostream>
#include <vector>
using namespace std;

struct Student {
    int id;
    int khmer;
    int math;
    int biology;
}temp;

vector<float> Total;

void input_score(vector<Student> &sub){

    for (int i = 0; i < 4; i++){
        sub.push_back(Student());
        cout << "Enter students id: ";
        cin >> sub[i].id;
        cout << "Enter khmer score: ";
        cin >> sub[i].khmer;
        cout << "Enter math score: ";
        cin >> sub[i].math;
        cout << "Enter biology score: ";
        cin >> sub[i].biology;
        cout << endl;
    }
}

void total_score(vector<Student> &sub){
    int total;
    for (int i = 0; i < 4;i ++){
        total = sub[i].khmer + sub[i].math + sub[i].biology;
        Total.push_back(total);
        total = 0;
    }


}

void sort_score(vector<Student> &sub){
    
    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 4; j++){
            if(Total[i] < Total[j]){
                int temp2 = Total[i] ;
                Total[i]  = Total[j];
                Total[j] = temp2;

                temp = sub[i];
                sub[i] = sub[j];
                sub[j] = temp;

            }
        }
    }
}

void display(vector<Student> &sub){

    for(int i = 0; i < 4; i++){
            cout << "ID: " << sub[i].id << endl;
            cout << "Khmer score: " << sub[i].khmer << endl;
            cout << "Math score: " << sub[i].math << endl;
            cout << "Biology score: " << sub[i].biology << endl;
            cout << "Total score: " << Total[i] << endl; 
            cout << endl; 
    }
}

int main() {
    vector<Student> sub;

    input_score(sub);

    total_score(sub);

    sort_score(sub);

    display(sub);

    return 0;

}