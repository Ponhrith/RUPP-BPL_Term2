#include <iostream>
using namespace std;

int main(){
    int mulNum;
    cout << "Enter a number: ";
    cin >> mulNum;

    for(int i = 1; i < 11; i++ ){
        cout << i << " x " << mulNum << " = " << i*mulNum << endl;
    }
    return 0;

}