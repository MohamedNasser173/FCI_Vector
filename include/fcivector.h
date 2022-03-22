#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include<iostream>
#include <string>
#include <cmath>
using namespace std;
template<class T>
class fcivector
{
private:
     int numberofelements=0;
     int capacityy=1;
      T *array=new T[capacityy],*array2;

public :

fcivector(){}
    void push_back( T xelement)
    {

    if (capacityy==numberofelements)
    {
        capacityy=2*numberofelements;
    array2=new T [numberofelements];
    for(int i=0;i<numberofelements;i++)
    {
        array2[i]=array[i];
    }
    array=new T[capacityy];
    for(int i=0;i<numberofelements;i++)
    {
        array[i]=array2[i];
    }

    }



        array[numberofelements]=xelement;
        numberofelements++;

    }
  int  size()
    {
        return numberofelements;
    }
    bool empty()
    {
          if (numberofelements==0)
          return true;
          else
            return false;

    }
    void clear()
{
numberofelements=0;

}
void pop_back()
{   if (numberofelements>0)
    numberofelements--;
};
T& front ()
{
    return array[0];
}
T& back()
{
    return array[numberofelements-1];
}
int capacity()
{

    return capacityy;
    //pow (2,int(ceil(1.0*log2(numberofelements)))); ask AI for this equation;

}

T*begin()
{
    return &array[0];;

}
void insert( T* position, T val )
{
    numberofelements++;
            int count=0;
            T temp;
            while(true)
            {
                if(array[count]==*position)
                    {
                        temp=array[count];
                        array[count]=val;
                        break;
                    }
                count++;
            }
            for(int i=numberofelements;i>count;i--)
            {
                array[i]=array[i-1];
            }
            array[count+1]=temp;
}



T& operator[ ](int index )
{
    return array[index];
}
void erase (T *position)
{
    numberofelements--;
           int counter=0;
            while(true)
            {
                if(array[counter]==*position)
                    {
                        break;
                    }
                counter++;
            }
            for(int i=counter;i<numberofelements;i++)
            {
                array[i]=array[i+1];
            }

}
bool operator==(fcivector<T>vec)
{ int check=0;
    for (int i=0;i<vec.size();i++)
    {

     if(array[i]==vec[i])
        check=check+1;


     }
     if (check!=0)
        return true;
     else
        return false;
}



};

#endif // FCIVECTOR_H
