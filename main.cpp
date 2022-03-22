#include <iostream>
#include <string>
#include"fcivector.h"
#include"course.h"
#include"student.h"

using namespace std;
void print (); //to print list of operations
void check(int &);//check he want to do other operation or not
template<class t>//template for type of list
void function_of_vector (fcivector <t>list)
{
    int other_operation=1;
    char choice3;
    int choice2;
        while(other_operation==1)
           {

            print();
            cin>>choice2;
            switch(choice2) //this switch to do his choice operation
            {
            case 1:
                { int num_element;
                t xelement; //template
                    cout<<"How many elements you would like to add? "<<endl;
                    cin>>num_element;

                    for (int i=0;i<num_element;i++)
                    {
                        cout<<"Enter elements: "<<i+1<<endl;
                        cin>>xelement;
                        list.push_back(xelement);
                    }
                    check(other_operation);

                }break;
            case 2:
               {

                list.pop_back();
                cout<<list.size()<<endl;
                check(other_operation);

                }break;
            case 3:
                { int pos;t val;t *poss;
                    cout<<"enter the position of element please "<<endl;
                    cin>>pos;
                    cout<<"enter the value of element please "<<endl;
                    cin>>val;
                    if (pos!=1)
                     poss=list.begin()+(pos);
                    else if (pos==1)
                     poss=list.begin();
                    else
                    {

                       cout<<"you enter wrong number"<<endl;
                    }



                    list.insert(poss,val);


                }break;
            case 4:
                {
                    int pos;
                    cout<<"enter the position of element please "<<endl;
                    cin>>pos;
                    t *poss=list.begin()+pos-1;

                    list.erase(poss);

                }break;
            case 5:
                {
                    list.clear();
                    check(other_operation);
                }
                break;
            case 6:
                {
                   cout<<list.front()<<endl;
                    check(other_operation);

                }break;
            case 7:
                {
                   cout<<list.back()<<endl;
                    check(other_operation);


                }break;
            case 8:
                { int number_index;
                    cout<<"Enter the index of element :"<<endl;
                    cin>>number_index;
                    cout<<"element = "<<list[number_index]<<endl;

                }break;
            case 9:
                {
                    cout<<"size = "<<list.size()<<endl;
                    check(other_operation);

                }break;
            case 10:
                {
                    cout<<"capacity = "<<list.capacity()<<endl;
                    check(other_operation);

                }break;

            case 11:
               {

                if (list.empty()==1)
                    cout<<"true"<<endl;
                else
                    cout<<"false"<<endl;

                check(other_operation);
                    } break;









            }}

}
int main()
{  bool end_loop=false; //to continue looping until the user choice exit

    while(end_loop==false)
    {


    int choice1,choice2;
    cout<<"Insert type of vector you would like to create: \n"<<endl;
    cout<<"1. list of integer \n"<<endl;
    cout<<"2. list of character \n"<<endl;
    cout<<"3. list of string \n"<<endl;
    cout<<"4. list of float \n"<<endl;
    cout<<"5. list of students \n "<<endl;
    cout<<"6. Exit"<<endl;
    cin>>choice1;
    switch (choice1) //this switch to create a type of vector
    {
    case 1:
        {
            cout<<"A vector of integer was created successfully. \n "<<endl;
            fcivector<int>list_int;
            function_of_vector(list_int);

        }break;
    case 2:
        {
            cout<<"A vector of character was created successfully. "<<endl;
            fcivector<char>list_char;
            function_of_vector(list_char);


        }break;
    case 3:
        {
            cout<<"A vector of string was created successfully. "<<endl;
            fcivector<string>list_string;
            function_of_vector(list_string);


}


        break;

    case 4:
        {
            cout<<"A vector of float was created successfully. "<<endl;
            fcivector<float>list_float;
            function_of_vector(list_float);

        }break;
    case 5:
        {
            cout<<"A vector of students was created successfully. "<<endl;
            fcivector<student>list_student;
            function_of_vector(list_student);



        }break;
    case 6:
        {
        return 0;
        }
    }}
    return 0;
}
void print ()
{
            cout<<"What kind of operation would you like to perform ? \n"<<endl;
            cout<<"1. Add element. \n"<<endl;
            cout<<"2. Remove last element.\n "<<endl;
            cout<<"3. Insert element at certain position.\n"<<endl;
            cout<<"4. Erase element from a certain position.\n"<<endl;
            cout<<"5. Clear. \n"<<endl;
            cout<<"6. Display first element.\n"<<endl;
            cout<<"7. Display last element.\n"<<endl;
            cout<<"8. Display element at certain position \n"<<endl;
            cout<<"9. Display vector size.\n"<<endl;
            cout<<"10. Display vector capacity."<<endl;
            cout<<"11. Is empty? "<<endl;
}
void check (int & x)
{ char choice3;
    cout<<"Would you like to perform other operations? (Y/N) \n";
                    cin>>choice3;
                    if (choice3=='n')
                        x=0;
}



