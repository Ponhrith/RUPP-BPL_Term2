#include <iostream> 

  

using namespace std; 

  
// Recursive function to traverse the 
// matrix Diagonally Bottom-up 

bool traverseMatrixDiagonally(int m[][5],  

          int i, int j, int row, int col) 
{ 

      

    // Static variable for changing 

    // Row and column 

    static int k1 = 0, k2 = 0; 

      

    // Flag variable for handling 

    // Bottom up diagonal traversing 

    static bool flag = true; 

      

    // Base Condition 

    if (i >= row || j >= col) { 

          

        // Condition when to traverse 

        // Bottom Diagonal of the matrix 

        if (flag) { 

            int a = k1; 

            k1 = k2; 

            k2 = a; 

            flag = !flag; 

            k1++; 

        } 

        else { 

  

            int a = k1; 

            k1 = k2; 

            k2 = a; 

            flag = !flag; 

        } 

        cout << endl; 

        return false; 

    } 

      

    // Print matrix cell value 

    cout << m[i][j] << " "; 

      

    // Recursive function to traverse 

    // The matrix diagonally 

    if (traverseMatrixDiagonally( 

           m, i + 1, j + 1, row, col)) { 

        return true; 

    } 

    // Recursive function  

    // to change diagonal 

    if (traverseMatrixDiagonally( 

            m, k1, k2, row, col)) { 

        return true; 

    } 

      

    return true; 
} 

  
// Driver Code 

int main() 
{ 

    // Initialize the 5 x 5 matrix 

    int mtrx[5][5] = { 

        { 10, 11, 12, 13, 14 }, 

        { 15, 16, 17, 18, 19 }, 

        { 20, 21, 22, 23, 24 }, 

        { 25, 26, 27, 28, 29 }, 

        { 30, 31, 32, 33, 34 } 

    }; 

  

    // Function call  

    // for traversing matrix 

    traverseMatrixDiagonally( 

            mtrx, 0, 0, 5, 5); 
} 