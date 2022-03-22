#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include <string>
#include "fcivector.h"
using namespace std;


class course
{
   private :
       string course_name;
       string course_code;
       char course_grade;
       float course_point;
       int course_year;
       int course_semester;
    public:

     course()
        {


        }


        /*void printCourseInfo()
        {
            cout<<"course name  : "<<course_name<<endl;
            cout<<"course code  : "<<course_code<<endl;
            cout<<"course grade : "<<course_grade<<endl;
            cout<<"course point : "<<course_point<<endl;
            cout<<"course year  : "<<course_year<<endl;
            cout<<"course semester : "<<course_semester<<endl;

        }*/
        void operator=(course c)
        {
        course_name=c.course_name;
        course_code=c.course_code;
        course_grade=c.course_grade;
        course_point=c.course_point;
        course_year=c.course_year;
        course_semester=c.course_semester;

        }
        bool operator==(course co)
        {
            if((course_name==co.course_name)&&(course_code==co.course_code)&&(course_grade==co.course_grade))
            {
                if((course_point==co.course_point)&&(course_year==co.course_year)&&(course_semester==co.course_semester))
                    return true;
            }
            else
                return false ;


        }

        friend istream&operator>>(istream&input,course &c)
        {
            cout<<"course name:";
        input>>c.course_name;
        cout<<endl;
        cout<<"Course Code:";
        input>>c.course_code;
        cout<<endl;
        cout<<"course Grade(one char):";
        input>>c.course_grade;
        cout<<endl;
        cout<<"course point:";
        input>>c.course_point;
        cout<<endl;
        cout<<"course year:";
        input>>c.course_year;
        cout<<endl;
        cout<<"Course Semester";
        input>>c.course_semester;
        cout<<endl;
        return input;

        }
        friend ostream &operator<<(ostream&output,course &c)
        {
            cout<<"course name:";
        output<<c.course_name;
        cout<<endl;
        cout<<"Course Code:";
        output<<c.course_code;
        cout<<endl;
        cout<<"course Grade(one char):";
        output<<c.course_grade;
        cout<<endl;
        cout<<"course point:";
        output<<c.course_point;
        cout<<endl;
        cout<<"course year:";
        output<<c.course_year;
        cout<<endl;
        cout<<"Course Semester";
        output<<c.course_semester;
        cout<<endl;
        return output;

        }



};

#endif // COURSE_H
