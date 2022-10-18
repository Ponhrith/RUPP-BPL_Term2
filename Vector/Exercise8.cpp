/* 8. (Locate the largest element) Write the following function that returns the location of the largest
element in a two-dimensional vector. The return value is a one-dimensional vector that contains two
elements. These two elements indicate the row and column indexes of the largest element in the two 
dimensional vector. Write a test program that prompts the user to enter a two-dimensional vector and
displays the location of the largest element in the vector. */

#include <iostream>
#include <vector>
using namespace std;

vector< vector<float> > vector2d;

void input_elements(int row);
void check(int row);

int main() {

    int row;

    // input row of vector
    cout << "Enter a number of row in a list: ";
    cin >> row;
    
    input_elements(row);

    check(row);
    
    return 0;
}

// input elements
void input_elements(int row){

    float num;

    for(int i = 0; i < row; i++){
        vector<float> vector1d;

        cout << "Enter a row: ";
        for(int j = 0; j < row; j++){
            cin >> num;
            vector1d.push_back(num);
        }

        vector2d.push_back(vector1d);
    }
}

// check for the largest element in the vector and print it
void check(int ro){

    int row, column;
    float big = 0;

    for(int i = 0; i < ro; i++){
        for(int j = 0; j < ro; j++){
            if(vector2d[i][j] > big){
                big = vector2d[i][j];
                row = i;
                column = j;
            }
        }
    }

    cout << "The location of the largest element is at ("<< row <<", "<< column <<")";
}