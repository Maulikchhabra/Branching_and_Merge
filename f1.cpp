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
     void display_student_Details()
   {
      cout<<"\nName    : "<<name;
      cout<<"\nGender  : "<<gender;
      cout<<"\nRoll no.: "<<rollno;
   }
}; 
// end of class student (PARENT CLASS)
class Internal_Exam:public Student
{

 public:
  
     float math,eng,chem,phy,ads,scm;
 private:
    void get_marks()
  {
      cout<<"Enter Internal Marks out of 100\n";
      cout<<"Maths     :";
      cin>>math;
      cout<<"English   :";
      cin>>eng;
      cout<<"Chemistry :";
      cin>>chem;
      cout<<"Physics   :";
      cin>>phy;
      cout<<"ADS       :";
      cin>>ads;
      cout<<"SCM       :";
      cin>>scm;
  }
};
