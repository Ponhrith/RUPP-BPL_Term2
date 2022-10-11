#include<iostream>
#include<stdlib.h>
using namespace std;

struct Name{  
    // define the Name of the structure  
    char name[30];  
    int id;  
};

struct Date{
	// define the date of the structure  
   int month;
   int day;
   int year;
};

int main(){
    // define the variables of the Structure with pointers  
    struct Name name1, name2, *ptr1, *ptr2;  
    // store the address of the name1 and name2 structure variable  
    ptr1 = &name1;  
    ptr2 = &name2;
    
    cout<<" Name1: \n"; 
    cout<< " Enter the name of the Name1: ";  
    cin>>ptr1->name;
    cout<< " Enter the id of the Name1: ";  
    cin>>ptr1->id;
    
    cout<<" \n Name2: \n";  
    cout <<" Enter the name of the Name2: ";  
    cin>>ptr2->name;
    cout<<" Enter the id of the Name2: ";
    cin>>ptr2->id;
    
    cout<<"\n Details of the Name1 \n";  
    cout<<" Name:"<<ptr1->name<<endl;
    cout<<" Id:"<<ptr1->id<<endl;
      
    cout<<"\n Details of the Name2 \n";  
    cout<<" Name:"<<ptr2->name<<endl;
    cout<<" Id:"<<ptr2->id<<endl;
    
   // Birthdate
   struct Date d1, d2;
   int max;
   int larger(struct Date d1, struct Date d2);
   
   cout<<"\n This Program Compares Two Birthdates Between Name1 And Name2";
   cout<<"\n\n Please enter the Name1 Birthdate: dd/mm/yyyy: ";
   scanf("%d/%d/%d", &d1.day, &d1.month, &d1.year);
   if(d1.day>31)
   exit(d1.day>31);
   if(d1.month>12)
   exit(d1.month>12);
   
   cout<<"\n Please enter the Name2 Birthdate: dd/mm/yyyy: ";
   scanf("%d/%d/%d", &d2.day, &d2.month, &d2.year);
   if(d2.day>31)
   exit(d2.day>31);
   if(d2.month>12)
   exit(d2.month);
   
   max = larger(d1, d2);
   // Switch Case
   switch(max){
    case -1: cout<<"\n"<<"\t"<<ptr1->name<<" is Older than " <<ptr2->name,d1.day,d1.month,d1.year,d2.day,d2.month,d2.year;
    break;
    case 1:  cout<< "\n"<<"\t"<<ptr1->name<<" is Younger than " <<ptr2->name,d1.day,d1.month,d1.year,d2.day,d2.month,d2.year;
    break;
    case 0:  cout<<"\n"<<"\t"<<"Birthdates are equal",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year;
    break;
   }
   return 0;
}
    // Print
int larger(struct Date d1, struct Date d2){
	// case -1
   if ( d1.year < d2.year )
    return (-1);
    // case 1
   else if ( d1.year > d2.year )
    return (1); 

   while ( d1.year = d2.year )
   {
   	//case -1
    if ( d1.month < d2.month )
    return (-1);
    // case 1
   else if ( d1.month > d2.month )
    return (1);
    // case -1
   else if ( d1.day < d2.day )
    return (-1);
    // case 1
   else if( d1.day > d2.day )
    return (1);
   else
   // case 0
    return (0);
  }
}
