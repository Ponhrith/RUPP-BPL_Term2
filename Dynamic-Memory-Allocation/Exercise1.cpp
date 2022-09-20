/* 1. Write a program that asks the user to enter an integer.
 Keep asking until they enter a value over 5,
and then displays all the numbers the user has entered. */

#include <iostream>
#include <cstdlib>
using namespace std;
int main (){
    
    int num,*ptr,count = 0;
    ptr = (int*)malloc(100 * sizeof(int));

    while (true){
        
        // input
        cout << "input number: ";
        cin >> num;

        // store the values in pointer
        *(ptr + count++) = num;

        // check if the values is over 5 or not
        if (num > 5){
            cout << "The last numbers is over 5" << endl;

            // output
            if (ptr != NULL){
                cout << "All the input numbers are: ";
                for (int j = 0; j < count; j++){
                    cout << *(ptr + j) << " ";
                }
            }

        free(ptr);
        exit(0);

        }
    }

    return 0;
}