#include <iostream>
using namespace std;

int main()
{
    string temp,n,choice;
	string *str = new string[10];
    cout << "Enter Name of the Countries: " << endl;
    for(int i = 0; i < 10; ++i)
    {
    cin >> str[i];
    if (str[i]== "done") {
		break;
	}
	else {
    }
    }
	
    // Use Bubble Sort to arrange words
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << "Name of the countries After Sorts: " << endl;

    for(int i = 0; i < 10; ++i)
    {
       cout << str[i] << endl;
    }
    free(str);
    return 0;
}


