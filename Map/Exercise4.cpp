/* 4. (Sum elements column by column) Write a function that returns the sum of all the elements in a
specified column in a matrix. Write a test program that reads a matrix and displays the sum of each
column. */
#include <iostream>
#include <map>
using namespace std;

map<float, map<float, float> > matrix,sum;

void sumofelements()
	{
	// Calculate the sum of each column
    for(int i = 0; i < 4; i++){
       	sum[3][i] = 0;
        for(int j = 0; j < 3; j++){
        sum[3][i] = sum[3][i] + matrix[j][i];
        }
    }
	}

int main(){
void sumofelements();
float num;
	// Enter the matrix
    for(int i = 0; i < 3; i++){
        cout << "Enter a 3-by-4 matrix row for row " << i << ": ";
    for(int j = 0; j < 4; j++){
        cin >> num;
        matrix[i][j] = num;
    	sumofelements();
        }
    }
    cout<< endl;
	// display the sum of each column
    for(int i = 0; i < 4; i++){
        cout << "Sum of the elements for column " << i << " is " << sum[3][i] << endl;
    }
    return 0;
}

