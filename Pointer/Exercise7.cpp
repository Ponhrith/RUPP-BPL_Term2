#include <iostream>

using namespace std;

int main(){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    int* point = &arr[0][0];

    int array_size = 4, array_row = 0, to_the_next_colum = 0, iteration = 3, backward_array_colum = 0;

    for(; array_row <= 3; array_row++){ 
        int backward_array_colum = 0;

        for(;backward_array_colum <= (array_row - to_the_next_colum);){
            cout << *(point + ((array_size * array_row) + to_the_next_colum) - (iteration * backward_array_colum)) << "\t"; 
            backward_array_colum++;
        }

        cout << endl;

        while(array_row == 3){
            to_the_next_colum++;
            backward_array_colum = 0;

            for(;backward_array_colum <= (array_row - to_the_next_colum);){
            cout << *(point + ((array_size * array_row) + to_the_next_colum) - (iteration * backward_array_colum)) << "\t";
            backward_array_colum++;
        }

        cout << endl;

            if(to_the_next_colum == 3){
                break;
            }
        }
    }

    return 0;
}