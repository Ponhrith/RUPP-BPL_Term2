/* 4. Write a program that keeps reading an integer until the user input 0, then displays all the integers
that have been read in ascending order. */

#include<iostream>
#include<cstdlib>

using namespace std;
int main(){

    int count = 0;
    int *ptr = (int*) malloc(100 * sizeof(int));


    // loop until input is 0
    do{

        // input
        cout << "Enter an integer: ";
        cin >> *ptr;

        // store values in pointer
        *(ptr + count++) = *ptr;

    }while(*ptr != 0);


    // sort the values in ascending order
    for(int i = 0; i < count - 1; i++){
        for(int j = i + 1; j < count - 1; j++){

            if(*(ptr + i) > *(ptr + j)){

                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    
    // output
    for(int i = 0; i < count - 1; i++){
        cout << *(ptr + i) << " ";
    }

    free(ptr);

    return 0;
}