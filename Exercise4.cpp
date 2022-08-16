#include <iostream>
#include <array>
using namespace std;
int main() {
    int i,b=0;
    
    bool array[456] ;


    //close  all the locker in the array
    for (int i=0; i < sizeof(array); i++)
    {
        array[i] = false;
    }



    for (int i = 1; i <= 456; i++)
    {
        for(int k = 1; k <= 456; k++)
        {
            if (k % i == 0)// if the locker was close or open
            {
                if (array[k-1]  == true)
                
                    array[k-1] = false;//if locker was open then close
                
                else 
                   array[k-1] = true;//if locker was close then open
            }
        }
    }
    //find the opened-door
    for (int i = 0; i < sizeof(array); i++){


    //display the opened-door
        if (array[i]==true){
            cout << "L " << i + 1 << "'s open"<< "\t";
            b++;
            if (b%10==0){
            cout << endl;
            }
        }
    }

    return 0;
    
}
