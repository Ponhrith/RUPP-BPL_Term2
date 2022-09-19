#include <iostream>

using namespace std;

int arr[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
};

int* point = &arr[3][0];


int main(){
    int array_row_size = 4, array_row = 0, to_the_next_colum = 0, iteration = 5, activate_iteration = 0;
    
    for(array_row = 0; array_row <= 3; array_row++){
        for(activate_iteration = 0; activate_iteration <= (array_row_size + array_row - 4); activate_iteration++){
            cout << *((point - (array_row_size * array_row) + to_the_next_colum) + (iteration * activate_iteration)) << "\t";
        }
        activate_iteration = 0;
        cout << endl;
    }

    while(array_row >= 3){
        array_row = 3;
        to_the_next_colum++;
            for(activate_iteration = 0; activate_iteration <= (array_row_size + array_row - to_the_next_colum - 4); activate_iteration++){
                cout << *((point - (array_row_size * array_row) + to_the_next_colum) + (iteration * activate_iteration)) << "\t";  
        }
        activate_iteration = 0;
        cout << endl;
        if(to_the_next_colum == 3){
            break;
        }
    }
    return 0;
}
