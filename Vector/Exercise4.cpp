/* 4. (Sum elements column by column) Write a function that returns the sum of all the elements in a
specified column in a matrix. Write a test program that reads a matrix and displays the sum of each
column. */

#include <iostream>
#include <vector>
using namespace std;

vector< vector<float> > matrix;

void input_elements(int row, int column);
void sum_column(int row, int column);

int main(){

    // input size of matrix
    int row, column;
    cout << "Enter matrix row: ";
    cin >> row;

    cout << "Enter matrix column: ";
    cin >> column;

    input_elements(row, column);

    sum_column(row ,column);

    return 0;
}

// input elements
void input_elements(int row, int column){

    float num;

    cout << endl;
    for(int i = 0, j = 1; i < row; i++, j++){
        vector<float> matrix_1;

        cout << "Enter a "<< row <<"-by-"<< column <<" matrix for row "<< j <<": ";
        for(int j = 0; j < column; j++){
           
            cin >> num;
            matrix_1.push_back(num);
        }
        matrix.push_back(matrix_1);
    }

}

// sum each column and print them
void sum_column(int row, int column){

    float sum = 0;

    cout << endl;
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            sum += matrix[j][i];
        }
        cout << "Sum of elements for column "<< i <<" is " << sum << endl;
        sum = 0;
    }
}