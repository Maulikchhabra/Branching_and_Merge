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
int main(void)
{
    result r;
 Internal_Exam a;
    a.student_Details();    
 a.display_student_Details();
    r.get_marks();
     r.get_marks1();
   r.display_marks();
  r.display_marks1();
  r.calculate(); 
   r.show();
  return 0; 
}

