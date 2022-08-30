#include <iostream>
#define size 5
using namespace std;
int main()
{
    int arr[size] = {1, 20, 5, 78, 30};
    int key, i, index = -1;

    cout<<"Enter element to delete\n";
    cin>> key;

    for(i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            index = i;
            
        }
    }

    if(index != -1)
    {
        //shift all the element from index+1 by one position to the left
        for(i = index; i < size - 1; i++)
            arr[i] = arr[i+1];

        cout <<"New Array : ";
        for(i = 0; i < size - 1; i++)
            printf("%d ",arr[i]);
    }
    else
        cout <<"Element Not Found\n";

    return 0;
}
