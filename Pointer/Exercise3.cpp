#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100], word[20];
    char *p1 = &str[100];
    char *p2= &word[20];
    int i, j, ls, lw, k, countWord=0, chk, doIncrement;
    cout<<"Enter the String: ";
 	gets(str);
    cout<<"Enter the Word: ";
    gets(word);
    // variable to hold the length of string and word
    ls = strlen(str);
    lw = strlen(word);
    for(i=0; i<ls; i++)// run from the first character to the last character of string
    {
        k = i;
        doIncrement = 0;
        for(j=0; j<lw; j++)// run from the first character to the last character of given word
        {
            if(str[i]==word[j])// checked whether the given word present inside the string or not
            {
                {
                    if(str[k+lw]==' ')// 
                        doIncrement=1;
                }
                	if(k>0 && (k+lw)==ls)//check if the word is the same as what the user enter
                {
                    if(str[k-1]== ' ')// 
                        doIncrement=1;
                }
                if(doIncrement==1)// 
                    i++;
                else
                    break;
            }
        }
        chk = i-k;
        if(chk==lw)// if chk equal the length of word or not then if the word gets found so it have to increament the value of countW variable that hold the occurrence of word
            countWord++;
        i = k;// initialize the value of k and continue the process until the last character of string
    }
    cout<<"\nOccurrence of word "<<word<<" = "<<countWord;// print the occurrence of word
    return 0;
}
