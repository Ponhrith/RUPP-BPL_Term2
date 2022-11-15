#include<iostream>
#include<conio.h>
using namespace std;
class date{
	// date1
    int day1;
	int month1;
	int year1;
	// date2
	int day2;
	int month2;
	int year2;
	// case
 	int f=0;
	public:
	void date_to_string()
	{
 		{
 		//enter the date 1
		cout<<"Enter The Date "<<endl;
		scanf("%d/%d/%d", &day1, &month1, &year1);
		// enter the date 2
		cout<<"Enter The Date "<<endl;
		scanf("%d/%d/%d", &day2, &month2, &year2);
		
		cout<<"\nEntered Date is "<<day1<<"/"<<month1<<"/"<<year1;
		cout<<"\nEntered Date is "<<day2<<"/"<<month2<<"/"<<year2<<endl;
	}
	}
	//same age 
	void is_same_age_as()
	{
  //equal
 if(day1==day2)
 {
  if(month1==month2)
  {
   if(year1==year2)
   {
    f=0;
   }
  }
 }
	}
	//older than
 void is_older_than(){
 //older f1
 if(day1<day2)
 {
  if(month1==month2)
  {
   if(year1==year2)
   {
    f=1;
   }
  }
 }
 //older f2
 if(day1==day2)
 {
  if(month1<month2) 
  {
   if(year1==year2)
   {
    f=2;
   }
  }
 }
 //older f3
 if(day1==day2)
 {
  if(month1==month2)
  {
   if(year1<year2)
   {
    f=3;
   }
  }
 }
 //older f4
 if(day1<day2)
 {
  if(month1<month2)
  {
   if(year1<year2)
   {
    f=4;
   }
  }
 }
 //older f5
 if(day1==day2)
 {
  if(month1<month2)
  {
   if(year1<year2)
   {
    f=5;
   }
  }
 }
 //older f6
 if(day1<day2)
 {
  if(month1==month2)
  {
   if(year1<year2)
   {
    f=6;
   }
  }
 }
 //older f7
  if(day1>day2)
 {
  if(month1==month2)
  {
   if(year1<year2)
   {
    f=7;
   }
  }
  }
  //older f8
 if(day1<day2)
 {
  if(month1<month2)
  {
   if(year1==year2)
   {
    f=8;
   }
  }
 }
 //older f9
  if(day1>day2) 
 {
  if(month1<month2) 
  {
   if(year1==year2)
   {
    f=9;
   }
  }
 }
 //older f10
   if(day1>day2)
 {
  if(month1<month2)
  {
   if(year1<year2)
   {
    f=10;
   }
  }
 }
 //older f11
   if(day1<day2)
 {
  if(month1>month2)
  {
   if(year1<year2)
   {
    f=11;
   }
  }
 }
 //older f12
if(day1<day2) 
 {
  if(month1>month2) 
  {
   if(year1==year2)
   {
    f=12;
   }
  }
 }
 //older f13
 if(day1>day2) 
 {
  if(month1==month2)
  {
   if(year1==year2)
   {
    f=13;
   }
  }
 }
 //older f14
 if(day1==day2)
 {
  if(month1>month2) 
  {
   if(year1==year2)
   {
    f=14;
   }
  }
 }
 //older f15
 if(day1==day2)
 {
  if(month1==month2)
  {
   if(year1>year2)
   {
    f=15;
   }
  }
 }
 //older f16
 if(day1>day2)
 {
  if(month1>month2)
  {
   if(year1>year2)
   {
    f=16;
   }
  }
 }
 //older f17
 if(day1==day2)
 {
  if(month1>month2)
  {
   if(year1>year2)
   {
    f=17;
   }
  }
 }
 //older f18
 if(day1>day2)
 {
  if(month1==month2)
  {
   if(year1>year2)
   {
    f=18;
   }
  }
  }
  //older f19
  if(day1<day2)
 {
  if(month1==month2)
  {
   if(year1>year2)
   {
    f=19;
   }
  }
  }
  //older f20
  if(day1>day2)
 {
  if(month1>month2)
  {
   if(year1==year2)
   {
    f=20;
   }
  }
 }
 //older f21
  if(day1<day2)
 {
  if(month1>month2)
  {
   if(year1>year2)
   {
    f=21;
   }
  }
 }
 //older f11
   if(day1>day2)
 {
  if(month1<month2)
  {
   if(year1>year2)
   {
    f=22;
   }
  }
 }
 // same age f0
 if(f==0)
 cout<<"\n"<<day1<<"/"<<month1<<"/"<<year1<<" is_same_age_as "<<day2<<"/"<<month2<<"/"<<year2;
 // older than f1-f10
 else if(f==1||f==2||f==3||f==4||f==5||f==6||f==7||f==8||f==9||f==10||f==11)
 cout<<"\n"<<day1<<"/"<<month1<<"/"<<year1<<" is Older than "<<day2<<"/"<<month2<<"/"<<year2;
 // older than f11=f20
 else if(f==12||f==13||f==14||f==15||f==16||f==17||f==18||f==19||f==20||f==21||f==22)
 cout<<"\n"<<day2<<"/"<<month2<<"/"<<year2<<" is Older than "<<day1<<"/"<<month1<<"/"<<year1;
}
};
int main()
{
	date o; // o be any variable of data type 'date'
	o.date_to_string(); //calling function date_to_string()
	o.is_same_age_as(); //calling function is_same_age_as()
	o.is_older_than(); //calling function is_older_than()
}
