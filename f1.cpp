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

=======
}; 
// end of class student (PARENT CLASS)
class Internal_Exam:public Student
{

 public:
  
     //float math,eng,chem,phy,ads,scm;
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
    void display_marks()
  {
      cout<<"\nMarks Entered\nMaths "<<math<<"English "<<eng<<"Chemistry "<<chem<<"Physics "<<phy<<"ADS "<<ads<<"SCM "<<scm;
  }
};
>>>>>>> child_class1
=======
};

 class External_Exams:public Student
{
  public:
     float math1,eng1,chem1,phy1,ads1,scm1;
  private:
      void get_marks1()
     {
         cout<<"Enter External Marks out of 100\n";
         cout<<"Maths     :";
         cin>>math1;
         cout<<"English   :";
         cin>>eng1;
         cout<<"Chemistry :";
         cin>>chem1;
         cout<<"Physics   :";
         cin>>phy1;
         cout<<"ADS       :";
         cin>>ads1;
         cout<<"SCM       :";
         cin>>scm1;
     }
      void display_marks1()
     {
         cout<<"\nMarks Entered\nMaths "<<math1<<"English "<<eng1<<"Chemistry "<<chem1<<"Physics "<<phy1<<"ADS "<<ads1<<"SCM "<<scm1;
     }
};
>>>>>>> child_class2
int main()
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

