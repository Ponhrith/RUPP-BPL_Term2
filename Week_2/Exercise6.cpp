#include<iostream>
using namespace std;

void convert(int value)
{
  
    char *first[20] = {"ZERO", "ONE", "TWO", "THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN",
    "ELEVEN","TWELVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"};
  
    char *second[10] = {"", "TEN", "TWENTY", "THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};

    if(value<0)
    {
        cout<<" ";
        convert(-value);
    }
    else if(value>=1000)
    {
        convert(value/1000);
        cout<<" THOUSAND";
        if(value % 1000)
        {
            if(value % 1000 < 100)
            {
                cout << " AND";
            }
            cout << " " ;
            convert(value % 1000);
        }
    }
    else if(value >= 100)
    {
        convert(value / 100);
        cout<<" HUNDRED";
        if(value % 100)
        {
            cout << " AND ";
            convert (value % 100);
        }
    }
    else if(value >= 20)
    {
        cout << second[value / 10];
        if(value % 10)
        {
            cout << " ";
            convert(value % 10);
        }
    }
    else
    {
        cout<<first[value];
    }
    return;
    
}

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    convert(number);
    return 0;
}