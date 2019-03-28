#include<iostream>
using namespace std;

class Student
{
 protected:
 
    char name[50];
    char gender;
     int rollno;
 public:
     void student_Details()
   {
     cout<<"Enter your name\n";
     cin>>name;
     cout<<"\nEnter your gender\n";
     cin>>gender;
     cout<<"\nEnter your roll no.";
     cin>>rollno;
   }
};   // end of class student (PARENT CLASS)
