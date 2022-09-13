/* 7. Create a pointer to 2D array of integers. Iterate over the array vertically using pointers. */

#include<iostream>
using namespace std;
int main(){

    int arr[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
    };
    
    // pointer to 2D array
    int *p = &arr[0][0];

    // print array vertically
    for(int i = 0; i < 4; i++){
        int count = 0;
        for(int j = 0; j < 16; j += 4){

            // output
            cout << *(p + i + j) << " ";
            count ++;

            // endline when print 4 times
            if(count == 4){
                cout << endl;
            }

        }

    }

    return 0;
}