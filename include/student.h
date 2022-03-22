#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include <string>
#include"course.h"
#include"fcivector.h"
using namespace std;
class student
{
    private :
    string sname;
    string sdepartment;
    int sid,num_courses;
    course cours[50];


    public :



        student(){}


       /* void printInfo()
       {

        cout<<"the name of student : "<<sname<<endl;
        cout<<" Department :  "<<sdepartment<<endl;
        cout<<"ID :"<<sid<<endl;
        for(int k=0;k<num_courses;k++)
        {
         cout<<"course number "<<k+1<<endl;
            cours[k].printCourseInfo();
            }};*/






       friend istream &operator>>(istream&in,student &s)
       {
           cout<<"Student name :";
           in>>s.sname;cout<<endl;
           cout<<"Student ID :";
           in>>s.sid;cout<<endl;
           cout<<"Student department:";
           in>>s.sdepartment;cout<<endl;
           cout<<endl;
           cout<<"number of courses :";
           in>>s.num_courses;cout<<endl;
           course c;
           for(int i=0;i<s.num_courses;i++)
           {
               cout<<"course #"<<i+1<<"INFO"<<endl;
               cin>>c;
           s.cours[i]=c;}
           return in;

           }
           friend ostream &operator<<(ostream&out,student &s)
       {
           cout<<"Student name :";
           out<<s.sname;cout<<endl;
           cout<<"Student ID :";
           out<<s.sid;cout<<endl;
           cout<<"Student department:";
           out<<s.sdepartment;cout<<endl;
           cout<<endl;
           for(int i=0;i<s.num_courses;i++)

           {
               cout<<"course number :"<<i+1<<endl;
               cout<<s.cours[i]<<endl;
           }

           return out;

           }
        bool operator==(student s)
        {
            if((sname==s.sname)&&(sid=s.sid)&&(sdepartment==s.sdepartment)&&(cours==s.cours))
                return true;
            else
                return false ;


        }







};

#endif // STUDENT_H

